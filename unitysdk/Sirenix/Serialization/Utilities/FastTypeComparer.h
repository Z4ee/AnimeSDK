#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define SIRENIX_SERIALIZATION_UTILITIES_FASTTYPECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B87EB80)
#define SIRENIX_SERIALIZATION_UTILITIES_FASTTYPECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B87EB90)
#define SIRENIX_SERIALIZATION_UTILITIES_FASTTYPECOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B87EBE0)
#define SIRENIX_SERIALIZATION_UTILITIES_FASTTYPECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87EBD0)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int FastTypeComparer_TypeDefinitionIndex = 7516;

	class FastTypeComparer : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::Utilities::FastTypeComparer** StaticGet_Instance()
		{
			return (::Sirenix::Serialization::Utilities::FastTypeComparer**)Il2CppClass::FromTypeDefinitionIndex(FastTypeComparer_TypeDefinitionIndex)->GetStaticField(0x6140);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_FASTTYPECOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_FASTTYPECOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Type* x, ::System::Type* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_FASTTYPECOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Type* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_FASTTYPECOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
