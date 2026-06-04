#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER_METHOD_3_405DCDC48FE21512_OFFSET UNITYSDK_OFFSET(0x19638120)
#define RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER_METHOD_3_497085B1B77348A6_OFFSET UNITYSDK_OFFSET(0x19638040)
#define RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19638110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBuffIdentifierValueGetter_TypeDefinitionIndex = 15227;

	class ChimeraDuelBuffIdentifierValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::String* UniqueName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_497085B1B77348A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBuffIdentifierValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBuffIdentifierValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER_METHOD_3_497085B1B77348A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_405DCDC48FE21512(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBuffIdentifierValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBuffIdentifierValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER_METHOD_3_405DCDC48FE21512_OFFSET))(a1, a2);
		}
	};
}
