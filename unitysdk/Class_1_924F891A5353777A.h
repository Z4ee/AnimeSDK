#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0F24EAFEC305197B;
class Class_1_B37AE9526D194A6D;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_924F891A5353777A_METHOD_1_1EBBD37311B3C0E2_OFFSET UNITYSDK_OFFSET(0xBEA5E90)
#define CLASS_1_924F891A5353777A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBEA61D0)
#define CLASS_1_924F891A5353777A_METHOD_1_448EDE45C5DD29F0_OFFSET UNITYSDK_OFFSET(0xBEA6010)
#define CLASS_1_924F891A5353777A_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xBEA6290)
#define CLASS_1_924F891A5353777A_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0xBEA6250)
#define CLASS_1_924F891A5353777A_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xBEA6210)
#define CLASS_1_924F891A5353777A__CTOR_OFFSET UNITYSDK_OFFSET(0xBEA5FA0)

inline static constexpr unsigned int Class_1_924F891A5353777A_TypeDefinitionIndex = 72053;

class Class_1_924F891A5353777A : public ::System::Object
{
public:
	::System::String* GIDAEFPOGHI; // 0x10
	::Class_1_B37AE9526D194A6D* PLAHHKFJMAH; // 0x18
	::System::Int64 AIKAPJELHNK; // 0x20
	::System::Single KDGNDNJBIOE; // 0x28
	::System::Boolean OLCKOHDCOLG; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_924F891A5353777A__CTOR_OFFSET))(this);
	}

	static ::Class_1_924F891A5353777A* Method_1_1EBBD37311B3C0E2(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>* a2)
	{
		return ((::Class_1_924F891A5353777A*(*)(::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>*))((::PBYTE)hIl2Cpp + CLASS_1_924F891A5353777A_METHOD_1_1EBBD37311B3C0E2_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_924F891A5353777A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_924F891A5353777A_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_924F891A5353777A_METHOD_1_D66F211912D83957_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_924F891A5353777A_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_448EDE45C5DD29F0(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_0F24EAFEC305197B*>*))((::PBYTE)hIl2Cpp + CLASS_1_924F891A5353777A_METHOD_1_448EDE45C5DD29F0_OFFSET))(this, a1, a2);
	}
};
