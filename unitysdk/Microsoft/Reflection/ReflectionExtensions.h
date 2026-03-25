#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Type; }
namespace System::Reflection { class Assembly; }

#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1615B0C0)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_BASETYPE_OFFSET UNITYSDK_OFFSET(0x1615B090)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1615B0F0)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x1615B030)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISENUM_OFFSET UNITYSDK_OFFSET(0x1615B000)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISSEALED_OFFSET UNITYSDK_OFFSET(0x1615B060)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_REFLECTIONONLY_OFFSET UNITYSDK_OFFSET(0x1615B110)

namespace Microsoft::Reflection
{
	inline static constexpr unsigned int ReflectionExtensions_TypeDefinitionIndex = 90;

	class ReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsEnum(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISENUM_OFFSET))(type);
		}

		static ::System::Boolean IsAbstract(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISABSTRACT_OFFSET))(type);
		}

		static ::System::Boolean IsSealed(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISSEALED_OFFSET))(type);
		}

		static ::System::Type* BaseType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_BASETYPE_OFFSET))(type);
		}

		static ::System::Reflection::Assembly* Assembly(::System::Type* type)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ASSEMBLY_OFFSET))(type);
		}

		static ::System::TypeCode GetTypeCode(::System::Type* type)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_GETTYPECODE_OFFSET))(type);
		}

		static ::System::Boolean ReflectionOnly(::System::Reflection::Assembly* assm)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_REFLECTIONONLY_OFFSET))(assm);
		}
	};
}
