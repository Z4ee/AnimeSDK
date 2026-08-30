#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_METHOD_3_77F59B264FAEE1EE_OFFSET UNITYSDK_OFFSET(0x1D10C650)
#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_METHOD_3_A5023B795C23CF65_OFFSET UNITYSDK_OFFSET(0x1D10C4F0)
#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_METHOD_3_CE46B4EAA1C6EFF8_OFFSET UNITYSDK_OFFSET(0x1D10C620)
#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_METHOD_3_D11908D1863479F2_OFFSET UNITYSDK_OFFSET(0x1D10C4B0)
#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10C4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomStringConfig_TypeDefinitionIndex = 18069;

	class FloorCustomStringConfig : public ::RPG::GameCore::FloorCustomValueConfig
	{
	public:
		::System::String* DefaultValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D11908D1863479F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorCustomStringConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorCustomStringConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_METHOD_3_D11908D1863479F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5023B795C23CF65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorCustomStringConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorCustomStringConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_METHOD_3_A5023B795C23CF65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CE46B4EAA1C6EFF8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomStringConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomStringConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_METHOD_3_CE46B4EAA1C6EFF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_77F59B264FAEE1EE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomStringConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomStringConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_METHOD_3_77F59B264FAEE1EE_OFFSET))(a1, a2);
		}
	};
}
