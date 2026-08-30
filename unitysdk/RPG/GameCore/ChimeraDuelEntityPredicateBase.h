#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_METHOD_2_7E908F261CE5CEF1_OFFSET UNITYSDK_OFFSET(0x1CFBFD10)
#define RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_METHOD_2_BBBCA82BCC0BD503_OFFSET UNITYSDK_OFFSET(0x1CFC52B0)
#define RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC4AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityPredicateBase_TypeDefinitionIndex = 15745;

	class ChimeraDuelEntityPredicateBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7E908F261CE5CEF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_METHOD_2_7E908F261CE5CEF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_BBBCA82BCC0BD503(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityPredicateBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_METHOD_2_BBBCA82BCC0BD503_OFFSET))(a1, a2);
		}
	};
}
