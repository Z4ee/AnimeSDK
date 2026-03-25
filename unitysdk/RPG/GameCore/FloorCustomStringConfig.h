#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_METHOD_3_A5023B795C23CF65_OFFSET UNITYSDK_OFFSET(0x172143E0)
#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG_METHOD_3_D11908D1863479F2_OFFSET UNITYSDK_OFFSET(0x172143A0)
#define RPG_GAMECORE_FLOORCUSTOMSTRINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172143D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomStringConfig_TypeDefinitionIndex = 16779;

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
	};
}
