#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FFCEEED483D7C73B.h"
#include "unitysdk/System/Object.h"

class Class_1_1B20028AAAE94F57;
class Class_1_C974D9B5A2874893;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1FC9D91520196382_METHOD_1_39ABFA75105CA1F6_OFFSET UNITYSDK_OFFSET(0x167FD100)
#define CLASS_1_1FC9D91520196382_METHOD_1_6BA3F6FAA35776D7_OFFSET UNITYSDK_OFFSET(0x167FCF70)
#define CLASS_1_1FC9D91520196382_METHOD_1_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x167FC6E0)
#define CLASS_1_1FC9D91520196382_METHOD_1_7A013F4AF4412CCF_OFFSET UNITYSDK_OFFSET(0x167FC630)
#define CLASS_1_1FC9D91520196382_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x167FD250)
#define CLASS_1_1FC9D91520196382__CCTOR_OFFSET UNITYSDK_OFFSET(0x167FD260)
#define CLASS_1_1FC9D91520196382__CTOR_OFFSET UNITYSDK_OFFSET(0x167FC5C0)

inline static constexpr unsigned int Class_1_1FC9D91520196382_TypeDefinitionIndex = 33140;

class Class_1_1FC9D91520196382 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FC9D91520196382_TypeDefinitionIndex)->GetStaticField(0x8D60);
	}
	::System::Collections::Generic::List_1<::Class_1_C974D9B5A2874893*>* Field_1_5; // 0x10
	::Class_1_1B20028AAAE94F57* Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x21
	::Struct_2_FFCEEED483D7C73B Field_1_4; // 0x24
	::System::UInt32 Field_1_3; // 0x40
	::System::Int32 Field_1_6; // 0x44

	::System::Void _ctor(::Class_1_1B20028AAAE94F57* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1B20028AAAE94F57*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382__CCTOR_OFFSET))();
	}

	::System::Void Method_1_7A013F4AF4412CCF(::System::UInt32 a1, ::Struct_2_FFCEEED483D7C73B a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_FFCEEED483D7C73B, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_7A013F4AF4412CCF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BA3F6FAA35776D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_6BA3F6FAA35776D7_OFFSET))(this);
	}

	::System::Void Method_1_39ABFA75105CA1F6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_39ABFA75105CA1F6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
