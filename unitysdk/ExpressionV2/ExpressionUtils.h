#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EXPRESSIONV2_EXPRESSIONUTILS_GETSPANHASHCODE_OFFSET UNITYSDK_OFFSET(0x1257A2B0)
#define EXPRESSIONV2_EXPRESSIONUTILS_GETSTRINGFROMHASH_OFFSET UNITYSDK_OFFSET(0x1257A530)
#define EXPRESSIONV2_EXPRESSIONUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1257A680)
#define EXPRESSIONV2_EXPRESSIONUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1257A670)

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionUtils_TypeDefinitionIndex = 66390;

	class ExpressionUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_hash2String()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionUtils_TypeDefinitionIndex)->GetStaticField(0x50500);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONUTILS__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetSpanHashCode(::System::ReadOnlySpan_1<::System::Char> span, ::System::Boolean regist)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Char>, ::System::Boolean))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONUTILS_GETSPANHASHCODE_OFFSET))(span, regist);
		}

		static ::System::String* GetStringFromHash(::System::Int32 hash)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONUTILS_GETSTRINGFROMHASH_OFFSET))(hash);
		}
	};
}
