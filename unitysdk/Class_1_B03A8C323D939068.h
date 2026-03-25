#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EquipmentAtlasRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B03A8C323D939068_METHOD_1_05BE1347757CA4B9_OFFSET UNITYSDK_OFFSET(0x170CBC10)
#define CLASS_1_B03A8C323D939068_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x170CBBC0)
#define CLASS_1_B03A8C323D939068_METHOD_1_1428014FE0050284_OFFSET UNITYSDK_OFFSET(0x170CB320)
#define CLASS_1_B03A8C323D939068_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x170CB9E0)
#define CLASS_1_B03A8C323D939068_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x170CB3A0)
#define CLASS_1_B03A8C323D939068_METHOD_1_6C5909A2B8DC6196_OFFSET UNITYSDK_OFFSET(0x170CB650)
#define CLASS_1_B03A8C323D939068_METHOD_1_9B9653000FBE54FA_OFFSET UNITYSDK_OFFSET(0x170CB7D0)
#define CLASS_1_B03A8C323D939068_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x170CBA80)
#define CLASS_1_B03A8C323D939068_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x170CB5F0)
#define CLASS_1_B03A8C323D939068_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x170CB9A0)
#define CLASS_1_B03A8C323D939068_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x170CBB20)
#define CLASS_1_B03A8C323D939068__CCTOR_OFFSET UNITYSDK_OFFSET(0x170CBF20)

inline static constexpr unsigned int Class_1_B03A8C323D939068_TypeDefinitionIndex = 12092;

class Class_1_B03A8C323D939068 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B03A8C323D939068_TypeDefinitionIndex)->GetStaticField(0x18D00);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B03A8C323D939068_TypeDefinitionIndex)->GetStaticField(0x18D08);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B03A8C323D939068_TypeDefinitionIndex)->GetStaticField(0x18D10);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B03A8C323D939068_TypeDefinitionIndex)->GetStaticField(0x7130);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B03A8C323D939068_TypeDefinitionIndex)->GetStaticField(0x7131);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*>* Method_1_1428014FE0050284()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_1428014FE0050284_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*> Method_1_6C5909A2B8DC6196()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentAtlasRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_6C5909A2B8DC6196_OFFSET))();
	}

	static ::RPG::GameCore::EquipmentAtlasRow* Method_1_9B9653000FBE54FA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::EquipmentAtlasRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_9B9653000FBE54FA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_05BE1347757CA4B9(::RPG::GameCore::EquipmentAtlasRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::EquipmentAtlasRow*))((::PBYTE)hIl2Cpp + CLASS_1_B03A8C323D939068_METHOD_1_05BE1347757CA4B9_OFFSET))(a1);
	}
};
