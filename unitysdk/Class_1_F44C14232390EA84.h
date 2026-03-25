#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/System/Object.h"

class Class_1_35379441886C7D20;
namespace RPG::Client { class BaseLobby; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F44C14232390EA84_METHOD_1_0CBF2149A62B4688_OFFSET UNITYSDK_OFFSET(0x10562240)
#define CLASS_1_F44C14232390EA84_METHOD_1_14AF5AAFC4C92A9F_OFFSET UNITYSDK_OFFSET(0x105611A0)
#define CLASS_1_F44C14232390EA84_METHOD_1_2F4D2F40C606FD0C_OFFSET UNITYSDK_OFFSET(0x10560F20)
#define CLASS_1_F44C14232390EA84_METHOD_1_32A68F5AD8036C8B_OFFSET UNITYSDK_OFFSET(0x10561390)
#define CLASS_1_F44C14232390EA84_METHOD_1_80EF52051C643BB1_OFFSET UNITYSDK_OFFSET(0x10561B70)
#define CLASS_1_F44C14232390EA84_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x10561DE0)
#define CLASS_1_F44C14232390EA84_METHOD_1_D34C9ABE7CFF21EC_OFFSET UNITYSDK_OFFSET(0x10562080)
#define CLASS_1_F44C14232390EA84_METHOD_1_D85141E7DFA32120_OFFSET UNITYSDK_OFFSET(0x105617E0)
#define CLASS_1_F44C14232390EA84_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x10561AC0)
#define CLASS_1_F44C14232390EA84_METHOD_1_E012A9C16B62F0F9_OFFSET UNITYSDK_OFFSET(0x10560F90)
#define CLASS_1_F44C14232390EA84__CCTOR_OFFSET UNITYSDK_OFFSET(0x105622B0)
#define CLASS_1_F44C14232390EA84__CTOR_OFFSET UNITYSDK_OFFSET(0x10560F10)
#define CLASS_1_F44C14232390EA84__TRYRECONNECT_G__ONFETCHEDLOBBY_5_0_OFFSET UNITYSDK_OFFSET(0x10561A00)

inline static constexpr unsigned int Class_1_F44C14232390EA84_TypeDefinitionIndex = 53662;

class Class_1_F44C14232390EA84 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_F80BFD5B986D5503_3, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_F80BFD5B986D5503_3, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44C14232390EA84_TypeDefinitionIndex)->GetStaticField(0x27390);
	}
	::Enum_3_F80BFD5B986D5503_3 Field_1_0; // 0x10

	::System::Void _ctor(::Enum_3_F80BFD5B986D5503_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2F4D2F40C606FD0C(::RPG::Client::BaseLobby* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_2F4D2F40C606FD0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_14AF5AAFC4C92A9F(::System::Func_1<::Class_1_35379441886C7D20*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::Class_1_35379441886C7D20*>*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_14AF5AAFC4C92A9F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_32A68F5AD8036C8B(::System::UInt64 a1, ::System::Func_1<::Class_1_35379441886C7D20*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Func_1<::Class_1_35379441886C7D20*>*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_32A68F5AD8036C8B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D85141E7DFA32120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_D85141E7DFA32120_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	static ::System::Void Method_1_80EF52051C643BB1(::System::UInt64 a1, ::System::Func_1<::Class_1_35379441886C7D20*>* a2)
	{
		return ((::System::Void(*)(::System::UInt64, ::System::Func_1<::Class_1_35379441886C7D20*>*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_80EF52051C643BB1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_ABE7715DB28B2DD1_OFFSET))();
	}

	static ::System::Void Method_1_E012A9C16B62F0F9(::RPG::Client::BaseLobby* a1)
	{
		return ((::System::Void(*)(::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_E012A9C16B62F0F9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D34C9ABE7CFF21EC(::RPG::Client::BaseLobby* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::BaseLobby*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_D34C9ABE7CFF21EC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0CBF2149A62B4688(::Enum_3_F80BFD5B986D5503_3 a1, ::Enum_3_F80BFD5B986D5503_3 a2)
	{
		return ((::System::Boolean(*)(::Enum_3_F80BFD5B986D5503_3, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_0CBF2149A62B4688_OFFSET))(a1, a2);
	}

	::System::Void _TryReconnect_g__OnFetchedLobby_5_0(::RPG::Client::BaseLobby* lobby)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84__TRYRECONNECT_G__ONFETCHEDLOBBY_5_0_OFFSET))(this, lobby);
	}
};
