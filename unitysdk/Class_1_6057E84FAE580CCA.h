#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_25C01EEFA5AE208E;
class Class_3_4875884AB352B34E;
class Class_3_D37B76E3ED8B42AD;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole::EffectSimulate { class NapEffectSimulatorComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_1_6057E84FAE580CCA_METHOD_1_48A7EF1D597B135D_OFFSET UNITYSDK_OFFSET(0x101941E0)
#define CLASS_1_6057E84FAE580CCA_METHOD_1_55267D7275195AC1_OFFSET UNITYSDK_OFFSET(0x101939F0)
#define CLASS_1_6057E84FAE580CCA_METHOD_1_7E3C0318CC90CDC0_OFFSET UNITYSDK_OFFSET(0x10194280)
#define CLASS_1_6057E84FAE580CCA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10194180)
#define CLASS_1_6057E84FAE580CCA_METHOD_1_DA1AB6B6394365F7_OFFSET UNITYSDK_OFFSET(0x10193930)
#define CLASS_1_6057E84FAE580CCA__CTOR_OFFSET UNITYSDK_OFFSET(0x10193920)

inline static constexpr unsigned int Class_1_6057E84FAE580CCA_TypeDefinitionIndex = 50019;

class Class_1_6057E84FAE580CCA : public ::System::Object
{
public:
	// static const ::System::Byte Field_1_3 = 0x0; // 0x0
	// static const ::System::Byte Field_1_2 = 0x1; // 0x0
	// static const ::System::Byte Field_1_1 = 0x2; // 0x0
	// static const ::System::Byte Field_1_0 = 0x4; // 0x0
	// static const ::System::Byte Field_1_7 = 0x8; // 0x0
	// static const ::System::Byte Field_1_6 = 0x1; // 0x0
	// static const ::System::Byte Field_1_5 = 0x2; // 0x0
	// static const ::System::Byte Field_1_4 = 0x3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EffectSimulate::NapEffectSimulatorComponent*>* Field_1_16; // 0x10
	::Class_3_D37B76E3ED8B42AD* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_1_22; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_1_23; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_18; // 0x30
	::Class_3_D6DA183EF60F02C8* Field_1_10; // 0x38
	::Class_3_25C01EEFA5AE208E* Field_1_15; // 0x40
	::Class_3_4875884AB352B34E* Field_1_9; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_19; // 0x50
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_17; // 0x58
	::System::UInt32 Field_1_11; // 0x60
	::System::Boolean Field_1_21; // 0x64
	::System::Boolean Field_1_14; // 0x65
	::System::Byte Field_1_13; // 0x66
	::System::Byte Field_1_12; // 0x67

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6057E84FAE580CCA__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_DA1AB6B6394365F7(::System::Byte a1)
	{
		return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_6057E84FAE580CCA_METHOD_1_DA1AB6B6394365F7_OFFSET))(a1);
	}

	static ::System::Void Method_1_55267D7275195AC1(::Class_1_6057E84FAE580CCA*& a1)
	{
		return ((::System::Void(*)(::Class_1_6057E84FAE580CCA*&))((::PBYTE)hIl2Cpp + CLASS_1_6057E84FAE580CCA_METHOD_1_55267D7275195AC1_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6057E84FAE580CCA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::String* Method_1_48A7EF1D597B135D(::System::Byte a1)
	{
		return ((::System::String*(*)(::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_6057E84FAE580CCA_METHOD_1_48A7EF1D597B135D_OFFSET))(a1);
	}

	static ::Class_1_6057E84FAE580CCA* Method_1_7E3C0318CC90CDC0()
	{
		return ((::Class_1_6057E84FAE580CCA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6057E84FAE580CCA_METHOD_1_7E3C0318CC90CDC0_OFFSET))();
	}
};
