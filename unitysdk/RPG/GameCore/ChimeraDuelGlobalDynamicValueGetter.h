#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELGLOBALDYNAMICVALUEGETTER_METHOD_3_312683B4167FFDC0_OFFSET UNITYSDK_OFFSET(0x1709DBA0)
#define RPG_GAMECORE_CHIMERADUELGLOBALDYNAMICVALUEGETTER_METHOD_3_8C61F8394AEE02CE_OFFSET UNITYSDK_OFFSET(0x1709DB40)
#define RPG_GAMECORE_CHIMERADUELGLOBALDYNAMICVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1709DB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelGlobalDynamicValueGetter_TypeDefinitionIndex = 14693;

	class ChimeraDuelGlobalDynamicValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::String* BaseKey; // 0x10
		::RPG::GameCore::ChimeraDuelAppendKeyType AppendKeyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGLOBALDYNAMICVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C61F8394AEE02CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelGlobalDynamicValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelGlobalDynamicValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGLOBALDYNAMICVALUEGETTER_METHOD_3_8C61F8394AEE02CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_312683B4167FFDC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelGlobalDynamicValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelGlobalDynamicValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELGLOBALDYNAMICVALUEGETTER_METHOD_3_312683B4167FFDC0_OFFSET))(a1, a2);
		}
	};
}
