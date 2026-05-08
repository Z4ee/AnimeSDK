#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIActivityRhythmDiskColor.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class MonoUIColorCollection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOUIACTIVITYRHYTHMCOLORCOLLECTION_SETDISKCOLOR_OFFSET UNITYSDK_OFFSET(0x15BA00A0)
#define MOLEMOLE_MONOUIACTIVITYRHYTHMCOLORCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA01B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIActivityRhythmColorCollection_TypeDefinitionIndex = 75805;

	class MonoUIActivityRhythmColorCollection : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIActivityRhythmDiskColor, ::MoleMole::MonoUIColorCollection*>* diskColor; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIACTIVITYRHYTHMCOLORCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void SetDiskColor(::MoleMole::UIActivityRhythmDiskColor disk)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityRhythmDiskColor))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIACTIVITYRHYTHMCOLORCOLLECTION_SETDISKCOLOR_OFFSET))(this, disk);
		}
	};
}
