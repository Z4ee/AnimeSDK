#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4875884AB352B34E;
class Class_3_D37B76E3ED8B42AD;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole::EffectSimulate { class NapEffectSimulatorComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_1_DF501671B0C40EDB_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1664A040)
#define CLASS_1_DF501671B0C40EDB_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x166497A0)
#define CLASS_1_DF501671B0C40EDB_METHOD_1_55267D7275195AC1_OFFSET UNITYSDK_OFFSET(0x16649840)
#define CLASS_1_DF501671B0C40EDB_METHOD_1_578F4BB3BEADD68B_OFFSET UNITYSDK_OFFSET(0x16648C30)
#define CLASS_1_DF501671B0C40EDB_METHOD_1_7E3C0318CC90CDC0_OFFSET UNITYSDK_OFFSET(0x16648AA0)
#define CLASS_1_DF501671B0C40EDB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16649FE0)
#define CLASS_1_DF501671B0C40EDB__CTOR_OFFSET UNITYSDK_OFFSET(0x16648A90)

inline static constexpr unsigned int Class_1_DF501671B0C40EDB_TypeDefinitionIndex = 71785;

class Class_1_DF501671B0C40EDB : public ::System::Object
{
public:
	// static const ::System::Byte Field_1_0 = 0x0; // 0x0
	// static const ::System::Byte Field_1_1 = 0x1; // 0x0
	// static const ::System::Byte Field_1_2 = 0x2; // 0x0
	// static const ::System::Byte Field_1_3 = 0x4; // 0x0
	// static const ::System::Byte Field_1_4 = 0x8; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_1_14; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_11; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_1_13; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_1_12; // 0x30
	::Class_3_4875884AB352B34E* Field_1_7; // 0x38
	::Class_3_D37B76E3ED8B42AD* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x48
	::Class_3_D6DA183EF60F02C8* Field_1_8; // 0x50
	::System::UInt32 Field_1_5; // 0x58
	::System::Boolean Field_1_15; // 0x5C
	::System::Byte Field_1_16; // 0x5D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF501671B0C40EDB__CTOR_OFFSET))(this);
	}

	static ::Class_1_DF501671B0C40EDB* Method_1_7E3C0318CC90CDC0()
	{
		return ((::Class_1_DF501671B0C40EDB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF501671B0C40EDB_METHOD_1_7E3C0318CC90CDC0_OFFSET))();
	}

	::System::Void Method_1_578F4BB3BEADD68B(::System::UInt32 a1, ::Class_3_4875884AB352B34E* a2, ::Class_3_D6DA183EF60F02C8* a3, ::Class_3_D37B76E3ED8B42AD* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_3_4875884AB352B34E*, ::Class_3_D6DA183EF60F02C8*, ::Class_3_D37B76E3ED8B42AD*))((::PBYTE)hIl2Cpp + CLASS_1_DF501671B0C40EDB_METHOD_1_578F4BB3BEADD68B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF501671B0C40EDB_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	static ::System::Void Method_1_55267D7275195AC1(::Class_1_DF501671B0C40EDB*& a1)
	{
		return ((::System::Void(*)(::Class_1_DF501671B0C40EDB*&))((::PBYTE)hIl2Cpp + CLASS_1_DF501671B0C40EDB_METHOD_1_55267D7275195AC1_OFFSET))(a1);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_DF501671B0C40EDB* a1)
	{
		return ((::System::Void(*)(::Class_1_DF501671B0C40EDB*))((::PBYTE)hIl2Cpp + CLASS_1_DF501671B0C40EDB_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF501671B0C40EDB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
