#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FSVFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION_METHOD_3_0E498E66C4E9F305_OFFSET UNITYSDK_OFFSET(0x19706BF0)
#define RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION_METHOD_3_E8D56BBD789341A1_OFFSET UNITYSDK_OFFSET(0x19706C00)
#define RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19706BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FSVFilterHoyoTagExpression_TypeDefinitionIndex = 16544;

	class FSVFilterHoyoTagExpression : public ::RPG::GameCore::FSVFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8D56BBD789341A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FSVFilterHoyoTagExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FSVFilterHoyoTagExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION_METHOD_3_E8D56BBD789341A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E498E66C4E9F305(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FSVFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FSVFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVFILTERHOYOTAGEXPRESSION_METHOD_3_0E498E66C4E9F305_OFFSET))(a1, a2);
		}
	};
}
