#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_METHOD_3_669721172E63FD8B_OFFSET UNITYSDK_OFFSET(0x1CFCF760)
#define RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_METHOD_3_D5B07AF468EC28BB_OFFSET UNITYSDK_OFFSET(0x1CFCF7C0)
#define RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCF7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSumValueGetter_TypeDefinitionIndex = 15818;

	class ChimeraDuelSumValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* ValueGetters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_669721172E63FD8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSumValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSumValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_METHOD_3_669721172E63FD8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5B07AF468EC28BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSumValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSumValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_METHOD_3_D5B07AF468EC28BB_OFFSET))(a1, a2);
		}
	};
}
