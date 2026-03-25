#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_C14F0EB0858990DF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1793B780)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_12770F7BBC06339F_OFFSET UNITYSDK_OFFSET(0x1793B3E0)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_1A030306F95B7035_OFFSET UNITYSDK_OFFSET(0x1793B170)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_2C2A96B47B227177_OFFSET UNITYSDK_OFFSET(0x1793B320)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1793B5A0)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1793AEC0)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_8A321F63F77C8ADD_OFFSET UNITYSDK_OFFSET(0x1793B7D0)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_9EC41ECC53D61BB8_OFFSET UNITYSDK_OFFSET(0x1793AE40)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1793B640)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1793B110)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1793B560)
#define CLASS_1_631A5BD7E05FAF56_80_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1793B6E0)
#define CLASS_1_631A5BD7E05FAF56_80__CCTOR_OFFSET UNITYSDK_OFFSET(0x1793BAE0)

inline static constexpr unsigned int Class_1_631A5BD7E05FAF56_80_TypeDefinitionIndex = 13793;

class Class_1_631A5BD7E05FAF56_80 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_80_TypeDefinitionIndex)->GetStaticField(0x233D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_C14F0EB0858990DF*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_C14F0EB0858990DF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_80_TypeDefinitionIndex)->GetStaticField(0x233D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_80_TypeDefinitionIndex)->GetStaticField(0x233E0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_80_TypeDefinitionIndex)->GetStaticField(0x9320);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_80_TypeDefinitionIndex)->GetStaticField(0x9321);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_C14F0EB0858990DF*>* Method_1_9EC41ECC53D61BB8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_C14F0EB0858990DF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_9EC41ECC53D61BB8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_C14F0EB0858990DF*> Method_1_1A030306F95B7035()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_C14F0EB0858990DF*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_1A030306F95B7035_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_C14F0EB0858990DF*>, ::Class_1_C14F0EB0858990DF*> Method_1_2C2A96B47B227177()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_C14F0EB0858990DF*>, ::Class_1_C14F0EB0858990DF*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_2C2A96B47B227177_OFFSET))();
	}

	static ::Class_1_C14F0EB0858990DF* Method_1_12770F7BBC06339F(::System::UInt32 a1)
	{
		return ((::Class_1_C14F0EB0858990DF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_12770F7BBC06339F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A321F63F77C8ADD(::Class_1_C14F0EB0858990DF* a1)
	{
		return ((::System::Void(*)(::Class_1_C14F0EB0858990DF*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_80_METHOD_1_8A321F63F77C8ADD_OFFSET))(a1);
	}
};
