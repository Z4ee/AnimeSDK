#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"

namespace RPG { class ProfileCounter; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_14613881B5AE6CE2_METHOD_1_30B62F5CDB9079BD_OFFSET UNITYSDK_OFFSET(0x15F5CBD0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_3432C1AC45306F95_OFFSET UNITYSDK_OFFSET(0x15F5C960)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_40E6AFCB91524816_OFFSET UNITYSDK_OFFSET(0x15F5CA80)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_440EF5F3B9D7FA9F_OFFSET UNITYSDK_OFFSET(0x15F5CA10)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_5A959B01CAC89C9F_OFFSET UNITYSDK_OFFSET(0x15F5B2C0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_677FE239F17E3706_OFFSET UNITYSDK_OFFSET(0x15F5D320)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_7A5A39455F6C4872_OFFSET UNITYSDK_OFFSET(0x15F5C420)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_1_OFFSET UNITYSDK_OFFSET(0x15F5C800)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_2_OFFSET UNITYSDK_OFFSET(0x15F5C8B0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_OFFSET UNITYSDK_OFFSET(0x15F5C750)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_A3FC6E2E41573D7F_OFFSET UNITYSDK_OFFSET(0x15F5C5C0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_C0708BBA0C588A3C_OFFSET UNITYSDK_OFFSET(0x15F5D5E0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_DB841484E2856C2A_OFFSET UNITYSDK_OFFSET(0x15F5D250)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_DEB5725467F34108_OFFSET UNITYSDK_OFFSET(0x15F5C0E0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_E2B61E001C0B1860_OFFSET UNITYSDK_OFFSET(0x15F5C2A0)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_E848ACF9A39CB6EF_OFFSET UNITYSDK_OFFSET(0x15F5C150)
#define CLASS_1_14613881B5AE6CE2_METHOD_1_F09D89245D6C469E_OFFSET UNITYSDK_OFFSET(0x15F5D470)
#define CLASS_1_14613881B5AE6CE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F5D770)

inline static constexpr unsigned int Class_1_14613881B5AE6CE2_TypeDefinitionIndex = 54020;

class Class_1_14613881B5AE6CE2 : public ::System::Object
{
public:
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5AB0);
	}
	static ::System::Collections::Generic::List_1<::RPG::ProfileCounter*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5AB8);
	}
	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5AC0);
	}
	static ::RPG::ProfileCounter** StaticGet_Field_1_3()
	{
		return (::RPG::ProfileCounter**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5AC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EntityType>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5AD0);
	}
	static ::RPG::ProfileCounter** StaticGet_Field_1_5()
	{
		return (::RPG::ProfileCounter**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5AD8);
	}
	static ::System::Collections::Generic::List_1<::RPG::ProfileCounter*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::List_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5AE0);
	}
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::ProfileCounter*>*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::ProfileCounter*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5AE8);
	}
	static ::RPG::ProfileCounter** StaticGet_Field_1_8()
	{
		return (::RPG::ProfileCounter**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5AF0);
	}
	static ::RPG::ProfileCounter** StaticGet_Field_1_9()
	{
		return (::RPG::ProfileCounter**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5AF8);
	}
	static ::System::Comparison_1<::RPG::ProfileCounter*>** StaticGet_Field_1_10()
	{
		return (::System::Comparison_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5B00);
	}
	static ::System::Collections::Generic::List_1<::RPG::ProfileCounter*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::List_1<::RPG::ProfileCounter*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x5B08);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x32F0);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x32F4);
	}
	static ::System::Boolean* StaticGet_Field_1_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_14613881B5AE6CE2_TypeDefinitionIndex)->GetStaticField(0x32F8);
	}
	// static const ::System::Int32 Field_1_15 = 0x5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_5A959B01CAC89C9F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_5A959B01CAC89C9F_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_DEB5725467F34108(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_DEB5725467F34108_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_E848ACF9A39CB6EF(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_E848ACF9A39CB6EF_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_E2B61E001C0B1860(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_E2B61E001C0B1860_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_7A5A39455F6C4872(::RPG::GameCore::EntityType a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::EntityType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_7A5A39455F6C4872_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_A3FC6E2E41573D7F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_A3FC6E2E41573D7F_OFFSET))(a1);
	}

	static ::System::Void Method_1_9C05B3DEF862D58A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_OFFSET))(a1);
	}

	static ::System::Void Method_1_9C05B3DEF862D58A_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_9C05B3DEF862D58A_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_9C05B3DEF862D58A_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_3432C1AC45306F95(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_3432C1AC45306F95_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_440EF5F3B9D7FA9F(::RPG::ProfileCounter* a1, ::RPG::ProfileCounter* a2)
	{
		return ((::System::Int32(*)(::RPG::ProfileCounter*, ::RPG::ProfileCounter*))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_440EF5F3B9D7FA9F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_40E6AFCB91524816()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_40E6AFCB91524816_OFFSET))();
	}

	static ::System::Int32 Method_1_DB841484E2856C2A(::RPG::GameCore::EntityType a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::EntityType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_DB841484E2856C2A_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_677FE239F17E3706(::RPG::GameCore::EntityType a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_677FE239F17E3706_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_F09D89245D6C469E(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_F09D89245D6C469E_OFFSET))(a1);
	}

	static ::System::Void Method_1_30B62F5CDB9079BD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_30B62F5CDB9079BD_OFFSET))();
	}

	static ::RPG::GameCore::EntityManager* Method_1_C0708BBA0C588A3C()
	{
		return ((::RPG::GameCore::EntityManager*(*)())((::PBYTE)hIl2Cpp + CLASS_1_14613881B5AE6CE2_METHOD_1_C0708BBA0C588A3C_OFFSET))();
	}
};
