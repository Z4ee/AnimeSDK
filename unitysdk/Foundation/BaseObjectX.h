#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define FOUNDATION_BASEOBJECTX_GETPROFILERMEMORYSIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DA30D00)
#define FOUNDATION_BASEOBJECTX_GETPROFILERMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1DA31090)
#define FOUNDATION_BASEOBJECTX_ISPUREVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1DA31CA0)
#define FOUNDATION_BASEOBJECTX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA31FE0)

namespace Foundation
{
	inline static constexpr unsigned int BaseObjectX_TypeDefinitionIndex = 8190;

	class BaseObjectX : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Boolean>** StaticGet__pureValueTypeCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BaseObjectX_TypeDefinitionIndex)->GetStaticField(0x72C0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_getObjectMemorySizeMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(BaseObjectX_TypeDefinitionIndex)->GetStaticField(0x72C8);
		}
		static ::System::Boolean* StaticGet_initialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BaseObjectX_TypeDefinitionIndex)->GetStaticField(0x3A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BASEOBJECTX__CCTOR_OFFSET))();
		}

		static ::System::UInt32 GetProfilerMemorySizeInternal(::System::Object* inst)
		{
			return ((::System::UInt32(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BASEOBJECTX_GETPROFILERMEMORYSIZEINTERNAL_OFFSET))(inst);
		}

		static ::System::Int64 GetProfilerMemorySize(::System::Object* root)
		{
			return ((::System::Int64(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BASEOBJECTX_GETPROFILERMEMORYSIZE_OFFSET))(root);
		}

		static ::System::Boolean IsPureValueType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_BASEOBJECTX_ISPUREVALUETYPE_OFFSET))(type);
		}
	};
}
