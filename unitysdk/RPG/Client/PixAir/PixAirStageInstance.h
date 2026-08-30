#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirAreaInstance; }
namespace RPG::Client::PixAir { class PixAirStageData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GETAREACOUNT_OFFSET UNITYSDK_OFFSET(0x1BCFA0B0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GETAREAINDEXBYID_OFFSET UNITYSDK_OFFSET(0x1BCF9FB0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_AREAINSTANCES_OFFSET UNITYSDK_OFFSET(0x1BD17AA0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_STAGEDATA_OFFSET UNITYSDK_OFFSET(0x1BD17A80)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1BD17A60)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_AREAINSTANCES_OFFSET UNITYSDK_OFFSET(0x1BD17AB0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_STAGEDATA_OFFSET UNITYSDK_OFFSET(0x1BD17A90)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1BD17A70)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1BCFE3C0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD17AC0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirStageInstance_TypeDefinitionIndex = 78879;

	class PixAirStageInstance : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirStageData* _StageData_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirAreaInstance*>* _AreaInstances_k__BackingField; // 0x18
		::System::UInt32 _StageID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_STAGEID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirStageData* get_StageData()
		{
			return ((::RPG::Client::PixAir::PixAirStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_STAGEDATA_OFFSET))(this);
		}

		::System::Void set_StageData(::RPG::Client::PixAir::PixAirStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_STAGEDATA_OFFSET))(this, a1);
		}

		::System::Int32 GetAreaIndexByID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GETAREAINDEXBYID_OFFSET))(this, a1);
		}

		::System::Int32 GetAreaCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GETAREACOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirAreaInstance*>* get_AreaInstances()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirAreaInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_AREAINSTANCES_OFFSET))(this);
		}

		::System::Void set_AreaInstances(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirAreaInstance*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirAreaInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_AREAINSTANCES_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirStageInstance* TryCreate(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirStageData* a2)
		{
			return ((::RPG::Client::PixAir::PixAirStageInstance*(*)(::System::UInt32, ::RPG::Client::PixAir::PixAirStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_TRYCREATE_OFFSET))(a1, a2);
		}
	};
}
