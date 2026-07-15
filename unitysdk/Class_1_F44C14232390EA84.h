#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7B005A18003A04C3;
namespace RPG::Client { class BaseLobby; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F44C14232390EA84_METHOD_1_0CBF2149A62B4688_OFFSET UNITYSDK_OFFSET(0x16CA1E20)
#define CLASS_1_F44C14232390EA84_METHOD_1_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x16CA1290)
#define CLASS_1_F44C14232390EA84_METHOD_1_1ED179E3269F7D6D_OFFSET UNITYSDK_OFFSET(0x16CA0850)
#define CLASS_1_F44C14232390EA84_METHOD_1_33F92F4BDA25E92F_OFFSET UNITYSDK_OFFSET(0x16CA08C0)
#define CLASS_1_F44C14232390EA84_METHOD_1_5D6218B1011D6D1A_OFFSET UNITYSDK_OFFSET(0x16CA16F0)
#define CLASS_1_F44C14232390EA84_METHOD_1_87474EB827B056C2_OFFSET UNITYSDK_OFFSET(0x16CA0D60)
#define CLASS_1_F44C14232390EA84_METHOD_1_98EE8CA264CC8EF8_OFFSET UNITYSDK_OFFSET(0x16CA0B20)
#define CLASS_1_F44C14232390EA84_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x16CA19E0)
#define CLASS_1_F44C14232390EA84_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x16CA1610)
#define CLASS_1_F44C14232390EA84_METHOD_1_D34C9ABE7CFF21EC_OFFSET UNITYSDK_OFFSET(0x16CA1C70)
#define CLASS_1_F44C14232390EA84__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA1E90)
#define CLASS_1_F44C14232390EA84__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA0840)
#define CLASS_1_F44C14232390EA84__TRYRECONNECT_G__ONFETCHEDLOBBY_5_0_OFFSET UNITYSDK_OFFSET(0x16CA1550)

inline static constexpr unsigned int Class_1_F44C14232390EA84_TypeDefinitionIndex = 63102;

class Class_1_F44C14232390EA84 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_01618AD0437C8486_2, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_01618AD0437C8486_2, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F44C14232390EA84_TypeDefinitionIndex)->GetStaticField(0x3CA0);
	}
	::Enum_3_01618AD0437C8486_2 Field_1_1; // 0x10

	::System::Void _ctor(::Enum_3_01618AD0437C8486_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1ED179E3269F7D6D(::RPG::Client::BaseLobby* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_1ED179E3269F7D6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_98EE8CA264CC8EF8(::System::Func_1<::Class_1_7B005A18003A04C3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::Class_1_7B005A18003A04C3*>*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_98EE8CA264CC8EF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_87474EB827B056C2(::System::UInt64 a1, ::System::Func_1<::Class_1_7B005A18003A04C3*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Func_1<::Class_1_7B005A18003A04C3*>*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_87474EB827B056C2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	static ::System::Void Method_1_5D6218B1011D6D1A(::System::UInt64 a1, ::System::Func_1<::Class_1_7B005A18003A04C3*>* a2)
	{
		return ((::System::Void(*)(::System::UInt64, ::System::Func_1<::Class_1_7B005A18003A04C3*>*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_5D6218B1011D6D1A_OFFSET))(a1, a2);
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

	static ::System::Boolean Method_1_0CBF2149A62B4688(::Enum_3_01618AD0437C8486_2 a1, ::Enum_3_01618AD0437C8486_2 a2)
	{
		return ((::System::Boolean(*)(::Enum_3_01618AD0437C8486_2, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84_METHOD_1_0CBF2149A62B4688_OFFSET))(a1, a2);
	}

	::System::Void _TryReconnect_g__OnFetchedLobby_5_0(::RPG::Client::BaseLobby* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_1_F44C14232390EA84__TRYRECONNECT_G__ONFETCHEDLOBBY_5_0_OFFSET))(this, a1);
	}
};
