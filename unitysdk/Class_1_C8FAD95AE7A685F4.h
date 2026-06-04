#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8FAD95AE7A685F4_Class_3_21CB1F101B34DDC1;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C8FAD95AE7A685F4_METHOD_1_0C6229563398418E_OFFSET UNITYSDK_OFFSET(0x190A6200)
#define CLASS_1_C8FAD95AE7A685F4_METHOD_1_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0x1908C2D0)
#define CLASS_1_C8FAD95AE7A685F4_METHOD_1_90DC5FD74ADC1C66_OFFSET UNITYSDK_OFFSET(0x1902E1E0)
#define CLASS_1_C8FAD95AE7A685F4_METHOD_1_A6C816811E2B63CB_1_OFFSET UNITYSDK_OFFSET(0x1902A850)
#define CLASS_1_C8FAD95AE7A685F4_METHOD_1_A6C816811E2B63CB_OFFSET UNITYSDK_OFFSET(0x19010470)
#define CLASS_1_C8FAD95AE7A685F4__CCTOR_OFFSET UNITYSDK_OFFSET(0x190A6260)
#define CLASS_1_C8FAD95AE7A685F4__CTOR_OFFSET UNITYSDK_OFFSET(0x190A6250)

inline static constexpr unsigned int Class_1_C8FAD95AE7A685F4_TypeDefinitionIndex = 12616;

class Class_1_C8FAD95AE7A685F4 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8FAD95AE7A685F4_TypeDefinitionIndex)->GetStaticField(0xB640);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8FAD95AE7A685F4_TypeDefinitionIndex)->GetStaticField(0xB641);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_A6C816811E2B63CB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4_METHOD_1_A6C816811E2B63CB_OFFSET))();
	}

	static ::System::Void Method_1_A6C816811E2B63CB_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4_METHOD_1_A6C816811E2B63CB_1_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Action*>* Method_1_90DC5FD74ADC1C66()
	{
		return ((::System::Collections::Generic::List_1<::System::Action*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4_METHOD_1_90DC5FD74ADC1C66_OFFSET))();
	}

	static ::System::Void Method_1_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4_METHOD_1_8BC85DADEC2C3862_OFFSET))();
	}

	static ::System::Collections::IEnumerator* Method_1_0C6229563398418E(::Class_1_C8FAD95AE7A685F4_Class_3_21CB1F101B34DDC1* a1, ::System::Func_1<::System::Boolean>* a2, ::System::Action* a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::Class_1_C8FAD95AE7A685F4_Class_3_21CB1F101B34DDC1*, ::System::Func_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C8FAD95AE7A685F4_METHOD_1_0C6229563398418E_OFFSET))(a1, a2, a3);
	}
};
