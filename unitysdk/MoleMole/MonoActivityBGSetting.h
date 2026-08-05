#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_857393ED9A5330F8.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class Class_1_64C0AC1767DE73DA;
class Class_1_BDBDCB60ACCD082E;
namespace MoleMole { class ActivitBGAnimationSequence; }
namespace MoleMole { class ActivitBGSpineSequence; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOACTIVITYBGSETTING_AWAKE_OFFSET UNITYSDK_OFFSET(0x1790EB80)
#define MOLEMOLE_MONOACTIVITYBGSETTING_CLEAR_OFFSET UNITYSDK_OFFSET(0x1790EFD0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x1790EF10)
#define MOLEMOLE_MONOACTIVITYBGSETTING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1790EE40)
#define MOLEMOLE_MONOACTIVITYBGSETTING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1790EE00)
#define MOLEMOLE_MONOACTIVITYBGSETTING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1790ECA0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_SETUP_OFFSET UNITYSDK_OFFSET(0x1790EC00)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x1790ED60)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STARTSPINEANIMATION_OFFSET UNITYSDK_OFFSET(0x1790F070)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STARTUNITYANIMATION_OFFSET UNITYSDK_OFFSET(0x1790F2A0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_START_OFFSET UNITYSDK_OFFSET(0x1790EC60)
#define MOLEMOLE_MONOACTIVITYBGSETTING_STOPPLAY_OFFSET UNITYSDK_OFFSET(0x1790F5A0)
#define MOLEMOLE_MONOACTIVITYBGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1790F610)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityBGSetting_TypeDefinitionIndex = 62944;

	class MonoActivityBGSetting : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::Enum_3_857393ED9A5330F8 site; // 0x58
		::System::Boolean useSpineSequence; // 0x5C
		::System::Collections::Generic::List_1<::MoleMole::ActivitBGSpineSequence*>* spineSequence; // 0x60
		::System::Boolean useAnimationSequence; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::ActivitBGAnimationSequence*>* animationSequence; // 0x70
		::Class_1_64C0AC1767DE73DA* spineSequencePlayer; // 0x78
		::Class_1_BDBDCB60ACCD082E* animSequencePlayer; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_ONDESTROY_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_DOCOPYRESET_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_CLEAR_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_SETUP_OFFSET))(this);
		}

		::System::Void StartSpineAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STARTSPINEANIMATION_OFFSET))(this);
		}

		::System::Void StartUnityAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STARTUNITYANIMATION_OFFSET))(this);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STARTPLAY_OFFSET))(this);
		}

		::System::Void StopPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_STOPPLAY_OFFSET))(this);
		}
	};
}
