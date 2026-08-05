#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_EROSIONDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x174C2ED0)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_GETCUREYEPERCENT_OFFSET UNITYSDK_OFFSET(0x174C34D0)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_GETCURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x174C3270)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x174C2D10)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x174C3080)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONEROSIONAREAUPDATEFINISH_OFFSET UNITYSDK_OFFSET(0x174C3220)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONEROSIONSTAGECHANGED_OFFSET UNITYSDK_OFFSET(0x174C3480)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_SENDUICHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x174C3380)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x174C3690)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x174C36A0)
#define MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x174C3730)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovErosionEyeSubsystem_TypeDefinitionIndex = 69663;

	class ZenkovErosionEyeSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::ZenkovErosionEyeSubsystem*>
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B>* AllErosionAreaList; // 0x10
		::System::UInt32 OpenEyeCount; // 0x18
		::System::Single debugPercent; // 0x1C
		::System::Boolean HasErosionData; // 0x20
		::System::Boolean debug; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnErosionAreaUpdateFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONEROSIONAREAUPDATEFINISH_OFFSET))(this, args);
		}

		::System::Void ErosionDataUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_EROSIONDATAUPDATE_OFFSET))(this);
		}

		::System::Int32 GetCurrentStage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_GETCURRENTSTAGE_OFFSET))(this);
		}

		::System::Void OnErosionStageChanged(::System::Int32 erosionStage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_ONEROSIONSTAGECHANGED_OFFSET))(this, erosionStage);
		}

		::System::Single GetCurEyePercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_GETCUREYEPERCENT_OFFSET))(this);
		}

		::System::Void SendUIChangeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM_SENDUICHANGEEVENT_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEROSIONEYESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
