#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveGachaAvatarTextRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_513F5662A4CFC641_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18309640)
#define CLASS_1_513F5662A4CFC641_METHOD_1_1BF934EF47E1C427_OFFSET UNITYSDK_OFFSET(0x18309250)
#define CLASS_1_513F5662A4CFC641_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18309460)
#define CLASS_1_513F5662A4CFC641_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18308DF0)
#define CLASS_1_513F5662A4CFC641_METHOD_1_79D269543D366A02_OFFSET UNITYSDK_OFFSET(0x183090A0)
#define CLASS_1_513F5662A4CFC641_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18309500)
#define CLASS_1_513F5662A4CFC641_METHOD_1_BDB49C9BF3DFB5ED_OFFSET UNITYSDK_OFFSET(0x18308D70)
#define CLASS_1_513F5662A4CFC641_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18309040)
#define CLASS_1_513F5662A4CFC641_METHOD_1_EA2711E47F62C9F3_OFFSET UNITYSDK_OFFSET(0x18309690)
#define CLASS_1_513F5662A4CFC641_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18309420)
#define CLASS_1_513F5662A4CFC641_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x183095A0)
#define CLASS_1_513F5662A4CFC641__CCTOR_OFFSET UNITYSDK_OFFSET(0x183099F0)

inline static constexpr unsigned int Class_1_513F5662A4CFC641_TypeDefinitionIndex = 11218;

class Class_1_513F5662A4CFC641 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_513F5662A4CFC641_TypeDefinitionIndex)->GetStaticField(0x25C60);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_513F5662A4CFC641_TypeDefinitionIndex)->GetStaticField(0x25C68);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_513F5662A4CFC641_TypeDefinitionIndex)->GetStaticField(0x25C70);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_513F5662A4CFC641_TypeDefinitionIndex)->GetStaticField(0x9EC0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_513F5662A4CFC641_TypeDefinitionIndex)->GetStaticField(0x9EC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*>* Method_1_BDB49C9BF3DFB5ED()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_BDB49C9BF3DFB5ED_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*> Method_1_79D269543D366A02()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_79D269543D366A02_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveGachaAvatarTextRow* Method_1_1BF934EF47E1C427(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveGachaAvatarTextRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_1BF934EF47E1C427_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_EA2711E47F62C9F3(::RPG::GameCore::IdleLiveGachaAvatarTextRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveGachaAvatarTextRow*))((::PBYTE)hIl2Cpp + CLASS_1_513F5662A4CFC641_METHOD_1_EA2711E47F62C9F3_OFFSET))(a1);
	}
};
