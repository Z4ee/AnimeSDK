#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }

#define OPTIMIZESTRING_STRINGBUILDERNOGC_COPYTOCACHESTRING_OFFSET UNITYSDK_OFFSET(0x1E873290)
#define OPTIMIZESTRING_STRINGBUILDERNOGC_INITPOOL_OFFSET UNITYSDK_OFFSET(0x1E872E60)
#define OPTIMIZESTRING_STRINGBUILDERNOGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E873640)
#define OPTIMIZESTRING_STRINGBUILDERNOGC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E872C90)
#define OPTIMIZESTRING_STRINGBUILDERNOGC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E873160)
#define OPTIMIZESTRING_STRINGBUILDERNOGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E873030)

namespace OptimizeString
{
	inline static constexpr unsigned int StringBuilderNoGC_TypeDefinitionIndex = 7253;

	class StringBuilderNoGC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Stack_1<::OptimizeString::StringBuilderNoGC*>** StaticGet_s_pool()
		{
			return (::System::Collections::Generic::Stack_1<::OptimizeString::StringBuilderNoGC*>**)Il2CppClass::FromTypeDefinitionIndex(StringBuilderNoGC_TypeDefinitionIndex)->GetStaticField(0x60F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_CachedShortStringDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StringBuilderNoGC_TypeDefinitionIndex)->GetStaticField(0x60F8);
		}
		static ::System::Boolean* StaticGet_s_UseShortCache()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StringBuilderNoGC_TypeDefinitionIndex)->GetStaticField(0x32C0);
		}
		::System::String* forToString; // 0x10
		::System::Text::StringBuilder* m_stringBuilder; // 0x18
		::System::String* m_immutableString; // 0x20
		::System::String* m_cacheString; // 0x28
		::System::Int32 m_capacity; // 0x30
		::System::Boolean useShortCache; // 0x34
		::System::Boolean m_EnableShortCache; // 0x35
		::System::Boolean m_isDirty; // 0x36

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean enableShortCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC__CTOR_1_OFFSET))(this, enableShortCache);
		}

		static ::System::Void InitPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC_INITPOOL_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC_TOSTRING_OFFSET))(this);
		}

		::System::Void CopyToCacheString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPTIMIZESTRING_STRINGBUILDERNOGC_COPYTOCACHESTRING_OFFSET))(this);
		}
	};
}
