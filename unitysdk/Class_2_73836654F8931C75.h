#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Enum_3_ECC8C4B428742371.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Share/EScenePropertyType.h"

class Class_2_1824EF69C8E376A3;
class Class_2_9D9172C07F82DDAE;
class Class_3_593ED5D6D9B408DC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_73836654F8931C75_METHOD_2_0FC0EC2359BC9680_OFFSET UNITYSDK_OFFSET(0x10238890)
#define CLASS_2_73836654F8931C75_METHOD_2_19BC1B7DA7240AC0_OFFSET UNITYSDK_OFFSET(0x10232F70)
#define CLASS_2_73836654F8931C75_METHOD_2_1B2D1102D4DE83CF_OFFSET UNITYSDK_OFFSET(0x10237750)
#define CLASS_2_73836654F8931C75_METHOD_2_1CAE5C172C3D6248_OFFSET UNITYSDK_OFFSET(0x10235020)
#define CLASS_2_73836654F8931C75_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x10234470)
#define CLASS_2_73836654F8931C75_METHOD_2_1F43B8554B83177A_OFFSET UNITYSDK_OFFSET(0x10234180)
#define CLASS_2_73836654F8931C75_METHOD_2_2C40DF912FE079FA_OFFSET UNITYSDK_OFFSET(0x10233E30)
#define CLASS_2_73836654F8931C75_METHOD_2_3C1186BC93E9A7B0_1_OFFSET UNITYSDK_OFFSET(0x1023A7B0)
#define CLASS_2_73836654F8931C75_METHOD_2_3C1186BC93E9A7B0_OFFSET UNITYSDK_OFFSET(0x10238BB0)
#define CLASS_2_73836654F8931C75_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x102395B0)
#define CLASS_2_73836654F8931C75_METHOD_2_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0x10236670)
#define CLASS_2_73836654F8931C75_METHOD_2_41A074549EF25F63_2_OFFSET UNITYSDK_OFFSET(0x10237620)
#define CLASS_2_73836654F8931C75_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10235B50)
#define CLASS_2_73836654F8931C75_METHOD_2_47186B585031F826_OFFSET UNITYSDK_OFFSET(0x10237C50)
#define CLASS_2_73836654F8931C75_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x10234900)
#define CLASS_2_73836654F8931C75_METHOD_2_58E60DF80910B6C0_OFFSET UNITYSDK_OFFSET(0x102347F0)
#define CLASS_2_73836654F8931C75_METHOD_2_5D3070AB9E868A49_1_OFFSET UNITYSDK_OFFSET(0x10239740)
#define CLASS_2_73836654F8931C75_METHOD_2_5D3070AB9E868A49_OFFSET UNITYSDK_OFFSET(0x10236D00)
#define CLASS_2_73836654F8931C75_METHOD_2_67357D5D2CED3B99_OFFSET UNITYSDK_OFFSET(0x10238090)
#define CLASS_2_73836654F8931C75_METHOD_2_6C704E9E1B640C7B_OFFSET UNITYSDK_OFFSET(0x10236780)
#define CLASS_2_73836654F8931C75_METHOD_2_6DF5560BCF9D7D2B_OFFSET UNITYSDK_OFFSET(0x10235750)
#define CLASS_2_73836654F8931C75_METHOD_2_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0x10238A20)
#define CLASS_2_73836654F8931C75_METHOD_2_8F21B6DB53132338_1_OFFSET UNITYSDK_OFFSET(0x1023B8C0)
#define CLASS_2_73836654F8931C75_METHOD_2_8F21B6DB53132338_OFFSET UNITYSDK_OFFSET(0x1023B1B0)
#define CLASS_2_73836654F8931C75_METHOD_2_934F77AD64C7D236_OFFSET UNITYSDK_OFFSET(0x10235970)
#define CLASS_2_73836654F8931C75_METHOD_2_977C4FA3DD780523_OFFSET UNITYSDK_OFFSET(0x10234220)
#define CLASS_2_73836654F8931C75_METHOD_2_9D38CE1196AE2404_OFFSET UNITYSDK_OFFSET(0x102373D0)
#define CLASS_2_73836654F8931C75_METHOD_2_A15F65F86F7CAB51_OFFSET UNITYSDK_OFFSET(0x10235D60)
#define CLASS_2_73836654F8931C75_METHOD_2_A73FAE23F2DC7991_1_OFFSET UNITYSDK_OFFSET(0x10238AF0)
#define CLASS_2_73836654F8931C75_METHOD_2_A73FAE23F2DC7991_OFFSET UNITYSDK_OFFSET(0x10235CA0)
#define CLASS_2_73836654F8931C75_METHOD_2_A7DDF33901064D48_OFFSET UNITYSDK_OFFSET(0x1023A670)
#define CLASS_2_73836654F8931C75_METHOD_2_A9C7B4A32BDA7757_OFFSET UNITYSDK_OFFSET(0x10239E10)
#define CLASS_2_73836654F8931C75_METHOD_2_A9E4ADE3FF36111D_OFFSET UNITYSDK_OFFSET(0x10234770)
#define CLASS_2_73836654F8931C75_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x10235700)
#define CLASS_2_73836654F8931C75_METHOD_2_BA9042C6D7319C07_OFFSET UNITYSDK_OFFSET(0x1023A390)
#define CLASS_2_73836654F8931C75_METHOD_2_BF3ADE33E6F878DD_1_OFFSET UNITYSDK_OFFSET(0x1023A7A0)
#define CLASS_2_73836654F8931C75_METHOD_2_BF3ADE33E6F878DD_OFFSET UNITYSDK_OFFSET(0x102396A0)
#define CLASS_2_73836654F8931C75_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x10235B40)
#define CLASS_2_73836654F8931C75_METHOD_2_C5DF2B2D4B679B6C_OFFSET UNITYSDK_OFFSET(0x1023B830)
#define CLASS_2_73836654F8931C75_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1023B8B0)
#define CLASS_2_73836654F8931C75_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x102396B0)
#define CLASS_2_73836654F8931C75_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10235C60)
#define CLASS_2_73836654F8931C75_METHOD_2_CE80A204C3AAA2F0_OFFSET UNITYSDK_OFFSET(0x102337F0)
#define CLASS_2_73836654F8931C75_METHOD_2_D35CAAC9853FB556_OFFSET UNITYSDK_OFFSET(0x1023A6E0)
#define CLASS_2_73836654F8931C75_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x10232980)
#define CLASS_2_73836654F8931C75_METHOD_2_EC03BF13D7F40502_OFFSET UNITYSDK_OFFSET(0x1023BF00)
#define CLASS_2_73836654F8931C75_METHOD_2_F057EA2A40B29F9E_OFFSET UNITYSDK_OFFSET(0x102336B0)
#define CLASS_2_73836654F8931C75_METHOD_2_F95701F6B8C47E68_OFFSET UNITYSDK_OFFSET(0x10232FD0)
#define CLASS_2_73836654F8931C75_METHOD_2_FA23CF7F8908C603_OFFSET UNITYSDK_OFFSET(0x1023B7F0)
#define CLASS_2_73836654F8931C75_METHOD_2_FC86CE9553A3F7EA_OFFSET UNITYSDK_OFFSET(0x10232EE0)
#define CLASS_2_73836654F8931C75_METHOD_2_FD0A0FB0E5CA8EEE_1_OFFSET UNITYSDK_OFFSET(0x10238700)
#define CLASS_2_73836654F8931C75_METHOD_2_FD0A0FB0E5CA8EEE_OFFSET UNITYSDK_OFFSET(0x10233520)
#define CLASS_2_73836654F8931C75__CTOR_OFFSET UNITYSDK_OFFSET(0x10232AB0)

inline static constexpr unsigned int Class_2_73836654F8931C75_TypeDefinitionIndex = 63991;

class Class_2_73836654F8931C75 : public ::Class_1_BE149A7D6310B037
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* Field_2_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>* Field_2_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>* Field_2_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* Field_2_4; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* Field_2_10; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* Field_2_7; // 0x48
	::System::Collections::Generic::Queue_1<::Class_3_593ED5D6D9B408DC*>* Field_2_9; // 0x50
	::Class_2_9D9172C07F82DDAE* Field_2_1; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_3; // 0x60
	::System::Int32 Field_2_0; // 0x68
	::System::Int32 Field_2_11; // 0x6C
	::System::Int32 Field_2_13; // 0x70
	::System::Int32 Field_2_14; // 0x74
	::System::Int32 Field_2_12; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Int32 Method_2_FC86CE9553A3F7EA(::Share::EScenePropertyType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Share::EScenePropertyType))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_FC86CE9553A3F7EA_OFFSET))(this, a1);
	}

	::System::Single Method_2_19BC1B7DA7240AC0(::System::Int32 a1, ::Share::EPropertyType a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_19BC1B7DA7240AC0_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_F057EA2A40B29F9E(::System::Int32 a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>*))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_F057EA2A40B29F9E_OFFSET))(a1, a2, a3);
	}

	static ::Share::EPropertyType Method_2_2C40DF912FE079FA(::MoleMole::Config::BaseProperty a1)
	{
		return ((::Share::EPropertyType(*)(::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_2C40DF912FE079FA_OFFSET))(a1);
	}

	::System::Boolean Method_2_977C4FA3DD780523(::System::Int32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_977C4FA3DD780523_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Single Method_2_A9E4ADE3FF36111D(::MoleMole::Config::BaseProperty a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_A9E4ADE3FF36111D_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_6DF5560BCF9D7D2B(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_6DF5560BCF9D7D2B_OFFSET))(this, a1);
	}

	::System::Single Method_2_FD0A0FB0E5CA8EEE(::System::Int32 a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_FD0A0FB0E5CA8EEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::MoleMole::Config::BaseProperty Method_2_934F77AD64C7D236(::System::String* a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_934F77AD64C7D236_OFFSET))(a1);
	}

	static ::MoleMole::Config::BaseProperty Method_2_A73FAE23F2DC7991(::Share::EPropertyType a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_A73FAE23F2DC7991_OFFSET))(a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Method_2_A15F65F86F7CAB51(::Class_2_1824EF69C8E376A3* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_A15F65F86F7CAB51_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_41A074549EF25F63_1_OFFSET))(this);
	}

	::System::Void Method_2_6C704E9E1B640C7B(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_6C704E9E1B640C7B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* Method_2_5D3070AB9E868A49(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_5D3070AB9E868A49_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D38CE1196AE2404(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_9D38CE1196AE2404_OFFSET))(this, a1, a2);
	}

	static ::MoleMole::Config::BaseProperty Method_2_47186B585031F826(::Share::EPropertyType a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_47186B585031F826_OFFSET))(a1);
	}

	::System::Void Method_2_67357D5D2CED3B99(::Class_3_593ED5D6D9B408DC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_593ED5D6D9B408DC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_67357D5D2CED3B99_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_FD0A0FB0E5CA8EEE_1(::System::Int32 a1, ::MoleMole::Config::BaseProperty a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_FD0A0FB0E5CA8EEE_1_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_2_0FC0EC2359BC9680(::Share::EPropertyType a1)
	{
		return ((::System::String*(*)(::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_0FC0EC2359BC9680_OFFSET))(a1);
	}

	::System::Int32 Method_2_814B2B0F621DA493()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_814B2B0F621DA493_OFFSET))(this);
	}

	static ::MoleMole::Config::BaseProperty Method_2_A73FAE23F2DC7991_1(::Share::EPropertyType a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_A73FAE23F2DC7991_1_OFFSET))(a1);
	}

	::System::Void Method_2_3C1186BC93E9A7B0(::System::Int32 a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_3C1186BC93E9A7B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* Method_2_BF3ADE33E6F878DD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_BF3ADE33E6F878DD_OFFSET))(this);
	}

	static ::MoleMole::Config::BaseProperty Method_2_58E60DF80910B6C0(::MoleMole::Config::BaseProperty a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_58E60DF80910B6C0_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* Method_2_5D3070AB9E868A49_1(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_5D3070AB9E868A49_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_BA9042C6D7319C07()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_BA9042C6D7319C07_OFFSET))(this);
	}

	::System::Void Method_2_A7DDF33901064D48(::System::Int32 a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_A7DDF33901064D48_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_D35CAAC9853FB556(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_D35CAAC9853FB556_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* Method_2_BF3ADE33E6F878DD_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_BF3ADE33E6F878DD_1_OFFSET))(this);
	}

	::System::Int32 Method_2_A9C7B4A32BDA7757(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_A9C7B4A32BDA7757_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1B2D1102D4DE83CF(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* a3, ::System::Int32& a4)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_1B2D1102D4DE83CF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_2_1CAE5C172C3D6248(::MoleMole::Config::BaseProperty a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* a4, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* a5, ::Enum_3_ECC8C4B428742371& a6)
	{
		return ((::System::Single(*)(::MoleMole::Config::BaseProperty, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>*, ::Enum_3_ECC8C4B428742371&))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_1CAE5C172C3D6248_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_3C1186BC93E9A7B0_1(::System::Int32 a1, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_3C1186BC93E9A7B0_1_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_1F43B8554B83177A(::MoleMole::Config::BaseProperty a1, ::Share::EPropertyType& a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty, ::Share::EPropertyType&))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_1F43B8554B83177A_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_2_8F21B6DB53132338(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_8F21B6DB53132338_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>* Method_2_FA23CF7F8908C603()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_FA23CF7F8908C603_OFFSET))(this);
	}

	static ::System::Void Method_2_CE80A204C3AAA2F0(::System::Int32 a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*>*))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_CE80A204C3AAA2F0_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_41A074549EF25F63_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_41A074549EF25F63_2_OFFSET))(this);
	}

	::System::Int32 Method_2_C5DF2B2D4B679B6C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_C5DF2B2D4B679B6C_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_2_8F21B6DB53132338_1(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_8F21B6DB53132338_1_OFFSET))(this, a1);
	}

	static ::MoleMole::Config::BaseProperty Method_2_F95701F6B8C47E68(::Share::EPropertyType a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::Share::EPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_F95701F6B8C47E68_OFFSET))(a1);
	}

	::System::Int32 Method_2_EC03BF13D7F40502(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73836654F8931C75_METHOD_2_EC03BF13D7F40502_OFFSET))(this, a1);
	}
};
