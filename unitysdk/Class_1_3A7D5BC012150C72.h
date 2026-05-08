#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_6.h"
#include "unitysdk/Enum_3_49CABF680652EE11.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
class Class_2_5C38134D4169B6E0;
class Class_3_C3F0E3B5AB5977AE_29;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_3A7D5BC012150C72_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139E6C20)
#define CLASS_1_3A7D5BC012150C72_METHOD_1_0D771ED379BBF670_OFFSET UNITYSDK_OFFSET(0x139E7500)
#define CLASS_1_3A7D5BC012150C72_METHOD_1_2140E4DCD4D654C5_OFFSET UNITYSDK_OFFSET(0x139E7E60)
#define CLASS_1_3A7D5BC012150C72_METHOD_1_4D9CA535A2BBD790_OFFSET UNITYSDK_OFFSET(0x139E78D0)
#define CLASS_1_3A7D5BC012150C72_METHOD_1_5055E1A5000CF422_OFFSET UNITYSDK_OFFSET(0x139E7100)
#define CLASS_1_3A7D5BC012150C72_METHOD_1_7FC2558B375EBE32_OFFSET UNITYSDK_OFFSET(0x139E7FD0)
#define CLASS_1_3A7D5BC012150C72_METHOD_1_9A3D3B20AC64C599_OFFSET UNITYSDK_OFFSET(0x139E77F0)
#define CLASS_1_3A7D5BC012150C72_METHOD_1_9D1FB11C5C24E13D_OFFSET UNITYSDK_OFFSET(0x139E6FC0)
#define CLASS_1_3A7D5BC012150C72__CCTOR_OFFSET UNITYSDK_OFFSET(0x139E6FB0)
#define CLASS_1_3A7D5BC012150C72__CTOR_OFFSET UNITYSDK_OFFSET(0x139E6A50)

inline static constexpr unsigned int Class_1_3A7D5BC012150C72_TypeDefinitionIndex = 54005;

class Class_1_3A7D5BC012150C72 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A7D5BC012150C72_TypeDefinitionIndex)->GetStaticField(0x11350);
	}
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_10; // 0x10
	::Class_2_000597E145D7A42A<::Enum_3_49CABF680652EE11>* Field_1_11; // 0x18
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_9; // 0x20
	::Class_2_000597E145D7A42A<::Enum_3_4608E37A1B3D374A_6>* Field_1_8; // 0x28
	::Class_3_C3F0E3B5AB5977AE_29* Field_1_6; // 0x30
	::Class_2_5C38134D4169B6E0* Field_1_12; // 0x38
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_1_7; // 0x40
	::System::Int32 Field_1_2; // 0x48
	::System::Int32 Field_1_5; // 0x4C
	::System::Int32 Field_1_3; // 0x50
	::System::Int32 Field_1_4; // 0x54
	::System::Int32 Field_1_1; // 0x58

	::System::Void _ctor(::Enum_3_4608E37A1B3D374A_6 a1, ::System::Boolean a2, ::System::Boolean a3, ::Enum_3_49CABF680652EE11 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_6, ::System::Boolean, ::System::Boolean, ::Enum_3_49CABF680652EE11))((::PBYTE)hIl2Cpp + CLASS_1_3A7D5BC012150C72__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A7D5BC012150C72__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7D5BC012150C72_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_9D1FB11C5C24E13D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7D5BC012150C72_METHOD_1_9D1FB11C5C24E13D_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_1_5055E1A5000CF422()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7D5BC012150C72_METHOD_1_5055E1A5000CF422_OFFSET))(this);
	}

	::System::Boolean Method_1_0D771ED379BBF670()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7D5BC012150C72_METHOD_1_0D771ED379BBF670_OFFSET))(this);
	}

	::System::String* Method_1_9A3D3B20AC64C599()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7D5BC012150C72_METHOD_1_9A3D3B20AC64C599_OFFSET))(this);
	}

	::System::Boolean Method_1_4D9CA535A2BBD790()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7D5BC012150C72_METHOD_1_4D9CA535A2BBD790_OFFSET))(this);
	}

	::Struct_2_76CCAEE20B3AE57C Method_1_2140E4DCD4D654C5()
	{
		return ((::Struct_2_76CCAEE20B3AE57C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7D5BC012150C72_METHOD_1_2140E4DCD4D654C5_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_7FC2558B375EBE32()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A7D5BC012150C72_METHOD_1_7FC2558B375EBE32_OFFSET))(this);
	}
};
