#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RndOptionsDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7E922D617FFE5AFF_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1895F700)
#define CLASS_1_7E922D617FFE5AFF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1895F520)
#define CLASS_1_7E922D617FFE5AFF_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1895EEB0)
#define CLASS_1_7E922D617FFE5AFF_METHOD_1_79B22B7650775FD5_OFFSET UNITYSDK_OFFSET(0x1895F750)
#define CLASS_1_7E922D617FFE5AFF_METHOD_1_8492571ECC40D7DF_OFFSET UNITYSDK_OFFSET(0x1895EE30)
#define CLASS_1_7E922D617FFE5AFF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1895F5C0)
#define CLASS_1_7E922D617FFE5AFF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1895F100)
#define CLASS_1_7E922D617FFE5AFF_METHOD_1_F076FFFF7E339CC4_OFFSET UNITYSDK_OFFSET(0x1895F160)
#define CLASS_1_7E922D617FFE5AFF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1895F4E0)
#define CLASS_1_7E922D617FFE5AFF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1895F660)
#define CLASS_1_7E922D617FFE5AFF_METHOD_1_F760787A2E715441_OFFSET UNITYSDK_OFFSET(0x1895F310)
#define CLASS_1_7E922D617FFE5AFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1895FAB0)

inline static constexpr unsigned int Class_1_7E922D617FFE5AFF_TypeDefinitionIndex = 13865;

class Class_1_7E922D617FFE5AFF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E922D617FFE5AFF_TypeDefinitionIndex)->GetStaticField(0x1E4D0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E922D617FFE5AFF_TypeDefinitionIndex)->GetStaticField(0x1E4D8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E922D617FFE5AFF_TypeDefinitionIndex)->GetStaticField(0x1E4E0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E922D617FFE5AFF_TypeDefinitionIndex)->GetStaticField(0x7D20);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E922D617FFE5AFF_TypeDefinitionIndex)->GetStaticField(0x7D21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*>* Method_1_8492571ECC40D7DF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_8492571ECC40D7DF_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*> Method_1_F076FFFF7E339CC4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_F076FFFF7E339CC4_OFFSET))();
	}

	static ::RPG::GameCore::RndOptionsDataRow* Method_1_F760787A2E715441(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RndOptionsDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_F760787A2E715441_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_79B22B7650775FD5(::RPG::GameCore::RndOptionsDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RndOptionsDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_7E922D617FFE5AFF_METHOD_1_79B22B7650775FD5_OFFSET))(a1);
	}
};
