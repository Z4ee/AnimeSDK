#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BC5A8E0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC5A960)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5A8D0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo_OrderBaseTypesBeforeDerivedTypes_TypeDefinitionIndex = 30386;

	class ObjectSerializationInfo_OrderBaseTypesBeforeDerivedTypes : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::ObjectSerializationInfo_OrderBaseTypesBeforeDerivedTypes** StaticGet_Instance()
		{
			return (::MessagePack::Internal::ObjectSerializationInfo_OrderBaseTypesBeforeDerivedTypes**)Il2CppClass::FromTypeDefinitionIndex(ObjectSerializationInfo_OrderBaseTypesBeforeDerivedTypes_TypeDefinitionIndex)->GetStaticField(0x24890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::Type* x, ::System::Type* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_ORDERBASETYPESBEFOREDERIVEDTYPES_COMPARE_OFFSET))(this, x, y);
		}
	};
}
