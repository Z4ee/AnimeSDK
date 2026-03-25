#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_METHOD_3_2460DA1872717B8E_OFFSET UNITYSDK_OFFSET(0x170A6A20)
#define RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_METHOD_3_C19DC776C3D751C6_OFFSET UNITYSDK_OFFSET(0x170A6A80)
#define RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x170A6A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSumValueGetter_TypeDefinitionIndex = 14686;

	class ChimeraDuelSumValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* ValueGetters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2460DA1872717B8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSumValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSumValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_METHOD_3_2460DA1872717B8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C19DC776C3D751C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSumValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSumValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_METHOD_3_C19DC776C3D751C6_OFFSET))(a1, a2);
		}
	};
}
