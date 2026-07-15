#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisionDisableReason.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_563;
class Class_1_6C30C65EACF8D014;
class Class_1_B65F0DC23C3D5837;
namespace RPG::GameCore { class ConicalVisionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPG::GameCore { class VisionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3F4D673D3F90D12C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D71D70)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16D707F0)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16D71E00)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16D71300)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_96C24504C61D8C40_OFFSET UNITYSDK_OFFSET(0x16D715B0)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_9CB2799A85638F82_OFFSET UNITYSDK_OFFSET(0x16D70DF0)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_A054F3FFB1A29991_OFFSET UNITYSDK_OFFSET(0x16D71100)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_B77037FA757B7454_OFFSET UNITYSDK_OFFSET(0x16D71220)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_BB8A062135100DF4_OFFSET UNITYSDK_OFFSET(0x16D70900)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_E1B45DE23BDFA161_OFFSET UNITYSDK_OFFSET(0x16D71390)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_E529A7B8E2A3FB56_1_OFFSET UNITYSDK_OFFSET(0x16D708B0)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_E529A7B8E2A3FB56_OFFSET UNITYSDK_OFFSET(0x16D70860)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16D70850)
#define CLASS_2_3F4D673D3F90D12C_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x16D71570)
#define CLASS_2_3F4D673D3F90D12C__CTOR_OFFSET UNITYSDK_OFFSET(0x16D71E50)

inline static constexpr unsigned int Class_2_3F4D673D3F90D12C_TypeDefinitionIndex = 54424;

class Class_2_3F4D673D3F90D12C : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F4D673D3F90D12C_TypeDefinitionIndex)->GetStaticField(0x5190);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F4D673D3F90D12C_TypeDefinitionIndex)->GetStaticField(0x5194);
	}
	static ::System::Single* StaticGet_Field_2_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F4D673D3F90D12C_TypeDefinitionIndex)->GetStaticField(0x5198);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F4D673D3F90D12C_TypeDefinitionIndex)->GetStaticField(0x519C);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::EntityTag>*>* Field_2_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_563*>* Field_2_5; // 0x20
	::Class_1_6C30C65EACF8D014* Field_2_6; // 0x28
	::Class_1_B65F0DC23C3D5837* Field_2_7; // 0x30
	::RPG::GameCore::TransformComponent* Field_2_8; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::EntityTag>*>* Field_2_9; // 0x40
	::System::Int32 Field_2_10; // 0x48
	::System::Single Field_2_11; // 0x4C

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

	::System::Void Method_2_9CB2799A85638F82(::RPG::GameCore::VisionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VisionConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_9CB2799A85638F82_OFFSET))(this, a1);
	}

	::System::Void Method_2_A054F3FFB1A29991(::RPG::GameCore::ConicalVisionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConicalVisionConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_A054F3FFB1A29991_OFFSET))(this, a1);
	}

	::System::Void Method_2_B77037FA757B7454(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_B77037FA757B7454_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_563*>* Method_2_E1B45DE23BDFA161()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_563*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_E1B45DE23BDFA161_OFFSET))(this);
	}

	::Class_1_B65F0DC23C3D5837* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_B65F0DC23C3D5837*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F4D673D3F90D12C_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
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
