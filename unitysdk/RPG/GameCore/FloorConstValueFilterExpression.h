#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION_METHOD_2_51E4FABF7407A9DA_OFFSET UNITYSDK_OFFSET(0x19760710)
#define RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION_METHOD_2_66F0AAD0F6C13DA1_OFFSET UNITYSDK_OFFSET(0x197605D0)
#define RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x197605C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorConstValueFilterExpression_TypeDefinitionIndex = 16546;

	class FloorConstValueFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_66F0AAD0F6C13DA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorConstValueFilterExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorConstValueFilterExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION_METHOD_2_66F0AAD0F6C13DA1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_51E4FABF7407A9DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorConstValueFilterExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorConstValueFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUEFILTEREXPRESSION_METHOD_2_51E4FABF7407A9DA_OFFSET))(a1, a2);
		}
	};
}
