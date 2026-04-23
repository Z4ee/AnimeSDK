#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FC40000699219BA8_METHOD_1_6A8B508948D9E3B7_OFFSET UNITYSDK_OFFSET(0x17AECC10)
#define CLASS_1_FC40000699219BA8_METHOD_1_E2B04573429A5790_OFFSET UNITYSDK_OFFSET(0x17AECDF0)
#define CLASS_1_FC40000699219BA8__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AEC7A0)

inline static constexpr unsigned int Class_1_FC40000699219BA8_TypeDefinitionIndex = 37858;

class Class_1_FC40000699219BA8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC40000699219BA8_TypeDefinitionIndex)->GetStaticField(0x138F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC40000699219BA8_TypeDefinitionIndex)->GetStaticField(0x138F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC40000699219BA8__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_6A8B508948D9E3B7(::System::Type* a1)
	{
		return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_FC40000699219BA8_METHOD_1_6A8B508948D9E3B7_OFFSET))(a1);
	}

	static ::System::Type* Method_1_E2B04573429A5790(::System::Int32 a1)
	{
		return ((::System::Type*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FC40000699219BA8_METHOD_1_E2B04573429A5790_OFFSET))(a1);
	}
};
