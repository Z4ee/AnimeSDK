#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER_METHOD_3_C7E78075178E19D3_OFFSET UNITYSDK_OFFSET(0x1E33BCD0)
#define RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER_METHOD_3_FE51ACAECA0CB87F_OFFSET UNITYSDK_OFFSET(0x1E33BC00)
#define RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33BCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSelectionCountValueGetter_TypeDefinitionIndex = 15827;

	class ChimeraDuelSelectionCountValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Selection; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE51ACAECA0CB87F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER_METHOD_3_FE51ACAECA0CB87F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C7E78075178E19D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSelectionCountValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSELECTIONCOUNTVALUEGETTER_METHOD_3_C7E78075178E19D3_OFFSET))(a1, a2);
		}
	};
}
