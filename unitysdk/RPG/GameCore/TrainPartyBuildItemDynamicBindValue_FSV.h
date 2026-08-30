#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/TrainPartyBuildItemDynamicBindValue.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_METHOD_3_44B2F0F86FF7FDC3_OFFSET UNITYSDK_OFFSET(0x1D533460)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_METHOD_3_AA722626F35EEB4D_OFFSET UNITYSDK_OFFSET(0x1D533190)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV__CTOR_OFFSET UNITYSDK_OFFSET(0x1D533180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_FSV_TypeDefinitionIndex = 16094;

	class TrainPartyBuildItemDynamicBindValue_FSV : public ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::System::String* FloorSavedName; // 0x10
		::System::Int16 FloorSavedValue; // 0x18
		::RPG::GameCore::CompareType Compare; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_44B2F0F86FF7FDC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_FSV*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_FSV*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_METHOD_3_44B2F0F86FF7FDC3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA722626F35EEB4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_FSV* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_FSV*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_FSV_METHOD_3_AA722626F35EEB4D_OFFSET))(a1, a2);
		}
	};
}
