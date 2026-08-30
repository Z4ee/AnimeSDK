#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_METHOD_4_6270F3BD8443C92F_OFFSET UNITYSDK_OFFSET(0x1CDCE320)
#define RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_METHOD_4_6B541F1D3EA1630A_OFFSET UNITYSDK_OFFSET(0x1CDCE4A0)
#define RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_METHOD_4_A206098B8859C25F_OFFSET UNITYSDK_OFFSET(0x1CDCE4D0)
#define RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_METHOD_4_FBBD9BA64EF5AAD4_OFFSET UNITYSDK_OFFSET(0x1CDCE360)
#define RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCE350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByUsedFiveDimHoldDash_TypeDefinitionIndex = 21185;

	class ByUsedFiveDimHoldDash : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6270F3BD8443C92F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByUsedFiveDimHoldDash*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_METHOD_4_6270F3BD8443C92F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FBBD9BA64EF5AAD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByUsedFiveDimHoldDash*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_METHOD_4_FBBD9BA64EF5AAD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B541F1D3EA1630A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByUsedFiveDimHoldDash*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_METHOD_4_6B541F1D3EA1630A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A206098B8859C25F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByUsedFiveDimHoldDash* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByUsedFiveDimHoldDash*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYUSEDFIVEDIMHOLDDASH_METHOD_4_A206098B8859C25F_OFFSET))(a1, a2);
		}
	};
}
