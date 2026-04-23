#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChatInviteConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7916EDB8D8919408_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18BB4680)
#define CLASS_1_7916EDB8D8919408_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18BB44A0)
#define CLASS_1_7916EDB8D8919408_METHOD_1_4494733C5575FA1A_OFFSET UNITYSDK_OFFSET(0x18BB3DB0)
#define CLASS_1_7916EDB8D8919408_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18BB3E30)
#define CLASS_1_7916EDB8D8919408_METHOD_1_742AD9E482D15B12_OFFSET UNITYSDK_OFFSET(0x18BB46D0)
#define CLASS_1_7916EDB8D8919408_METHOD_1_8A2295FA4CFC6FEF_OFFSET UNITYSDK_OFFSET(0x18BB40E0)
#define CLASS_1_7916EDB8D8919408_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18BB4540)
#define CLASS_1_7916EDB8D8919408_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18BB4080)
#define CLASS_1_7916EDB8D8919408_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18BB4460)
#define CLASS_1_7916EDB8D8919408_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18BB45E0)
#define CLASS_1_7916EDB8D8919408_METHOD_1_FE58682AC90B5B1C_OFFSET UNITYSDK_OFFSET(0x18BB4290)
#define CLASS_1_7916EDB8D8919408__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BB4A30)

inline static constexpr unsigned int Class_1_7916EDB8D8919408_TypeDefinitionIndex = 12288;

class Class_1_7916EDB8D8919408 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7916EDB8D8919408_TypeDefinitionIndex)->GetStaticField(0x24BD0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7916EDB8D8919408_TypeDefinitionIndex)->GetStaticField(0x24BD8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7916EDB8D8919408_TypeDefinitionIndex)->GetStaticField(0x24BE0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7916EDB8D8919408_TypeDefinitionIndex)->GetStaticField(0x99C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7916EDB8D8919408_TypeDefinitionIndex)->GetStaticField(0x99C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*>* Method_1_4494733C5575FA1A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_4494733C5575FA1A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*> Method_1_8A2295FA4CFC6FEF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatInviteConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_8A2295FA4CFC6FEF_OFFSET))();
	}

	static ::RPG::GameCore::ChatInviteConfigRow* Method_1_FE58682AC90B5B1C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChatInviteConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_FE58682AC90B5B1C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_742AD9E482D15B12(::RPG::GameCore::ChatInviteConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChatInviteConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_7916EDB8D8919408_METHOD_1_742AD9E482D15B12_OFFSET))(a1);
	}
};
