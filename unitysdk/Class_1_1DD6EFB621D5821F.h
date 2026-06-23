#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_04DC9DB8A9E6E69D;
class Class_1_7578E040469839C4;
class Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1DD6EFB621D5821F_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x105C10E0)
#define CLASS_1_1DD6EFB621D5821F_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x105C0FF0)
#define CLASS_1_1DD6EFB621D5821F__CCTOR_OFFSET UNITYSDK_OFFSET(0x105C1090)
#define CLASS_1_1DD6EFB621D5821F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x105C0D80)
#define CLASS_1_1DD6EFB621D5821F__CTOR_OFFSET UNITYSDK_OFFSET(0x105C0BB0)

inline static constexpr unsigned int Class_1_1DD6EFB621D5821F_TypeDefinitionIndex = 64449;

class Class_1_1DD6EFB621D5821F : public ::System::Object
{
public:
	static ::Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D** StaticGet_Field_1_2()
	{
		return (::Class_1_8C3326BB658EF7C4_Class_1_6A85108CFAA75A6D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DD6EFB621D5821F_TypeDefinitionIndex)->GetStaticField(0x2FDB0);
	}
	::System::Collections::Generic::List_1<::Class_1_04DC9DB8A9E6E69D*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1DD6EFB621D5821F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_7578E040469839C4* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7578E040469839C4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1DD6EFB621D5821F__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DD6EFB621D5821F__CCTOR_OFFSET))();
	}

	::Class_1_04DC9DB8A9E6E69D* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_04DC9DB8A9E6E69D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DD6EFB621D5821F_METHOD_1_B64C60973842FE45_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_04DC9DB8A9E6E69D*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_04DC9DB8A9E6E69D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DD6EFB621D5821F_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};
