#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_BASEOBJECTX_REFERENCEEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D8F5C40)
#define FOUNDATION_BASEOBJECTX_REFERENCEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D8F5CA0)
#define FOUNDATION_BASEOBJECTX_REFERENCEEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8F5D00)
#define FOUNDATION_BASEOBJECTX_REFERENCEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F5CF0)

namespace Foundation
{
	inline static constexpr unsigned int BaseObjectX_ReferenceEqualityComparer_TypeDefinitionIndex = 8191;

	class BaseObjectX_ReferenceEqualityComparer : public ::System::Object
	{
	public:
		static ::Foundation::BaseObjectX_ReferenceEqualityComparer** StaticGet_Instance()
		{
			return (::Foundation::BaseObjectX_ReferenceEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(BaseObjectX_ReferenceEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x66C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BASEOBJECTX_REFERENCEEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BASEOBJECTX_REFERENCEEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BASEOBJECTX_REFERENCEEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BASEOBJECTX_REFERENCEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
