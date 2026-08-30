#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityValueGetterBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER_METHOD_3_8A551AB7E14F89A0_OFFSET UNITYSDK_OFFSET(0x1E332200)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER_METHOD_3_DCCAB2C7B6325510_OFFSET UNITYSDK_OFFSET(0x1E3321A0)
#define RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3321F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityAttributeValueGetter_TypeDefinitionIndex = 15750;

	class ChimeraDuelEntityAttributeValueGetter : public ::RPG::GameCore::ChimeraDuelEntityValueGetterBase
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType Attribute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCCAB2C7B6325510(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER_METHOD_3_DCCAB2C7B6325510_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A551AB7E14F89A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYATTRIBUTEVALUEGETTER_METHOD_3_8A551AB7E14F89A0_OFFSET))(a1, a2);
		}
	};
}
