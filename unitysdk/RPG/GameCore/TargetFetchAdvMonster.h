#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FetchAdvMonsterData; }

#define RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_47CB997EA4C4963A_OFFSET UNITYSDK_OFFSET(0x18EE2010)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_8C463A72F015C751_OFFSET UNITYSDK_OFFSET(0x18ED8D60)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED8D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvMonster_TypeDefinitionIndex = 22853;

	class TargetFetchAdvMonster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::FetchAdvMonsterData*>* MultiGroupFetch; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_47CB997EA4C4963A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_47CB997EA4C4963A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C463A72F015C751(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_METHOD_4_8C463A72F015C751_OFFSET))(a1, a2);
		}
	};
}
