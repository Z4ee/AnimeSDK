#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class DynamicBone;
namespace MoleMole { class DynamicBonePara; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_DYNAMICBONEPARASWITCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x11CC2990)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_CHANGEIMMPART_OFFSET UNITYSDK_OFFSET(0x11CC25F0)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_DEALDAMPINGUPDATE_OFFSET UNITYSDK_OFFSET(0x11CC2C50)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_DEALELASTICITY_OFFSET UNITYSDK_OFFSET(0x11CC2D70)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_DEALINERT_OFFSET UNITYSDK_OFFSET(0x11CC2FB0)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_DEALSTIFFNESS_OFFSET UNITYSDK_OFFSET(0x11CC2E90)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_DORECORD_OFFSET UNITYSDK_OFFSET(0x11CC2730)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_SWITCHTOKEY_OFFSET UNITYSDK_OFFSET(0x11CC2430)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_TRYTEST_OFFSET UNITYSDK_OFFSET(0x11CC23E0)
#define MOLEMOLE_DYNAMICBONEPARASWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x11CC2B60)
#define MOLEMOLE_DYNAMICBONEPARASWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC30D0)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicBoneParaSwitch_TypeDefinitionIndex = 42196;

	class DynamicBoneParaSwitch : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DynamicBonePara*>* switchParas; // 0x58
		::System::String* ToKey; // 0x60
		::DynamicBone* target; // 0x68
		::System::Single startTime; // 0x70
		::MoleMole::DynamicBonePara* curPara; // 0x78
		::System::Boolean isSwitching; // 0x80
		::System::Single startDamping; // 0x84
		::UnityEngine::AnimationCurve* dampingCurve; // 0x88
		::System::Single startElasticity; // 0x90
		::UnityEngine::AnimationCurve* elasticityCurve; // 0x98
		::System::Single startStiffness; // 0xA0
		::UnityEngine::AnimationCurve* stiffnessCurve; // 0xA8
		::System::Single startInert; // 0xB0
		::UnityEngine::AnimationCurve* inertCurve; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH__CTOR_OFFSET))(this);
		}

		::System::Void TryTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_TRYTEST_OFFSET))(this);
		}

		::System::Void SwitchToKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_SWITCHTOKEY_OFFSET))(this, key);
		}

		::System::Void DoRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_DORECORD_OFFSET))(this);
		}

		::System::Void ChangeImmPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_CHANGEIMMPART_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_UPDATE_OFFSET))(this);
		}

		::System::Void DealDampingUpdate(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_DEALDAMPINGUPDATE_OFFSET))(this, progress);
		}

		::System::Void DealElasticity(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_DEALELASTICITY_OFFSET))(this, progress);
		}

		::System::Void DealStiffness(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_DEALSTIFFNESS_OFFSET))(this, progress);
		}

		::System::Void DealInert(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARASWITCH_DEALINERT_OFFSET))(this, progress);
		}
	};
}
