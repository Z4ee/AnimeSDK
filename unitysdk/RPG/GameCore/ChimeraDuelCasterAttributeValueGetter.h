#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAttributeSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER_METHOD_3_2242EEAE31CFBE77_OFFSET UNITYSDK_OFFSET(0x187F60F0)
#define RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER_METHOD_3_311F1769A94EF5B7_OFFSET UNITYSDK_OFFSET(0x187F6150)
#define RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x187F6140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelCasterAttributeValueGetter_TypeDefinitionIndex = 15158;

	class ChimeraDuelCasterAttributeValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::ChimeraDuelAttributeSelectorType Attribute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2242EEAE31CFBE77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER_METHOD_3_2242EEAE31CFBE77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_311F1769A94EF5B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelCasterAttributeValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCASTERATTRIBUTEVALUEGETTER_METHOD_3_311F1769A94EF5B7_OFFSET))(a1, a2);
		}
	};
}
