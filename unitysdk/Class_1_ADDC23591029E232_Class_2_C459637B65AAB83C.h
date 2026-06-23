#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ADDC23591029E232_Class_1_348D6B12283A2E92_1.h"
#include "unitysdk/Enum_3_99B701A2E1265CFA.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_270194760B058114;
class Class_3_568600B6F5743120;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ADDC23591029E232_CLASS_2_C459637B65AAB83C_METHOD_2_69925C7807D22F1A_OFFSET UNITYSDK_OFFSET(0x1280C230)
#define CLASS_1_ADDC23591029E232_CLASS_2_C459637B65AAB83C_METHOD_2_BFBFEB12C7763D18_OFFSET UNITYSDK_OFFSET(0x1280C290)
#define CLASS_1_ADDC23591029E232_CLASS_2_C459637B65AAB83C_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1280C5C0)
#define CLASS_1_ADDC23591029E232_CLASS_2_C459637B65AAB83C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1280C5D0)
#define CLASS_1_ADDC23591029E232_CLASS_2_C459637B65AAB83C__CTOR_OFFSET UNITYSDK_OFFSET(0x1280C6A0)

inline static constexpr unsigned int Class_1_ADDC23591029E232_Class_2_C459637B65AAB83C_TypeDefinitionIndex = 53885;

class Class_1_ADDC23591029E232_Class_2_C459637B65AAB83C : public ::Class_1_ADDC23591029E232_Class_1_348D6B12283A2E92_1<::Class_1_ADDC23591029E232_Class_2_C459637B65AAB83C*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_99B701A2E1265CFA, ::System::Func_1<::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*>>*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_99B701A2E1265CFA, ::System::Func_1<::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*>>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADDC23591029E232_Class_2_C459637B65AAB83C_TypeDefinitionIndex)->GetStaticField(0x493A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232_CLASS_2_C459637B65AAB83C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232_CLASS_2_C459637B65AAB83C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_69925C7807D22F1A(::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*>&))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232_CLASS_2_C459637B65AAB83C_METHOD_2_69925C7807D22F1A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232_CLASS_2_C459637B65AAB83C_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*> Method_2_BFBFEB12C7763D18()
	{
		return ((::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADDC23591029E232_CLASS_2_C459637B65AAB83C_METHOD_2_BFBFEB12C7763D18_OFFSET))(this);
	}
};
