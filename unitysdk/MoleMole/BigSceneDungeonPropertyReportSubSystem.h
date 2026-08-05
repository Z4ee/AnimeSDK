#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_B229BC73065D28E3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x134D27E0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM_TRIGGERCALEROSIONRECORD_OFFSET UNITYSDK_OFFSET(0x134D28B0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x134D38A0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x134D3810)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x134D3A20)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonPropertyReportSubSystem_TypeDefinitionIndex = 40840;

	class BigSceneDungeonPropertyReportSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneDungeonPropertyReportSubSystem*>
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_RequiredErosionTags()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonPropertyReportSubSystem_TypeDefinitionIndex)->GetStaticField(0x4BD70);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B229BC73065D28E3*>* ErosionContributionRecordMapSnap; // 0x10
		::System::Int32 _burstCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void TriggerCalErosionRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM_TRIGGERCALEROSIONRECORD_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
