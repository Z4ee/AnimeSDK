#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1D0F14FBEE98E5ED_Class_1_1F3C806B47237396.h"
#include "unitysdk/Enum_3_99B701A2E1265CFA.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_270194760B058114;
class Class_3_733B560439A4DEF8;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1D0F14FBEE98E5ED_CLASS_2_C459637B65AAB83C_METHOD_2_69925C7807D22F1A_OFFSET UNITYSDK_OFFSET(0x1021FBE0)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_2_C459637B65AAB83C_METHOD_2_BFBFEB12C7763D18_OFFSET UNITYSDK_OFFSET(0x1021FC40)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_2_C459637B65AAB83C_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1021FF70)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_2_C459637B65AAB83C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1021FF80)
#define CLASS_1_1D0F14FBEE98E5ED_CLASS_2_C459637B65AAB83C__CTOR_OFFSET UNITYSDK_OFFSET(0x10220050)

inline static constexpr unsigned int Class_1_1D0F14FBEE98E5ED_Class_2_C459637B65AAB83C_TypeDefinitionIndex = 67681;

class Class_1_1D0F14FBEE98E5ED_Class_2_C459637B65AAB83C : public ::Class_1_1D0F14FBEE98E5ED_Class_1_1F3C806B47237396<::Class_1_1D0F14FBEE98E5ED_Class_2_C459637B65AAB83C*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_99B701A2E1265CFA, ::System::Func_1<::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_733B560439A4DEF8*>>*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_99B701A2E1265CFA, ::System::Func_1<::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_733B560439A4DEF8*>>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D0F14FBEE98E5ED_Class_2_C459637B65AAB83C_TypeDefinitionIndex)->GetStaticField(0x3DC20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_2_C459637B65AAB83C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_2_C459637B65AAB83C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_69925C7807D22F1A(::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_733B560439A4DEF8*>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_733B560439A4DEF8*>&))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_2_C459637B65AAB83C_METHOD_2_69925C7807D22F1A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_2_C459637B65AAB83C_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_733B560439A4DEF8*> Method_2_BFBFEB12C7763D18()
	{
		return ((::System::ValueTuple_2<::Class_3_270194760B058114*, ::Class_3_733B560439A4DEF8*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_CLASS_2_C459637B65AAB83C_METHOD_2_BFBFEB12C7763D18_OFFSET))(this);
	}
};
