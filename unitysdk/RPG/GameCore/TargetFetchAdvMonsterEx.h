#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchAdvMonsterFetchType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvMonsterData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_3660C5062C945CD9_OFFSET UNITYSDK_OFFSET(0x1E168000)
#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_51EEC1ECE9059903_OFFSET UNITYSDK_OFFSET(0x1E167FA0)
#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_76D10A20C06FC234_OFFSET UNITYSDK_OFFSET(0x1E168300)
#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_FAD476EA9D66C352_OFFSET UNITYSDK_OFFSET(0x1E1682B0)
#define RPG_GAMECORE_TARGETFETCHADVMONSTEREX__CTOR_OFFSET UNITYSDK_OFFSET(0x1E167FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvMonsterEx_TypeDefinitionIndex = 23614;

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

		static ::System::Void Method_4_51EEC1ECE9059903(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvMonsterEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_51EEC1ECE9059903_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3660C5062C945CD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_3660C5062C945CD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FAD476EA9D66C352(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonsterEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_FAD476EA9D66C352_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76D10A20C06FC234(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonsterEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonsterEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTEREX_METHOD_4_76D10A20C06FC234_OFFSET))(a1, a2);
		}
	};
}
