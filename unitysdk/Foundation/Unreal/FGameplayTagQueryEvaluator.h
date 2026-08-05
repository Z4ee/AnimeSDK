#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal { class FGameplayTagQuery; }

#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x198AC360)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALALLEXPRMATCH_OFFSET UNITYSDK_OFFSET(0x8A3210)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALALLTAGSMATCH_OFFSET UNITYSDK_OFFSET(0x8A31E0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALANYEXPRMATCH_OFFSET UNITYSDK_OFFSET(0x8A3200)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALANYTAGSMATCH_OFFSET UNITYSDK_OFFSET(0x8A31D0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALEXPR_OFFSET UNITYSDK_OFFSET(0x8A3230)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALNOEXPRMATCH_OFFSET UNITYSDK_OFFSET(0x8A3220)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALNOTAGSMATCH_OFFSET UNITYSDK_OFFSET(0x8A31F0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVAL_OFFSET UNITYSDK_OFFSET(0x8A31C0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_GETQUERY_OFFSET UNITYSDK_OFFSET(0x8A32F0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x8A3240)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagQueryEvaluator_TypeDefinitionIndex = 11934;

	struct alignas(8) FGameplayTagQueryEvaluator
	{
		::Foundation::Unreal::FGameplayTagQuery* Query; // 0x10
		::System::Int32 CurrentStreamIndex; // 0x18

		/*
		::System::Boolean Eval(::Foundation::Unreal::FGameplayTagContainer& tags)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVAL_OFFSET))(this, tags);
		}
		*/

		static ::Foundation::Unreal::FGameplayTagQueryEvaluator Create(::Foundation::Unreal::FGameplayTagQuery* query)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryEvaluator(*)(::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_CREATE_OFFSET))(query);
		}

		/*
		::System::Boolean EvalAnyTagsMatch(::Foundation::Unreal::FGameplayTagContainer& tags, ::System::Boolean skip)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALANYTAGSMATCH_OFFSET))(this, tags, skip);
		}
		*/

		/*
		::System::Boolean EvalAllTagsMatch(::Foundation::Unreal::FGameplayTagContainer& tags, ::System::Boolean skip)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALALLTAGSMATCH_OFFSET))(this, tags, skip);
		}
		*/

		/*
		::System::Boolean EvalNoTagsMatch(::Foundation::Unreal::FGameplayTagContainer& tags, ::System::Boolean skip)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALNOTAGSMATCH_OFFSET))(this, tags, skip);
		}
		*/

		/*
		::System::Boolean EvalAnyExprMatch(::Foundation::Unreal::FGameplayTagContainer& tags, ::System::Boolean skip)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALANYEXPRMATCH_OFFSET))(this, tags, skip);
		}
		*/

		/*
		::System::Boolean EvalAllExprMatch(::Foundation::Unreal::FGameplayTagContainer& tags, ::System::Boolean skip)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALALLEXPRMATCH_OFFSET))(this, tags, skip);
		}
		*/

		/*
		::System::Boolean EvalNoExprMatch(::Foundation::Unreal::FGameplayTagContainer& tags, ::System::Boolean skip)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALNOEXPRMATCH_OFFSET))(this, tags, skip);
		}
		*/

		/*
		::System::Boolean EvalExpr(::Foundation::Unreal::FGameplayTagContainer& tags, ::System::Boolean skip)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_EVALEXPR_OFFSET))(this, tags, skip);
		}
		*/

		::System::Boolean GetToken(::System::Byte& token)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_GETTOKEN_OFFSET))(this, token);
		}

		::Foundation::Unreal::FGameplayTagQuery* GetQuery()
		{
			return ((::Foundation::Unreal::FGameplayTagQuery*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEVALUATOR_GETQUERY_OFFSET))(this);
		}
	};
}
