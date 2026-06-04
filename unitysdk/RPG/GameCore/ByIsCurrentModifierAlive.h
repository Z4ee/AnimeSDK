#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_1639A75F9FA020E5_OFFSET UNITYSDK_OFFSET(0x1955E930)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_6D8C9DAC9F80C40F_OFFSET UNITYSDK_OFFSET(0x1955EA00)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_A3797D14E5803E38_OFFSET UNITYSDK_OFFSET(0x1955EB40)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_D1D362903A6017E0_OFFSET UNITYSDK_OFFSET(0x1955EBC0)
#define RPG_GAMECORE_BYISCURRENTMODIFIERALIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1955E9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCurrentModifierAlive_TypeDefinitionIndex = 22415;

	class ByIsCurrentModifierAlive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1639A75F9FA020E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentModifierAlive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentModifierAlive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_1639A75F9FA020E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D8C9DAC9F80C40F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_6D8C9DAC9F80C40F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A3797D14E5803E38(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_A3797D14E5803E38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1D362903A6017E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentModifierAlive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentModifierAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTMODIFIERALIVE_METHOD_4_D1D362903A6017E0_OFFSET))(a1, a2);
		}
	};
}
