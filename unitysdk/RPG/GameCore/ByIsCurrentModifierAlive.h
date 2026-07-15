#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_32A68D292907F51C_OFFSET UNITYSDK_OFFSET(0x1A8DC620)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_6D8C9DAC9F80C40F_OFFSET UNITYSDK_OFFSET(0x1A8DC4B0)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_8CDDDC10D13EC1A5_OFFSET UNITYSDK_OFFSET(0x1A8DC5F0)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_8D3D74FC74810EF4_OFFSET UNITYSDK_OFFSET(0x1A8DC470)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DC4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCurrentModifierAlive_TypeDefinitionIndex = 22857;

	class ByIsCurrentModifierAlive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8D3D74FC74810EF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentModifierAlive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentModifierAlive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_8D3D74FC74810EF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D8C9DAC9F80C40F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_6D8C9DAC9F80C40F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CDDDC10D13EC1A5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_8CDDDC10D13EC1A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_32A68D292907F51C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_32A68D292907F51C_OFFSET))(a1, a2);
		}
	};
}
