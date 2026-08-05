#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_73DFDB73EB2DB4C9;
class Class_1_E65A17A395DACDBD;
class Class_1_EDECBB3B4D362847;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_1_351A3916E401F0FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F374190)
#define CLASS_1_351A3916E401F0FE_METHOD_1_06150765F7C4861F_OFFSET UNITYSDK_OFFSET(0x1F375040)
#define CLASS_1_351A3916E401F0FE_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x1F374EF0)
#define CLASS_1_351A3916E401F0FE_METHOD_1_8471D54D53ABAC3B_OFFSET UNITYSDK_OFFSET(0x1F374CF0)
#define CLASS_1_351A3916E401F0FE_METHOD_1_8E7482C252877E8A_OFFSET UNITYSDK_OFFSET(0x1F374720)
#define CLASS_1_351A3916E401F0FE_METHOD_1_95ADE8ED590C5559_1_OFFSET UNITYSDK_OFFSET(0x1F374850)
#define CLASS_1_351A3916E401F0FE_METHOD_1_95ADE8ED590C5559_OFFSET UNITYSDK_OFFSET(0x1F3745F0)
#define CLASS_1_351A3916E401F0FE_METHOD_1_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0x1F374980)
#define CLASS_1_351A3916E401F0FE_METHOD_1_B10506507C454711_OFFSET UNITYSDK_OFFSET(0x1F374C40)
#define CLASS_1_351A3916E401F0FE_METHOD_1_B1476C314B32BFD8_OFFSET UNITYSDK_OFFSET(0x1F374460)
#define CLASS_1_351A3916E401F0FE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1F375000)
#define CLASS_1_351A3916E401F0FE_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1F374CA0)
#define CLASS_1_351A3916E401F0FE_METHOD_1_F31E74DD54DF20ED_OFFSET UNITYSDK_OFFSET(0x1F374E90)
#define CLASS_1_351A3916E401F0FE_METHOD_1_FC86AAA038FC8172_OFFSET UNITYSDK_OFFSET(0x1F374B10)
#define CLASS_1_351A3916E401F0FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F374450)
#define CLASS_1_351A3916E401F0FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F373FE0)

inline static constexpr unsigned int Class_1_351A3916E401F0FE_TypeDefinitionIndex = 29546;

class Class_1_351A3916E401F0FE : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_351A3916E401F0FE_TypeDefinitionIndex)->GetStaticField(0x79C0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_73DFDB73EB2DB4C9*>* Field_1_2; // 0x10
	::Class_1_E65A17A395DACDBD* Field_1_9; // 0x18
	::Class_1_EDECBB3B4D362847* Field_1_10; // 0x20
	::System::Diagnostics::Stopwatch* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::Double Field_1_11; // 0x40
	::System::UInt64 Field_1_6; // 0x48
	::System::Double Field_1_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B1476C314B32BFD8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_B1476C314B32BFD8_OFFSET))(this);
	}

	::System::Void Method_1_95ADE8ED590C5559(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_95ADE8ED590C5559_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E7482C252877E8A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_8E7482C252877E8A_OFFSET))(this, a1);
	}

	::System::Void Method_1_95ADE8ED590C5559_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_95ADE8ED590C5559_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A8458C1526636349(::Class_1_73DFDB73EB2DB4C9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73DFDB73EB2DB4C9*))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_A8458C1526636349_OFFSET))(this, a1);
	}

	::System::Void Method_1_FC86AAA038FC8172(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_FC86AAA038FC8172_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B10506507C454711(::Class_1_73DFDB73EB2DB4C9* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73DFDB73EB2DB4C9*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_B10506507C454711_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_EDECBB3B4D362847* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EDECBB3B4D362847*))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8471D54D53ABAC3B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_8471D54D53ABAC3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F31E74DD54DF20ED(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_F31E74DD54DF20ED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_06150765F7C4861F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351A3916E401F0FE_METHOD_1_06150765F7C4861F_OFFSET))(this);
	}
};
