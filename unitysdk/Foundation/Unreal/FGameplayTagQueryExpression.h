#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/GameplayTagQueryExpressionType.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSION_NEW_1_OFFSET UNITYSDK_OFFSET(0x1645FF40)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSION_NEW_OFFSET UNITYSDK_OFFSET(0x1645FF00)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagQueryExpression_TypeDefinitionIndex = 11574;

	struct alignas(8) FGameplayTagQueryExpression
	{
		::Foundation::Unreal::GameplayTagQueryExpressionType ExpressionType; // 0x10
		::Il2CppArray<::Foundation::Unreal::FGameplayTag>* TagSet; // 0x18
		::System::Int32 TagSetCount; // 0x20
		::Il2CppArray<::Foundation::Unreal::FGameplayTagQueryExpression>* ExpressionSet; // 0x28
		::System::Int32 ExpressionSetCount; // 0x30

		static ::Foundation::Unreal::FGameplayTagQueryExpression New()
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSION_NEW_OFFSET))();
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression New_1(::Foundation::Unreal::FGameplayTagQueryExpression& other)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSION_NEW_1_OFFSET))(other);
		}
	};
}
