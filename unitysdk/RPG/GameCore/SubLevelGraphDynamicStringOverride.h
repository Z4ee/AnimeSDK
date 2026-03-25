#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICSTRINGOVERRIDE_METHOD_2_5955B31903198F09_OFFSET UNITYSDK_OFFSET(0x17787090)
#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICSTRINGOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x17787170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubLevelGraphDynamicStringOverride_TypeDefinitionIndex = 19035;

	class SubLevelGraphDynamicStringOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DynamicString* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICSTRINGOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5955B31903198F09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubLevelGraphDynamicStringOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubLevelGraphDynamicStringOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICSTRINGOVERRIDE_METHOD_2_5955B31903198F09_OFFSET))(a1, a2);
		}
	};
}
