#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_181;
class Class_0_16E4307DCC419505_275;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_1A91B5ED32D00888___C_METHOD_1_219D28DAF44B740D_OFFSET UNITYSDK_OFFSET(0x1234BD30)
#define CLASS_2_1A91B5ED32D00888___C_METHOD_1_843B7D96C733C5B5_OFFSET UNITYSDK_OFFSET(0x1234BD00)
#define CLASS_2_1A91B5ED32D00888___C_METHOD_1_9696A0594E32F567_OFFSET UNITYSDK_OFFSET(0x1234BD60)
#define CLASS_2_1A91B5ED32D00888___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1234BCB0)
#define CLASS_2_1A91B5ED32D00888___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1234BCF0)

inline static constexpr unsigned int Class_2_1A91B5ED32D00888___c_TypeDefinitionIndex = 73629;

class Class_2_1A91B5ED32D00888___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_181*, ::System::UInt32>** StaticGet___9__42_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_181*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A91B5ED32D00888___c_TypeDefinitionIndex)->GetStaticField(0x4BCE0);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_275*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_181*>*>** StaticGet___9__40_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_275*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_181*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A91B5ED32D00888___c_TypeDefinitionIndex)->GetStaticField(0x4BCE8);
	}
	static ::Class_2_1A91B5ED32D00888___c** StaticGet___9()
	{
		return (::Class_2_1A91B5ED32D00888___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A91B5ED32D00888___c_TypeDefinitionIndex)->GetStaticField(0x4BCF0);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_181*, ::System::Int32>** StaticGet___9__41_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_181*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A91B5ED32D00888___c_TypeDefinitionIndex)->GetStaticField(0x4BCF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1A91B5ED32D00888___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A91B5ED32D00888___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_843B7D96C733C5B5(::Class_0_16E4307DCC419505_181* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_181*))((::PBYTE)hIl2Cpp + CLASS_2_1A91B5ED32D00888___C_METHOD_1_843B7D96C733C5B5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_219D28DAF44B740D(::Class_0_16E4307DCC419505_181* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_181*))((::PBYTE)hIl2Cpp + CLASS_2_1A91B5ED32D00888___C_METHOD_1_219D28DAF44B740D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_181*>* Method_1_9696A0594E32F567(::Class_0_16E4307DCC419505_275* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_181*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_275*))((::PBYTE)hIl2Cpp + CLASS_2_1A91B5ED32D00888___C_METHOD_1_9696A0594E32F567_OFFSET))(this, a1);
	}
};
