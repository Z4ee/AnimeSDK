#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_49ED4755CAE23118_OFFSET UNITYSDK_OFFSET(0x1CF3CA60)
#define RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_A90BFCB4BD61243F_OFFSET UNITYSDK_OFFSET(0x1CF3CA90)
#define RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_BC730A8BB92EA21D_OFFSET UNITYSDK_OFFSET(0x1CF3C8A0)
#define RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_D2C301A67DE6BA68_OFFSET UNITYSDK_OFFSET(0x1CF3C8E0)
#define RPG_GAMECORE_BYISGENDERTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3C8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsGenderType_TypeDefinitionIndex = 20567;

	class ByIsGenderType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GenderType Gender; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BC730A8BB92EA21D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsGenderType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsGenderType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_BC730A8BB92EA21D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2C301A67DE6BA68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsGenderType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_D2C301A67DE6BA68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_49ED4755CAE23118(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsGenderType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsGenderType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_49ED4755CAE23118_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A90BFCB4BD61243F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsGenderType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_A90BFCB4BD61243F_OFFSET))(a1, a2);
		}
	};
}
