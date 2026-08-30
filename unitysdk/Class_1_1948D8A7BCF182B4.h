#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingEnemyMaterialMapRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1948D8A7BCF182B4_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CEC7000)
#define CLASS_1_1948D8A7BCF182B4_METHOD_1_1C07A4F7A5FB4C96_OFFSET UNITYSDK_OFFSET(0x1CEC67A0)
#define CLASS_1_1948D8A7BCF182B4_METHOD_1_446C0F19F5CC2BDE_OFFSET UNITYSDK_OFFSET(0x1CEC7050)
#define CLASS_1_1948D8A7BCF182B4_METHOD_1_82122F106E507F7F_OFFSET UNITYSDK_OFFSET(0x1CEC6AB0)
#define CLASS_1_1948D8A7BCF182B4_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CEC6E30)
#define CLASS_1_1948D8A7BCF182B4_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CEC6EC0)
#define CLASS_1_1948D8A7BCF182B4_METHOD_1_C67E3A1238B1743B_OFFSET UNITYSDK_OFFSET(0x1CEC6C20)
#define CLASS_1_1948D8A7BCF182B4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CEC6A50)
#define CLASS_1_1948D8A7BCF182B4_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CEC6820)
#define CLASS_1_1948D8A7BCF182B4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CEC6DF0)
#define CLASS_1_1948D8A7BCF182B4_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CEC6F60)
#define CLASS_1_1948D8A7BCF182B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEC73F0)

inline static constexpr unsigned int Class_1_1948D8A7BCF182B4_TypeDefinitionIndex = 11062;

class Class_1_1948D8A7BCF182B4 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1948D8A7BCF182B4_TypeDefinitionIndex)->GetStaticField(0x37900);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1948D8A7BCF182B4_TypeDefinitionIndex)->GetStaticField(0x37908);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1948D8A7BCF182B4_TypeDefinitionIndex)->GetStaticField(0x37910);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1948D8A7BCF182B4_TypeDefinitionIndex)->GetStaticField(0xE8F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1948D8A7BCF182B4_TypeDefinitionIndex)->GetStaticField(0xE8F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*>* Method_1_1C07A4F7A5FB4C96()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_1C07A4F7A5FB4C96_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*> Method_1_82122F106E507F7F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_82122F106E507F7F_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingEnemyMaterialMapRow* Method_1_C67E3A1238B1743B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ChenLingEnemyMaterialMapRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_C67E3A1238B1743B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_446C0F19F5CC2BDE(::RPG::GameCore::ChenLingEnemyMaterialMapRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingEnemyMaterialMapRow*))((::PBYTE)hIl2Cpp + CLASS_1_1948D8A7BCF182B4_METHOD_1_446C0F19F5CC2BDE_OFFSET))(a1);
	}
};
