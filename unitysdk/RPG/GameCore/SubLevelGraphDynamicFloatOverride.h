#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICFLOATOVERRIDE_METHOD_2_EF6F4E19344EA6C8_OFFSET UNITYSDK_OFFSET(0x1B423850)
#define RPG_GAMECORE_SUBLEVELGRAPHDYNAMICFLOATOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4239B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubLevelGraphDynamicFloatOverride_TypeDefinitionIndex = 19931;

	class SubLevelGraphDynamicFloatOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICFLOATOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EF6F4E19344EA6C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubLevelGraphDynamicFloatOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubLevelGraphDynamicFloatOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBLEVELGRAPHDYNAMICFLOATOVERRIDE_METHOD_2_EF6F4E19344EA6C8_OFFSET))(a1, a2);
		}
	};
}
