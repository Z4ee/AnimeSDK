#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/BulletModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/SetupModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TargetSelectorModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceGroupModule.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

class Class_0_16E4307DCC419505_370;
class Class_1_2DDAC2F6C97EB8AD;
class Class_3_DBF5783EF2C3816D;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace MoleMole::MonoEffectContrllerModule { class PreviewModule; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D1A44554FE046F73_METHOD_1_0228A1522E11231E_OFFSET UNITYSDK_OFFSET(0x1005E410)
#define CLASS_1_D1A44554FE046F73_METHOD_1_0835C343A563D519_OFFSET UNITYSDK_OFFSET(0x1005E1A0)
#define CLASS_1_D1A44554FE046F73_METHOD_1_0CEF39DCB4206729_OFFSET UNITYSDK_OFFSET(0x1005E180)
#define CLASS_1_D1A44554FE046F73_METHOD_1_1A7E32BE26C368B8_OFFSET UNITYSDK_OFFSET(0x1005E140)
#define CLASS_1_D1A44554FE046F73_METHOD_1_1F3078E39B4E6D5A_OFFSET UNITYSDK_OFFSET(0x1005DD60)
#define CLASS_1_D1A44554FE046F73_METHOD_1_21631744E68FDB6A_OFFSET UNITYSDK_OFFSET(0x1005F2C0)
#define CLASS_1_D1A44554FE046F73_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1005F2F0)
#define CLASS_1_D1A44554FE046F73_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x1005F300)
#define CLASS_1_D1A44554FE046F73_METHOD_1_3DACB462EE3F03D8_OFFSET UNITYSDK_OFFSET(0x1005F030)
#define CLASS_1_D1A44554FE046F73_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1005D7B0)
#define CLASS_1_D1A44554FE046F73_METHOD_1_4A84B1EAD1331E3F_OFFSET UNITYSDK_OFFSET(0x1005E110)
#define CLASS_1_D1A44554FE046F73_METHOD_1_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x1005EA70)
#define CLASS_1_D1A44554FE046F73_METHOD_1_51F384253127E0E9_OFFSET UNITYSDK_OFFSET(0x1005D920)
#define CLASS_1_D1A44554FE046F73_METHOD_1_5E6125F642FB70D9_OFFSET UNITYSDK_OFFSET(0x1005E440)
#define CLASS_1_D1A44554FE046F73_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x1005EEC0)
#define CLASS_1_D1A44554FE046F73_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1005E280)
#define CLASS_1_D1A44554FE046F73_METHOD_1_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x1005FA50)
#define CLASS_1_D1A44554FE046F73_METHOD_1_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x1005E190)
#define CLASS_1_D1A44554FE046F73_METHOD_1_B84353F2E34958A9_OFFSET UNITYSDK_OFFSET(0x1005F260)
#define CLASS_1_D1A44554FE046F73_METHOD_1_C260E39B3046D957_OFFSET UNITYSDK_OFFSET(0x1005D710)
#define CLASS_1_D1A44554FE046F73_METHOD_1_C6B186D8867FF988_OFFSET UNITYSDK_OFFSET(0x1005E670)
#define CLASS_1_D1A44554FE046F73_METHOD_1_E52817D5DECB3A42_OFFSET UNITYSDK_OFFSET(0x1005EAD0)
#define CLASS_1_D1A44554FE046F73_METHOD_1_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x1005FA40)
#define CLASS_1_D1A44554FE046F73_METHOD_1_F71E118C691AF59F_OFFSET UNITYSDK_OFFSET(0x1005F1A0)
#define CLASS_1_D1A44554FE046F73_METHOD_1_F93E3DDBD8D63E92_OFFSET UNITYSDK_OFFSET(0x1005DF40)
#define CLASS_1_D1A44554FE046F73_METHOD_1_FAD3E14075F4502D_OFFSET UNITYSDK_OFFSET(0x1005E130)
#define CLASS_1_D1A44554FE046F73__CCTOR_OFFSET UNITYSDK_OFFSET(0x1005D6C0)
#define CLASS_1_D1A44554FE046F73__CTOR_OFFSET UNITYSDK_OFFSET(0x1005D5E0)

inline static constexpr unsigned int Class_1_D1A44554FE046F73_TypeDefinitionIndex = 77352;

class Class_1_D1A44554FE046F73 : public ::System::Object
{
public:
	static ::UnityEngine::ParticleSystem_Particle* StaticGet_Field_1_5()
	{
		return (::UnityEngine::ParticleSystem_Particle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1A44554FE046F73_TypeDefinitionIndex)->GetStaticField(0x9F90);
	}
	::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* Field_1_10; // 0x10
	::Class_3_DBF5783EF2C3816D* Field_1_12; // 0x18
	::MoleMole::MonoEffectContrllerModule::BulletModule Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*>* Field_1_9; // 0x38
	::Class_1_2DDAC2F6C97EB8AD* Field_1_11; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*>* Field_1_8; // 0x48
	::MoleMole::MonoEffectContrllerModule::TraceGroupModule Field_1_3; // 0x50
	::UnityEngine::ParticleSystem* Field_1_6; // 0x60
	::MoleMole::MonoEffectContrllerModule::TargetSelectorModule Field_1_2; // 0x68
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* Field_1_0; // 0xA8
	::System::Int32 Field_1_14; // 0xB0
	::System::Int32 Field_1_7; // 0xB4
	::System::Boolean Field_1_4; // 0xB8
	::System::Boolean Field_1_13; // 0xB9
	::System::Boolean Field_1_15; // 0xBA

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_C260E39B3046D957(::Class_1_D1A44554FE046F73* a1)
	{
		return ((::System::Void(*)(::Class_1_D1A44554FE046F73*))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_C260E39B3046D957_OFFSET))(a1);
	}

	::System::Void Method_1_51F384253127E0E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_51F384253127E0E9_OFFSET))(this);
	}

	::System::Void Method_1_F93E3DDBD8D63E92(::System::UInt32 a1, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_F93E3DDBD8D63E92_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A0042105686D97E8(::Class_3_DBF5783EF2C3816D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DBF5783EF2C3816D*))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_A0042105686D97E8_OFFSET))(this, a1);
	}

	::UnityEngine::ParticleSystem_Particle& Method_1_0835C343A563D519(::System::Int32 a1)
	{
		return ((::UnityEngine::ParticleSystem_Particle&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_0835C343A563D519_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::MoleMole::MonoEffectContrllerModule::PreviewModule*& Method_1_0228A1522E11231E()
	{
		return ((::MoleMole::MonoEffectContrllerModule::PreviewModule*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_0228A1522E11231E_OFFSET))(this);
	}

	::System::Void Method_1_5E6125F642FB70D9(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1, ::Class_0_16E4307DCC419505_370* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*, ::Class_0_16E4307DCC419505_370*))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_5E6125F642FB70D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C6B186D8867FF988(::Class_3_DBF5783EF2C3816D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DBF5783EF2C3816D*))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_C6B186D8867FF988_OFFSET))(this, a1);
	}

	::System::Void Method_1_E52817D5DECB3A42(::Class_0_16E4307DCC419505_370* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_370*))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_E52817D5DECB3A42_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::MoleMole::MonoEffectContrllerModule::TargetSelectorModule& Method_1_FAD3E14075F4502D()
	{
		return ((::MoleMole::MonoEffectContrllerModule::TargetSelectorModule&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_FAD3E14075F4502D_OFFSET))(this);
	}

	::MoleMole::MonoEffectContrllerModule::TraceGroupModule& Method_1_1A7E32BE26C368B8()
	{
		return ((::MoleMole::MonoEffectContrllerModule::TraceGroupModule&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_1A7E32BE26C368B8_OFFSET))(this);
	}

	::MoleMole::MonoEffectContrllerModule::BulletModule& Method_1_0CEF39DCB4206729()
	{
		return ((::MoleMole::MonoEffectContrllerModule::BulletModule&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_0CEF39DCB4206729_OFFSET))(this);
	}

	::MoleMole::MonoEffectContrllerModule::SetupModule& Method_1_4A84B1EAD1331E3F()
	{
		return ((::MoleMole::MonoEffectContrllerModule::SetupModule&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_4A84B1EAD1331E3F_OFFSET))(this);
	}

	::System::Boolean Method_1_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
	}

	static ::Class_1_D1A44554FE046F73* Method_1_3DACB462EE3F03D8(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* a1, ::UnityEngine::ParticleSystem* a2)
	{
		return ((::Class_1_D1A44554FE046F73*(*)(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_3DACB462EE3F03D8_OFFSET))(a1, a2);
	}

	::System::Void Method_1_B84353F2E34958A9(::MoleMole::MonoEffectContrllerModule::TraceGroupModule a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::TraceGroupModule))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_B84353F2E34958A9_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_21631744E68FDB6A()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_21631744E68FDB6A_OFFSET))(this);
	}

	::System::Void Method_1_1F3078E39B4E6D5A(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_1F3078E39B4E6D5A_OFFSET))(this, a1);
	}

	::Class_1_2DDAC2F6C97EB8AD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2DDAC2F6C97EB8AD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::Class_3_DBF5783EF2C3816D* Method_1_F239777256F9BA8F()
	{
		return ((::Class_3_DBF5783EF2C3816D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Void Method_1_F71E118C691AF59F(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* a1, ::UnityEngine::ParticleSystem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_F71E118C691AF59F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4E22A18EF530BFA8(::Class_3_DBF5783EF2C3816D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DBF5783EF2C3816D*))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1A44554FE046F73_METHOD_1_9B0C43B0B6D3BA9B_OFFSET))(this);
	}
};
