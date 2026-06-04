#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF2B522AC5DB4E39.h"

class Class_2_7873022432500B48_Class_1_E2FC60A5D4BDF5C3;
namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7873022432500B48_METHOD_2_06A2B758FCB8A24E_1_OFFSET UNITYSDK_OFFSET(0xAA3A6C0)
#define CLASS_2_7873022432500B48_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0xAA39A10)
#define CLASS_2_7873022432500B48_METHOD_2_0F0246CC21F37E0B_OFFSET UNITYSDK_OFFSET(0xAA3C220)
#define CLASS_2_7873022432500B48_METHOD_2_1DFB9896143A3689_OFFSET UNITYSDK_OFFSET(0xAA3BF80)
#define CLASS_2_7873022432500B48_METHOD_2_2097EF61E5DCB8C6_OFFSET UNITYSDK_OFFSET(0xAA3A4E0)
#define CLASS_2_7873022432500B48_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0xAA3A8F0)
#define CLASS_2_7873022432500B48_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xAA3A710)
#define CLASS_2_7873022432500B48_METHOD_2_3F1279797C377EE2_OFFSET UNITYSDK_OFFSET(0xAA3A2F0)
#define CLASS_2_7873022432500B48_METHOD_2_496B9E6FB3AA58C4_OFFSET UNITYSDK_OFFSET(0xAA3BC30)
#define CLASS_2_7873022432500B48_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAA3C890)
#define CLASS_2_7873022432500B48_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xAA3C8F0)
#define CLASS_2_7873022432500B48_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAA3C830)
#define CLASS_2_7873022432500B48_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0xAA3AEA0)
#define CLASS_2_7873022432500B48_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0xAA3AF10)
#define CLASS_2_7873022432500B48_METHOD_2_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0xAA39A60)
#define CLASS_2_7873022432500B48_METHOD_2_895A7B65A2D8E176_OFFSET UNITYSDK_OFFSET(0xAA3C670)
#define CLASS_2_7873022432500B48_METHOD_2_99D848AEA005759A_OFFSET UNITYSDK_OFFSET(0xAA3ABC0)
#define CLASS_2_7873022432500B48_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0xAA39FE0)
#define CLASS_2_7873022432500B48_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0xAA3BAA0)
#define CLASS_2_7873022432500B48_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xAA3C820)
#define CLASS_2_7873022432500B48_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xAA39CA0)
#define CLASS_2_7873022432500B48_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xAA3C4B0)
#define CLASS_2_7873022432500B48_METHOD_2_E7955EC696E7ED3A_OFFSET UNITYSDK_OFFSET(0xAA3A840)
#define CLASS_2_7873022432500B48_METHOD_2_F295A12A55F50A8C_1_OFFSET UNITYSDK_OFFSET(0xAA3BF30)
#define CLASS_2_7873022432500B48_METHOD_2_F295A12A55F50A8C_OFFSET UNITYSDK_OFFSET(0xAA3AB60)
#define CLASS_2_7873022432500B48_METHOD_2_FE6F894869C3D404_1_OFFSET UNITYSDK_OFFSET(0xAA3AE50)
#define CLASS_2_7873022432500B48_METHOD_2_FE6F894869C3D404_OFFSET UNITYSDK_OFFSET(0xAA3AE00)
#define CLASS_2_7873022432500B48__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA3C7F0)
#define CLASS_2_7873022432500B48__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3C7B0)

inline static constexpr unsigned int Class_2_7873022432500B48_TypeDefinitionIndex = 55834;

class Class_2_7873022432500B48 : public ::Class_1_BF2B522AC5DB4E39
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7873022432500B48_TypeDefinitionIndex)->GetStaticField(0x14140);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7873022432500B48_TypeDefinitionIndex)->GetStaticField(0x14144);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7873022432500B48_TypeDefinitionIndex)->GetStaticField(0x14148);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7873022432500B48_TypeDefinitionIndex)->GetStaticField(0x1414C);
	}
	::RPG::Client::BattleGamePhase* Field_2_4; // 0x20
	::RPG::GameCore::GameEntity* Field_2_5; // 0x28
	::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* Field_2_6; // 0x30
	::System::Collections::Generic::List_1<::Class_2_7873022432500B48_Class_1_E2FC60A5D4BDF5C3*>* Field_2_7; // 0x38
	::RPG::GameCore::GameEntity* Field_2_8; // 0x40
	::System::Boolean Field_2_9; // 0x48
	::System::Boolean Field_2_10; // 0x49
	::System::Boolean Field_2_11; // 0x4A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48__CCTOR_OFFSET))();
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_2_06A2B758FCB8A24E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_06A2B758FCB8A24E_1_OFFSET))(this);
	}

	::System::Void Method_2_3F1279797C377EE2(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_3F1279797C377EE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E7955EC696E7ED3A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_E7955EC696E7ED3A_OFFSET))(this, a1);
	}

	::System::Void Method_2_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_F295A12A55F50A8C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_F295A12A55F50A8C_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE6F894869C3D404(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_FE6F894869C3D404_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE6F894869C3D404_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_FE6F894869C3D404_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_2_99D848AEA005759A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_99D848AEA005759A_OFFSET))(this);
	}

	::System::Void Method_2_2097EF61E5DCB8C6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_2097EF61E5DCB8C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_496B9E6FB3AA58C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_496B9E6FB3AA58C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F295A12A55F50A8C_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_F295A12A55F50A8C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DFB9896143A3689(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_1DFB9896143A3689_OFFSET))(this, a1);
	}

	::System::Void Method_2_0F0246CC21F37E0B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_0F0246CC21F37E0B_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_895A7B65A2D8E176(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_895A7B65A2D8E176_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7873022432500B48_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}
};
