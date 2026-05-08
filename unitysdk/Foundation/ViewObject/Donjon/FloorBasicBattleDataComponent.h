#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Donjon/DonjonFloorComponent_1.h"
#include "unitysdk/Struct_2_8A77D15D7EA8B8D3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_DIFFICULTYTAGID_OFFSET UNITYSDK_OFFSET(0x1022F270)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_LEVELABILITYBUFFHANDLES_OFFSET UNITYSDK_OFFSET(0x1022F290)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1022F2B0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_DIFFICULTYTAGID_OFFSET UNITYSDK_OFFSET(0x1022F280)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_LEVELABILITYBUFFHANDLES_OFFSET UNITYSDK_OFFSET(0x1022F2A0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1022F300)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorBasicBattleDataComponent_TypeDefinitionIndex = 81794;

	class FloorBasicBattleDataComponent : public ::Foundation::ViewObject::Donjon::DonjonFloorComponent_1<::Foundation::ViewObject::Donjon::FloorBasicBattleDataComponent*>
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* _LevelAbilityBuffHandles_k__BackingField; // 0x20
		::System::Int32 _DifficultyTagID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DifficultyTagID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_DIFFICULTYTAGID_OFFSET))(this);
		}

		::System::Void set_DifficultyTagID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_DIFFICULTYTAGID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* get_LevelAbilityBuffHandles()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_LEVELABILITYBUFFHANDLES_OFFSET))(this);
		}

		::System::Void set_LevelAbilityBuffHandles(::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_8A77D15D7EA8B8D3>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_LEVELABILITYBUFFHANDLES_OFFSET))(this, value);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_ONRECYCLE_OFFSET))(this);
		}
	};
}
