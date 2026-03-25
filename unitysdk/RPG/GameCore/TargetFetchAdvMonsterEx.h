#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchAdvMonsterFetchType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvMonsterData; }

#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_32CF34C11FD81B15_OFFSET UNITYSDK_OFFSET(0x177BB230)
#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_B96DCCD27AD00866_OFFSET UNITYSDK_OFFSET(0x177BB310)
#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX__CTOR_OFFSET UNITYSDK_OFFSET(0x177BB2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvMonsterEx_TypeDefinitionIndex = 22155;

	class TargetFetchAdvMonsterEx : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetFetchAdvMonsterFetchType FetchType; // 0x10
		::RPG::GameCore::DynamicString* SingleMonsterKey; // 0x18
		::RPG::GameCore::FetchAdvMonsterData* SingleMonsterID; // 0x20
		::RPG::GameCore::DynamicFloat* SingleMonsterIDInOwnerGroup; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicString*>* MultiMonsterKey; // 0x30
		::Il2CppArray<::RPG::GameCore::FetchAdvMonsterData*>* MultiMonsterID; // 0x38
		::RPG::GameCore::DynamicFloat* MultiMonsterOwnerGroup; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_32CF34C11FD81B15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvMonsterEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_32CF34C11FD81B15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B96DCCD27AD00866(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_B96DCCD27AD00866_OFFSET))(a1, a2);
		}
	};
}
