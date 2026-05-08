#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagQueryExpression.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ADDEXPR_OFFSET UNITYSDK_OFFSET(0x1BFFAA30)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ADDTAG_OFFSET UNITYSDK_OFFSET(0x1BFFA9D0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ALLEXPRMATCH_OFFSET UNITYSDK_OFFSET(0x1BFFA530)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ALLTAGSMATCH_OFFSET UNITYSDK_OFFSET(0x1BFFA500)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ANYEXPRMATCH_OFFSET UNITYSDK_OFFSET(0x1BFFA520)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ANYTAGSMATCH_OFFSET UNITYSDK_OFFSET(0x1BFFA4F0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_EMITIMPL_OFFSET UNITYSDK_OFFSET(0x1BFFACA0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_EMIT_OFFSET UNITYSDK_OFFSET(0x1BFFAC40)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_GETTOKENCOUNT_OFFSET UNITYSDK_OFFSET(0x1BFFABA0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_NOEXPRMATCH_OFFSET UNITYSDK_OFFSET(0x1BFFA540)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_NOTAGSMATCH_OFFSET UNITYSDK_OFFSET(0x1BFFA510)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_RESERVEQUERYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1BFFA7A0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_RESERVETAGSET_OFFSET UNITYSDK_OFFSET(0x1BFFA570)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_USEEXPRSET_OFFSET UNITYSDK_OFFSET(0x1BFFA560)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_USETAGSET_OFFSET UNITYSDK_OFFSET(0x1BFFA550)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagQueryExpressionExtension_TypeDefinitionIndex = 9151;

	class FGameplayTagQueryExpressionExtension : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FGameplayTagQueryExpression& AnyTagsMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ANYTAGSMATCH_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& AllTagsMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ALLTAGSMATCH_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& NoTagsMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_NOTAGSMATCH_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& AnyExprMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ANYEXPRMATCH_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& AllExprMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ALLEXPRMATCH_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& NoExprMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_NOEXPRMATCH_OFFSET))(self);
		}

		static ::System::Boolean UseTagSet(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_USETAGSET_OFFSET))(self);
		}

		static ::System::Boolean UseExprSet(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_USEEXPRSET_OFFSET))(self);
		}

		static ::System::Boolean ReserveTagSet(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::System::Int32 capacity)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_RESERVETAGSET_OFFSET))(self, capacity);
		}

		static ::System::Boolean ReserveQueryExpression(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::System::Int32 capacity)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_RESERVEQUERYEXPRESSION_OFFSET))(self, capacity);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& AddTag(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ADDTAG_OFFSET))(self, tag);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& AddExpr(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::Foundation::Unreal::FGameplayTagQueryExpression& expr)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ADDEXPR_OFFSET))(self, expr);
		}

		static ::System::Int32 GetTokenCount(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::System::Int32(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_GETTOKENCOUNT_OFFSET))(self);
		}

		static ::System::Void Emit(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::System::Span_1<::System::Byte> token, ::System::Span_1<::Foundation::Unreal::FGameplayTag> tags, ::System::Int32& tokenCount, ::System::Int32& tagCount)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::System::Span_1<::System::Byte>, ::System::Span_1<::Foundation::Unreal::FGameplayTag>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_EMIT_OFFSET))(self, token, tags, tokenCount, tagCount);
		}

		static ::System::Void EmitImpl(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::System::Span_1<::System::Byte> token, ::System::Span_1<::Foundation::Unreal::FGameplayTag> tags, ::System::Int32& tokenIndex, ::System::Int32& tagIndex)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::System::Span_1<::System::Byte>, ::System::Span_1<::Foundation::Unreal::FGameplayTag>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_EMITIMPL_OFFSET))(self, token, tags, tokenIndex, tagIndex);
		}
	};
}
