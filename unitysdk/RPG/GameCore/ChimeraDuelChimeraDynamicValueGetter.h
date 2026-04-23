#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER_METHOD_3_1BB79544D109A892_OFFSET UNITYSDK_OFFSET(0x187F64B0)
#define RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER_METHOD_3_FF4E9954F43E5EF4_OFFSET UNITYSDK_OFFSET(0x187F6510)
#define RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x187F6500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraDynamicValueGetter_TypeDefinitionIndex = 15164;

	class ChimeraDuelChimeraDynamicValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::String* BaseKey; // 0x10
		::RPG::GameCore::ChimeraDuelAppendKeyType AppendKeyType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1BB79544D109A892(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER_METHOD_3_1BB79544D109A892_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF4E9954F43E5EF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelChimeraDynamicValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERADYNAMICVALUEGETTER_METHOD_3_FF4E9954F43E5EF4_OFFSET))(a1, a2);
		}
	};
}
