#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_METHOD_2_473CABA5F12368AC_OFFSET UNITYSDK_OFFSET(0x19617E90)
#define RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_METHOD_2_5D88991ABD5F2D20_OFFSET UNITYSDK_OFFSET(0x19617D30)
#define RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19617E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckFloorSavedValueConfig_TypeDefinitionIndex = 18059;

	class CheckFloorSavedValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int16 CompareValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5D88991ABD5F2D20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckFloorSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckFloorSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_METHOD_2_5D88991ABD5F2D20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_473CABA5F12368AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::CheckFloorSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::CheckFloorSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKFLOORSAVEDVALUECONFIG_METHOD_2_473CABA5F12368AC_OFFSET))(a1, a2);
		}
	};
}
