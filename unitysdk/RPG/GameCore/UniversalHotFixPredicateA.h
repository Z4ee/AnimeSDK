#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBasePredicate.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_021E248F8B2D32CE_OFFSET UNITYSDK_OFFSET(0x1D621250)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_2DD9321C794D948C_OFFSET UNITYSDK_OFFSET(0x1D6225E0)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_4EEB52F53202998D_OFFSET UNITYSDK_OFFSET(0x1D61FF40)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_A9BA77B408EE34A8_OFFSET UNITYSDK_OFFSET(0x1D622610)
#define RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61FF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixPredicateA_TypeDefinitionIndex = 23096;

	class UniversalHotFixPredicateA : public ::RPG::GameCore::UniversalHotFixBasePredicate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_2DD9321C794D948C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateA*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateA*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_2DD9321C794D948C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4EEB52F53202998D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_4EEB52F53202998D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_021E248F8B2D32CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateA*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateA*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_021E248F8B2D32CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A9BA77B408EE34A8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXPREDICATEA_METHOD_5_A9BA77B408EE34A8_OFFSET))(a1, a2);
		}
	};
}
