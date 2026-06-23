#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA093D24932D214F.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_12CEAB6C6C45F405_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x69AB40)
#define STRUCT_2_12CEAB6C6C45F405_EQUALS_OFFSET UNITYSDK_OFFSET(0x69AB30)
#define STRUCT_2_12CEAB6C6C45F405_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x69AC40)
#define STRUCT_2_12CEAB6C6C45F405_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x69AC20)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x69ACA0)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_57A8E11FECF10345_1_OFFSET UNITYSDK_OFFSET(0x101176C0)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x10117380)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x69AE60)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x69AD30)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_729BCE8F15EB95E6_OFFSET UNITYSDK_OFFSET(0x69AD20)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x69AE00)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x69AD90)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x69AE90)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_CCC6A3002C391211_OFFSET UNITYSDK_OFFSET(0x69AF00)
#define STRUCT_2_12CEAB6C6C45F405_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x69ADF0)
#define STRUCT_2_12CEAB6C6C45F405_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x69AC50)
#define STRUCT_2_12CEAB6C6C45F405_TOSTRING_OFFSET UNITYSDK_OFFSET(0x69AC30)
#define STRUCT_2_12CEAB6C6C45F405__CCTOR_OFFSET UNITYSDK_OFFSET(0x101172F0)
#define STRUCT_2_12CEAB6C6C45F405__CTOR_OFFSET UNITYSDK_OFFSET(0x69AB20)

inline static constexpr unsigned int Struct_2_12CEAB6C6C45F405_TypeDefinitionIndex = 55669;

struct alignas(8) Struct_2_12CEAB6C6C45F405
{
	static ::Struct_2_12CEAB6C6C45F405* StaticGet_Field_2_0()
	{
		return (::Struct_2_12CEAB6C6C45F405*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_12CEAB6C6C45F405_TypeDefinitionIndex)->GetStaticField(0x2E6D0);
	}
	::System::Collections::Generic::List_1<::Struct_2_FA093D24932D214F>* Field_2_1; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::Struct_2_FA093D24932D214F>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_FA093D24932D214F>*))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_12CEAB6C6C45F405 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_12CEAB6C6C45F405))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_TOSTRING_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Struct_2_FA093D24932D214F>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Struct_2_FA093D24932D214F>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_12CEAB6C6C45F405 a1, ::Struct_2_12CEAB6C6C45F405 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_12CEAB6C6C45F405, ::Struct_2_12CEAB6C6C45F405))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	::System::Void Method_2_729BCE8F15EB95E6(::System::Collections::Generic::IEnumerable_1<::Struct_2_FA093D24932D214F>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Struct_2_FA093D24932D214F>*))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_729BCE8F15EB95E6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Void Method_2_602A336CBD30C930(::Struct_2_FA093D24932D214F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA093D24932D214F))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_602A336CBD30C930_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345_1(::Struct_2_12CEAB6C6C45F405 a1, ::Struct_2_12CEAB6C6C45F405 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_12CEAB6C6C45F405, ::Struct_2_12CEAB6C6C45F405))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_57A8E11FECF10345_1_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CCC6A3002C391211(::Struct_2_FA093D24932D214F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA093D24932D214F))((::PBYTE)hIl2Cpp + STRUCT_2_12CEAB6C6C45F405_METHOD_2_CCC6A3002C391211_OFFSET))(this, a1);
	}
};
