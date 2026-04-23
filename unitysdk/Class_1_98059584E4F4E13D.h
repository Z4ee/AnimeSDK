#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_98059584E4F4E13D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1879E6F0)
#define CLASS_1_98059584E4F4E13D_METHOD_1_0EAB244A0FFC84A9_OFFSET UNITYSDK_OFFSET(0x1879E300)
#define CLASS_1_98059584E4F4E13D_METHOD_1_2B0DAC0D4B8769CD_OFFSET UNITYSDK_OFFSET(0x1879DE20)
#define CLASS_1_98059584E4F4E13D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1879E510)
#define CLASS_1_98059584E4F4E13D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1879DEA0)
#define CLASS_1_98059584E4F4E13D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1879E5B0)
#define CLASS_1_98059584E4F4E13D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1879E0F0)
#define CLASS_1_98059584E4F4E13D_METHOD_1_DB8DA2E85ED9A256_OFFSET UNITYSDK_OFFSET(0x1879E150)
#define CLASS_1_98059584E4F4E13D_METHOD_1_E8015AD1A105283D_OFFSET UNITYSDK_OFFSET(0x1879E740)
#define CLASS_1_98059584E4F4E13D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1879E4D0)
#define CLASS_1_98059584E4F4E13D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1879E650)
#define CLASS_1_98059584E4F4E13D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1879EAA0)

inline static constexpr unsigned int Class_1_98059584E4F4E13D_TypeDefinitionIndex = 12213;

class Class_1_98059584E4F4E13D : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98059584E4F4E13D_TypeDefinitionIndex)->GetStaticField(0x1CDC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98059584E4F4E13D_TypeDefinitionIndex)->GetStaticField(0x1CDC8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98059584E4F4E13D_TypeDefinitionIndex)->GetStaticField(0x1CDD0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_98059584E4F4E13D_TypeDefinitionIndex)->GetStaticField(0x76D0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_98059584E4F4E13D_TypeDefinitionIndex)->GetStaticField(0x76D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*>* Method_1_2B0DAC0D4B8769CD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_2B0DAC0D4B8769CD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*> Method_1_DB8DA2E85ED9A256()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_DB8DA2E85ED9A256_OFFSET))();
	}

	static ::RPG::GameCore::CakeConfigRow* Method_1_0EAB244A0FFC84A9(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_0EAB244A0FFC84A9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E8015AD1A105283D(::RPG::GameCore::CakeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CakeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_98059584E4F4E13D_METHOD_1_E8015AD1A105283D_OFFSET))(a1);
	}
};
