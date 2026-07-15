#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FCVFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION_METHOD_3_442A55749FEDCBD5_OFFSET UNITYSDK_OFFSET(0x1C06F320)
#define RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION_METHOD_3_F7D1136B55C987B1_OFFSET UNITYSDK_OFFSET(0x1C06F330)
#define RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06F310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FCVFilterHoyoTagExpression_TypeDefinitionIndex = 16703;

	class FCVFilterHoyoTagExpression : public ::RPG::GameCore::FCVFilterExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7D1136B55C987B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FCVFilterHoyoTagExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FCVFilterHoyoTagExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION_METHOD_3_F7D1136B55C987B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_442A55749FEDCBD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FCVFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FCVFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FCVFILTERHOYOTAGEXPRESSION_METHOD_3_442A55749FEDCBD5_OFFSET))(a1, a2);
		}
	};
}
