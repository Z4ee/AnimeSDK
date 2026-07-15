#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_2D73A0CAE0418FF2_OFFSET UNITYSDK_OFFSET(0x19CC6160)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_6AA129B820A8E6B6_OFFSET UNITYSDK_OFFSET(0x19CC5FB0)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_8E99DC2F46A6D01F_OFFSET UNITYSDK_OFFSET(0x19CC6130)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_DB97F421CBDA4575_OFFSET UNITYSDK_OFFSET(0x19CC5FF0)
#define RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC5FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckIsLimboRevivable_TypeDefinitionIndex = 22208;

	class ByCheckIsLimboRevivable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6AA129B820A8E6B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckIsLimboRevivable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckIsLimboRevivable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_6AA129B820A8E6B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB97F421CBDA4575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_DB97F421CBDA4575_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8E99DC2F46A6D01F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_8E99DC2F46A6D01F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2D73A0CAE0418FF2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKISLIMBOREVIVABLE_METHOD_4_2D73A0CAE0418FF2_OFFSET))(a1, a2);
		}
	};
}
