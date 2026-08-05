#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/BitWidth.h"
#include "unitysdk/FlexBuffers/Type.h"
#include "unitysdk/System/Object.h"

#define FLEXBUFFERS_TYPESUTIL_FIXEDTYPEDVECTORELEMENTSIZE_OFFSET UNITYSDK_OFFSET(0x1E9E0F60)
#define FLEXBUFFERS_TYPESUTIL_FIXEDTYPEDVECTORELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E9E1570)
#define FLEXBUFFERS_TYPESUTIL_ISAVECTOR_OFFSET UNITYSDK_OFFSET(0x1E9E0F20)
#define FLEXBUFFERS_TYPESUTIL_ISFIXEDTYPEDVECTOR_OFFSET UNITYSDK_OFFSET(0x1E9E0F50)
#define FLEXBUFFERS_TYPESUTIL_ISINLINE_OFFSET UNITYSDK_OFFSET(0x1E9E4B40)
#define FLEXBUFFERS_TYPESUTIL_ISTYPEDVECTORELEMENT_OFFSET UNITYSDK_OFFSET(0x1E9D8410)
#define FLEXBUFFERS_TYPESUTIL_ISTYPEDVECTOR_OFFSET UNITYSDK_OFFSET(0x1E9E1540)
#define FLEXBUFFERS_TYPESUTIL_NULLPACKEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E9E4D20)
#define FLEXBUFFERS_TYPESUTIL_PACKEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E9E4B50)
#define FLEXBUFFERS_TYPESUTIL_TOTYPEDVECTOR_OFFSET UNITYSDK_OFFSET(0x1E9D9810)
#define FLEXBUFFERS_TYPESUTIL_TYPEDVECTORELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E9E1560)

namespace FlexBuffers
{
	inline static constexpr unsigned int TypesUtil_TypeDefinitionIndex = 6765;

	class TypesUtil : public ::System::Object
	{
	public:
		static ::System::Boolean IsInline(::FlexBuffers::Type type)
		{
			return ((::System::Boolean(*)(::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_ISINLINE_OFFSET))(type);
		}

		static ::System::Boolean IsTypedVectorElement(::FlexBuffers::Type type)
		{
			return ((::System::Boolean(*)(::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_ISTYPEDVECTORELEMENT_OFFSET))(type);
		}

		static ::System::Boolean IsTypedVector(::FlexBuffers::Type type)
		{
			return ((::System::Boolean(*)(::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_ISTYPEDVECTOR_OFFSET))(type);
		}

		static ::System::Boolean IsFixedTypedVector(::FlexBuffers::Type type)
		{
			return ((::System::Boolean(*)(::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_ISFIXEDTYPEDVECTOR_OFFSET))(type);
		}

		static ::System::Boolean IsAVector(::FlexBuffers::Type type)
		{
			return ((::System::Boolean(*)(::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_ISAVECTOR_OFFSET))(type);
		}

		static ::FlexBuffers::Type ToTypedVector(::FlexBuffers::Type type, ::System::Byte length)
		{
			return ((::FlexBuffers::Type(*)(::FlexBuffers::Type, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_TOTYPEDVECTOR_OFFSET))(type, length);
		}

		static ::FlexBuffers::Type TypedVectorElementType(::FlexBuffers::Type type)
		{
			return ((::FlexBuffers::Type(*)(::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_TYPEDVECTORELEMENTTYPE_OFFSET))(type);
		}

		static ::FlexBuffers::Type FixedTypedVectorElementType(::FlexBuffers::Type type)
		{
			return ((::FlexBuffers::Type(*)(::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_FIXEDTYPEDVECTORELEMENTTYPE_OFFSET))(type);
		}

		static ::System::Int32 FixedTypedVectorElementSize(::FlexBuffers::Type type)
		{
			return ((::System::Int32(*)(::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_FIXEDTYPEDVECTORELEMENTSIZE_OFFSET))(type);
		}

		static ::System::Byte PackedType(::FlexBuffers::Type type, ::FlexBuffers::BitWidth bitWidth)
		{
			return ((::System::Byte(*)(::FlexBuffers::Type, ::FlexBuffers::BitWidth))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_PACKEDTYPE_OFFSET))(type, bitWidth);
		}

		static ::System::Byte NullPackedType()
		{
			return ((::System::Byte(*)())((::PBYTE)hIl2Cpp + FLEXBUFFERS_TYPESUTIL_NULLPACKEDTYPE_OFFSET))();
		}
	};
}
