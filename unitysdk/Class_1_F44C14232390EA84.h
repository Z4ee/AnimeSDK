#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
namespace RPG::Client { class BaseLobby; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F44C14232390EA84_METHOD_1_0CBF2149A62B4688_OFFSET UNITYSDK_OFFSET(0x1295C070)
#define CLASS_1_F44C14232390EA84_METHOD_1_14AF5AAFC4C92A9F_OFFSET UNITYSDK_OFFSET(0x1295AFA0)
#define CLASS_1_F44C14232390EA84_METHOD_1_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x1295B620)
#define CLASS_1_F44C14232390EA84_METHOD_1_1ED179E3269F7D6D_OFFSET UNITYSDK_OFFSET(0x1295ACB0)
#define CLASS_1_F44C14232390EA84_METHOD_1_32A68F5AD8036C8B_OFFSET UNITYSDK_OFFSET(0x1295B190)
#define CLASS_1_F44C14232390EA84_METHOD_1_33F92F4BDA25E92F_OFFSET UNITYSDK_OFFSET(0x1295AD20)
#define CLASS_1_F44C14232390EA84_METHOD_1_80EF52051C643BB1_OFFSET UNITYSDK_OFFSET(0x1295B9B0)
#define CLASS_1_F44C14232390EA84_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x1295BC20)
#define CLASS_1_F44C14232390EA84_METHOD_1_D34C9ABE7CFF21EC_OFFSET UNITYSDK_OFFSET(0x1295BEB0)
#define CLASS_1_F44C14232390EA84_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x1295B900)
#define CLASS_1_F44C14232390EA84__CCTOR_OFFSET UNITYSDK_OFFSET(0x1295C0E0)
#define CLASS_1_F44C14232390EA84__CTOR_OFFSET UNITYSDK_OFFSET(0x1295ACA0)
#define CLASS_1_F44C14232390EA84__TRYRECONNECT_G__ONFETCHEDLOBBY_5_0_OFFSET UNITYSDK_OFFSET(0x1295B840)

inline static constexpr unsigned int Class_1_F44C14232390EA84_TypeDefinitionIndex = 60806;

class Class_1_F44C14232390EA84 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44C14232390EA84_TypeDefinitionIndex)->GetStaticField(0x2F190);
	}
	::Enum_3_A35B38E5F9115A76_2 Field_1_0; // 0x10

	::System::Void _ctor(::Enum_3_A35B38E5F9115A76_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1ED179E3269F7D6D(::RPG::Client::BaseLobby* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_1ED179E3269F7D6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_14AF5AAFC4C92A9F(::System::Func_1<::Class_1_0C36FD2A7876DF8E*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::Class_1_0C36FD2A7876DF8E*>*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_14AF5AAFC4C92A9F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_32A68F5AD8036C8B(::System::UInt64 a1, ::System::Func_1<::Class_1_0C36FD2A7876DF8E*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Func_1<::Class_1_0C36FD2A7876DF8E*>*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_32A68F5AD8036C8B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	static ::System::Void Method_1_80EF52051C643BB1(::System::UInt64 a1, ::System::Func_1<::Class_1_0C36FD2A7876DF8E*>* a2)
	{
		return ((::System::Void(*)(::System::UInt64, ::System::Func_1<::Class_1_0C36FD2A7876DF8E*>*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_80EF52051C643BB1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_ABE7715DB28B2DD1_OFFSET))();
	}

	static ::System::Void Method_1_33F92F4BDA25E92F(::RPG::Client::BaseLobby* a1)
	{
		return ((::System::Void(*)(::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_33F92F4BDA25E92F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D34C9ABE7CFF21EC(::RPG::Client::BaseLobby* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::BaseLobby*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_D34C9ABE7CFF21EC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0CBF2149A62B4688(::Enum_3_A35B38E5F9115A76_2 a1, ::Enum_3_A35B38E5F9115A76_2 a2)
	{
		return ((::System::Boolean(*)(::Enum_3_A35B38E5F9115A76_2, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_0CBF2149A62B4688_OFFSET))(a1, a2);
	}

	::System::Void _TryReconnect_g__OnFetchedLobby_5_0(::RPG::Client::BaseLobby* lobby)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84__TRYRECONNECT_G__ONFETCHEDLOBBY_5_0_OFFSET))(this, lobby);
	}
};
