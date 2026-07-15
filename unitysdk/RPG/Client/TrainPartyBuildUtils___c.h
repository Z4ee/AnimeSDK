#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TRAINPARTYBUILDUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19891C00)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19891C40)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS___C__GET_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY_B__40_0_OFFSET UNITYSDK_OFFSET(0x19891CB0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS___C__GET_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY_B__38_0_OFFSET UNITYSDK_OFFSET(0x19891C50)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildUtils___c_TypeDefinitionIndex = 65151;

	class TrainPartyBuildUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildUtils___c_TypeDefinitionIndex)->GetStaticField(0x47740);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildUtils___c_TypeDefinitionIndex)->GetStaticField(0x47748);
		}
		static ::RPG::Client::TrainPartyBuildUtils___c** StaticGet___9()
		{
			return (::RPG::Client::TrainPartyBuildUtils___c**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildUtils___c_TypeDefinitionIndex)->GetStaticField(0x47750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY_b__38_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS___C__GET_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY_B__38_0_OFFSET))(this, a1);
		}

		::System::UInt32 _get_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY_b__40_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS___C__GET_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY_B__40_0_OFFSET))(this, a1);
		}
	};
}
