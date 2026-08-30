#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPropParameter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPROPDECALPARAM_METHOD_3_6E9B6F0866B7E69B_OFFSET UNITYSDK_OFFSET(0x1C12F630)
#define RPG_GAMECORE_LEVELPROPDECALPARAM_METHOD_3_ADE3670F539B8828_OFFSET UNITYSDK_OFFSET(0x1C12F680)
#define RPG_GAMECORE_LEVELPROPDECALPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12F670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropDecalParam_TypeDefinitionIndex = 17060;

	class LevelPropDecalParam : public ::RPG::GameCore::LevelPropParameter
	{
	public:
		::System::UInt32 DecalID; // 0x10
		::System::Boolean IsFadeIn; // 0x14
		::System::Boolean IsFadeOut; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPDECALPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E9B6F0866B7E69B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropDecalParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropDecalParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPDECALPARAM_METHOD_3_6E9B6F0866B7E69B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADE3670F539B8828(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropDecalParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropDecalParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPDECALPARAM_METHOD_3_ADE3670F539B8828_OFFSET))(a1, a2);
		}
	};
}
