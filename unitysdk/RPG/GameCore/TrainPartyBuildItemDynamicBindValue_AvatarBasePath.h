#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyBuildItemDynamicBindValue.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_METHOD_3_102EAB629F8014AD_OFFSET UNITYSDK_OFFSET(0x1C15DD60)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_METHOD_3_F46F8977C130C201_OFFSET UNITYSDK_OFFSET(0x1C15E010)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15DD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_AvatarBasePath_TypeDefinitionIndex = 15627;

	class TrainPartyBuildItemDynamicBindValue_AvatarBasePath : public ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::System::UInt32 MultiPathAvatarType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F46F8977C130C201(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_AvatarBasePath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_AvatarBasePath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_METHOD_3_F46F8977C130C201_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_102EAB629F8014AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_AvatarBasePath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue_AvatarBasePath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_METHOD_3_102EAB629F8014AD_OFFSET))(a1, a2);
		}
	};
}
