#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_METHOD_2_BBBCA82BCC0BD503_OFFSET UNITYSDK_OFFSET(0x1709B340)
#define RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_METHOD_2_D50AF52EA84BC575_OFFSET UNITYSDK_OFFSET(0x1709B000)
#define RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1709AFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityPredicateBase_TypeDefinitionIndex = 14611;

	class ChimeraDuelEntityPredicateBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D50AF52EA84BC575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_METHOD_2_D50AF52EA84BC575_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_BBBCA82BCC0BD503(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityPredicateBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_METHOD_2_BBBCA82BCC0BD503_OFFSET))(a1, a2);
		}
	};
}
