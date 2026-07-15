#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICJSON_METHOD_2_DAE7622CF8EB5B02_OFFSET UNITYSDK_OFFSET(0x1BB2A0F0)
#define RPG_GAMECORE_DYNAMICJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB2A240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicJson_TypeDefinitionIndex = 15835;

	class DynamicJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Custom; // 0x10
		::System::String* Key; // 0x18
		::RPG::GameCore::DynamicJsonConfig* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DAE7622CF8EB5B02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicJson*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicJson*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICJSON_METHOD_2_DAE7622CF8EB5B02_OFFSET))(a1, a2);
		}
	};
}
