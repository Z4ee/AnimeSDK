#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisionDisableReason.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_508;
class Class_1_065C3F7CC6C5F3AA;
class Class_1_8444A7CEAF30C901;
namespace RPG::GameCore { class ConicalVisionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPG::GameCore { class VisionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3F4D673D3F90D12C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A19C70)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_0C3969208BD57B5E_OFFSET UNITYSDK_OFFSET(0x9A18F20)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9A19360)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_3559476C7C86165D_OFFSET UNITYSDK_OFFSET(0x9A19280)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_3BE894D3E155D552_OFFSET UNITYSDK_OFFSET(0x9A19400)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9A189C0)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9A19D10)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_96C24504C61D8C40_OFFSET UNITYSDK_OFFSET(0x9A195C0)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_A054F3FFB1A29991_OFFSET UNITYSDK_OFFSET(0x9A19160)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_BB8A062135100DF4_OFFSET UNITYSDK_OFFSET(0x9A18AD0)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_E529A7B8E2A3FB56_1_OFFSET UNITYSDK_OFFSET(0x9A18A80)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_E529A7B8E2A3FB56_OFFSET UNITYSDK_OFFSET(0x9A18A30)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9A18A20)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x9A19580)
#define CLASS_2_3F4D673D3F90D12C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A19D60)

inline static constexpr unsigned int Class_2_3F4D673D3F90D12C_TypeDefinitionIndex = 52509;

class Class_2_3F4D673D3F90D12C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Single* StaticGet_Field_2_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F4D673D3F90D12C_TypeDefinitionIndex)->GetStaticField(0x67E0);
	}
	static ::System::Single* StaticGet_Field_2_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F4D673D3F90D12C_TypeDefinitionIndex)->GetStaticField(0x67E4);
	}
	static ::System::Single* StaticGet_Field_2_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F4D673D3F90D12C_TypeDefinitionIndex)->GetStaticField(0x67E8);
	}
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F4D673D3F90D12C_TypeDefinitionIndex)->GetStaticField(0x67EC);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::EntityTag>*>* Field_2_2; // 0x18
	::Class_1_8444A7CEAF30C901* Field_2_4; // 0x20
	::RPG::GameCore::TransformComponent* Field_2_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::EntityTag>*>* Field_2_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_508*>* Field_2_6; // 0x38
	::Class_1_065C3F7CC6C5F3AA* Field_2_5; // 0x40
	::System::Single Field_2_7; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_E529A7B8E2A3FB56(::RPG::GameCore::CharacterVisionDisableReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisionDisableReason))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_E529A7B8E2A3FB56_OFFSET))(this, a1);
	}

	::System::Void Method_2_E529A7B8E2A3FB56_1(::RPG::GameCore::CharacterVisionDisableReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisionDisableReason))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_E529A7B8E2A3FB56_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BB8A062135100DF4(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_BB8A062135100DF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0C3969208BD57B5E(::RPG::GameCore::VisionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VisionConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_0C3969208BD57B5E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A054F3FFB1A29991(::RPG::GameCore::ConicalVisionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConicalVisionConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_A054F3FFB1A29991_OFFSET))(this, a1);
	}

	::System::Void Method_2_3559476C7C86165D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_3559476C7C86165D_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_508*>* Method_2_3BE894D3E155D552()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_508*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_3BE894D3E155D552_OFFSET))(this);
	}

	::Class_1_8444A7CEAF30C901* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_8444A7CEAF30C901*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_96C24504C61D8C40(::System::String* a1, ::System::Boolean a2, ::Il2CppArray<::RPG::GameCore::EntityTag>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::EntityTag>*))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_96C24504C61D8C40_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_DISPOSE_OFFSET))(this);
	}

	static ::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_5790A55946AA509D_OFFSET))();
	}
};
