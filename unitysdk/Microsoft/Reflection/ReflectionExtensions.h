#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Type; }
namespace System::Reflection { class Assembly; }

#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1C04CB60)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_BASETYPE_OFFSET UNITYSDK_OFFSET(0x1C04CAD0)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1C04CBF0)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x1C04C9B0)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISENUM_OFFSET UNITYSDK_OFFSET(0x1C04C920)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISSEALED_OFFSET UNITYSDK_OFFSET(0x1C04CA40)
#define MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_REFLECTIONONLY_OFFSET UNITYSDK_OFFSET(0x1C04CD20)

namespace Microsoft::Reflection
{
	inline static constexpr unsigned int ReflectionExtensions_TypeDefinitionIndex = 90;

	class ReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsEnum(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISENUM_OFFSET))(a1);
		}

		static ::System::Boolean IsAbstract(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISABSTRACT_OFFSET))(a1);
		}

		static ::System::Boolean IsSealed(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ISSEALED_OFFSET))(a1);
		}

		static ::System::Type* BaseType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_BASETYPE_OFFSET))(a1);
		}

		static ::System::Reflection::Assembly* Assembly(::System::Type* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_ASSEMBLY_OFFSET))(a1);
		}

		static ::System::TypeCode GetTypeCode(::System::Type* a1)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_GETTYPECODE_OFFSET))(a1);
		}

		static ::System::Boolean ReflectionOnly(::System::Reflection::Assembly* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + MICROSOFT_REFLECTION_REFLECTIONEXTENSIONS_REFLECTIONONLY_OFFSET))(a1);
		}
	};
}
