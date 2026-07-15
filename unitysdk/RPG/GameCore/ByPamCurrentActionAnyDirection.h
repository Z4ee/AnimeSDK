#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_115123DCCE47D363_OFFSET UNITYSDK_OFFSET(0x1B2B0D10)
#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_5BE3974A6D64A76B_OFFSET UNITYSDK_OFFSET(0x1B2B0EC0)
#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_8FA2E9E56FF4D4A0_OFFSET UNITYSDK_OFFSET(0x1B2B0D50)
#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_BF303AD8AE0CA1F6_OFFSET UNITYSDK_OFFSET(0x1B2B0E90)
#define RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B0D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamCurrentActionAnyDirection_TypeDefinitionIndex = 19240;

	class ByPamCurrentActionAnyDirection : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_115123DCCE47D363(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_115123DCCE47D363_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8FA2E9E56FF4D4A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_8FA2E9E56FF4D4A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF303AD8AE0CA1F6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_BF303AD8AE0CA1F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5BE3974A6D64A76B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamCurrentActionAnyDirection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamCurrentActionAnyDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMCURRENTACTIONANYDIRECTION_METHOD_4_5BE3974A6D64A76B_OFFSET))(a1, a2);
		}
	};
}
