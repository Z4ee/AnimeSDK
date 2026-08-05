#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98236523318AE319_Class_1_1F3C806B47237396.h"
#include "unitysdk/Enum_3_5076C39299FE61DB.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_270194760B058114;
class Class_3_568600B6F5743120;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_98236523318AE319_CLASS_2_C459637B65AAB83C_METHOD_2_69925C7807D22F1A_OFFSET UNITYSDK_OFFSET(0x128DE170)
#define CLASS_1_98236523318AE319_CLASS_2_C459637B65AAB83C_METHOD_2_BFBFEB12C7763D18_OFFSET UNITYSDK_OFFSET(0x128DE1D0)
#define CLASS_1_98236523318AE319_CLASS_2_C459637B65AAB83C_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x128DE510)
#define CLASS_1_98236523318AE319_CLASS_2_C459637B65AAB83C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128DE520)
#define CLASS_1_98236523318AE319_CLASS_2_C459637B65AAB83C__CTOR_OFFSET UNITYSDK_OFFSET(0x128DE5F0)

inline static constexpr unsigned int Class_1_98236523318AE319_Class_2_C459637B65AAB83C_TypeDefinitionIndex = 86711;

class Class_1_98236523318AE319_Class_2_C459637B65AAB83C : public ::Class_1_98236523318AE319_Class_1_1F3C806B47237396<::Class_1_98236523318AE319_Class_2_C459637B65AAB83C*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_5076C39299FE61DB, ::System::Func_1<::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*>>*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_5076C39299FE61DB, ::System::Func_1<::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*>>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98236523318AE319_Class_2_C459637B65AAB83C_TypeDefinitionIndex)->GetStaticField(0x31B00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_2_C459637B65AAB83C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_2_C459637B65AAB83C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_69925C7807D22F1A(::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*>&))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_2_C459637B65AAB83C_METHOD_2_69925C7807D22F1A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_2_C459637B65AAB83C_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*> Method_2_BFBFEB12C7763D18()
	{
		return ((::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_568600B6F5743120*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98236523318AE319_CLASS_2_C459637B65AAB83C_METHOD_2_BFBFEB12C7763D18_OFFSET))(this);
	}
};
