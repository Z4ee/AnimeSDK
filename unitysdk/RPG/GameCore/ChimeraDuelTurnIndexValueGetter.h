#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER_METHOD_3_886B50E35109FB85_OFFSET UNITYSDK_OFFSET(0x18806E40)
#define RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER_METHOD_3_F87A272F86ED70C0_OFFSET UNITYSDK_OFFSET(0x18806EE0)
#define RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18806ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelTurnIndexValueGetter_TypeDefinitionIndex = 15168;

	class ChimeraDuelTurnIndexValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_886B50E35109FB85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER_METHOD_3_886B50E35109FB85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F87A272F86ED70C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelTurnIndexValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTURNINDEXVALUEGETTER_METHOD_3_F87A272F86ED70C0_OFFSET))(a1, a2);
		}
	};
}
