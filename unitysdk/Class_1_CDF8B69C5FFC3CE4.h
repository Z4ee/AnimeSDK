#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CDF8B69C5FFC3CE4_Class_1_1BC8000783467E3C;
class Class_1_CDF8B69C5FFC3CE4_Class_1_E061506C73F7BD11;
class Class_1_CDF8B69C5FFC3CE4_Class_2_C602BC08A698AB75;
namespace RPG::Client { class RspHandler; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_0C3DC5C304CB7D42_OFFSET UNITYSDK_OFFSET(0x9396160)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_190BE5968B70A711_OFFSET UNITYSDK_OFFSET(0x93962F0)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_30B62F5CDB9079BD_OFFSET UNITYSDK_OFFSET(0x9396480)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_3B779D433D1B9409_OFFSET UNITYSDK_OFFSET(0x9395C00)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x9396A80)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_47BFC64AD95D6D77_OFFSET UNITYSDK_OFFSET(0x9395000)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x9396C60)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x9396950)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_9076BB310BB6989E_OFFSET UNITYSDK_OFFSET(0x9396DD0)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x9395120)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9396900)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_CA4D29E38D9171A0_OFFSET UNITYSDK_OFFSET(0x93974B0)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x9396AD0)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_E6ADFDCAE54F8710_OFFSET UNITYSDK_OFFSET(0x9396530)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_E9A040D6645EDC32_OFFSET UNITYSDK_OFFSET(0x93970F0)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x93978B0)
#define CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_F6CBC0B224F49504_OFFSET UNITYSDK_OFFSET(0x9394D80)
#define CLASS_1_CDF8B69C5FFC3CE4__CCTOR_OFFSET UNITYSDK_OFFSET(0x9397A50)
#define CLASS_1_CDF8B69C5FFC3CE4__CTOR_OFFSET UNITYSDK_OFFSET(0x93978C0)

inline static constexpr unsigned int Class_1_CDF8B69C5FFC3CE4_TypeDefinitionIndex = 67058;

class Class_1_CDF8B69C5FFC3CE4 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDF8B69C5FFC3CE4_TypeDefinitionIndex)->GetStaticField(0xBF10);
	}
	::System::Collections::Generic::List_1<::System::UInt16>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x18
	::Class_1_CDF8B69C5FFC3CE4_Class_2_C602BC08A698AB75* Field_1_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_CDF8B69C5FFC3CE4_Class_1_E061506C73F7BD11*>* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_CDF8B69C5FFC3CE4_Class_1_1BC8000783467E3C*>* Field_1_4; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::System::Boolean Field_1_1; // 0x39
	::System::UInt32 Field_1_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4__CCTOR_OFFSET))();
	}

	::System::UInt32 Method_1_F6CBC0B224F49504(::System::Single a1, ::System::Single a2, ::System::Action* a3, ::System::Boolean a4, ::System::String* a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_F6CBC0B224F49504_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3B779D433D1B9409(::System::UInt16 a1, ::RPG::Client::RspHandler* a2, ::System::Action* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::RPG::Client::RspHandler*, ::System::Action*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_3B779D433D1B9409_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_0C3DC5C304CB7D42(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_0C3DC5C304CB7D42_OFFSET))(this, a1);
	}

	::System::Void Method_1_190BE5968B70A711(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_190BE5968B70A711_OFFSET))(this, a1);
	}

	::System::Void Method_1_30B62F5CDB9079BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_30B62F5CDB9079BD_OFFSET))(this);
	}

	::System::Void Method_1_E6ADFDCAE54F8710(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_E6ADFDCAE54F8710_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::UInt32 Method_1_47BFC64AD95D6D77()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_47BFC64AD95D6D77_OFFSET))(this);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_1_9076BB310BB6989E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_9076BB310BB6989E_OFFSET))(this);
	}

	::System::Void Method_1_E9A040D6645EDC32(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_E9A040D6645EDC32_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_CA4D29E38D9171A0(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_CA4D29E38D9171A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF8B69C5FFC3CE4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
