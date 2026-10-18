#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A77148D52D516E55.h"
#include "unitysdk/System/Object.h"

class Class_1_414BCDCDAD47B487;
class Class_1_F756B10AB29D1235;
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_14377CDC129CA49E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9AE060)
#define CLASS_1_14377CDC129CA49E_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB9AD220)
#define CLASS_1_14377CDC129CA49E_METHOD_1_37641CB56E59A096_OFFSET UNITYSDK_OFFSET(0xB9AD8D0)
#define CLASS_1_14377CDC129CA49E_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xB9AC930)
#define CLASS_1_14377CDC129CA49E_METHOD_1_503CD42A0C349327_1_OFFSET UNITYSDK_OFFSET(0xB9ADFB0)
#define CLASS_1_14377CDC129CA49E_METHOD_1_503CD42A0C349327_OFFSET UNITYSDK_OFFSET(0xB9ADF00)
#define CLASS_1_14377CDC129CA49E_METHOD_1_627D204E7CA1E169_OFFSET UNITYSDK_OFFSET(0xB9AC330)
#define CLASS_1_14377CDC129CA49E_METHOD_1_70686EA4FBC1268C_OFFSET UNITYSDK_OFFSET(0xB9AD990)
#define CLASS_1_14377CDC129CA49E_METHOD_1_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0xB9ADCC0)
#define CLASS_1_14377CDC129CA49E_METHOD_1_9F04BE68706819B7_OFFSET UNITYSDK_OFFSET(0xB9ACD30)
#define CLASS_1_14377CDC129CA49E_METHOD_1_A60980497C60F70B_OFFSET UNITYSDK_OFFSET(0xB9AD540)
#define CLASS_1_14377CDC129CA49E_METHOD_1_C77976EB06F2E2F1_OFFSET UNITYSDK_OFFSET(0xB9AD340)
#define CLASS_1_14377CDC129CA49E_METHOD_1_D56133F35B0B69B9_OFFSET UNITYSDK_OFFSET(0xB9ADA50)
#define CLASS_1_14377CDC129CA49E_METHOD_1_E79EF21F0A1F4065_1_OFFSET UNITYSDK_OFFSET(0xB9ADBF0)
#define CLASS_1_14377CDC129CA49E_METHOD_1_E79EF21F0A1F4065_OFFSET UNITYSDK_OFFSET(0xB9AD280)
#define CLASS_1_14377CDC129CA49E_METHOD_1_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0xB9ACB30)
#define CLASS_1_14377CDC129CA49E__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AC0C0)

inline static constexpr unsigned int Class_1_14377CDC129CA49E_TypeDefinitionIndex = 73841;

class Class_1_14377CDC129CA49E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_414BCDCDAD47B487*>* CHHDHCBPODP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_414BCDCDAD47B487*>* FANECFNCGLF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_414BCDCDAD47B487*>* LAHCBMFNKED; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_F756B10AB29D1235*>* ONLODPMNHAK; // 0x28
	::RPG::GameCore::StageLodMapConfig* DOEFBHPBMJA; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NormDistanceLodTemplate*>* FGINEAJBMEH; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MMBJALBPIPC; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_414BCDCDAD47B487*>* MHAOKMFJAFH; // 0x48
	::RPG::GameCore::StageLodMapConfig* AHPDFDBDKHH; // 0x50
	::System::Boolean KKEOLEFKJNE; // 0x58
	::System::Boolean DMIKPDCIHII; // 0x59
	::System::Int32 NLDPADJJKEB; // 0x5C

	::System::Void _ctor(::RPG::GameCore::StageLodMapConfig* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::RPG::GameCore::StageLodMapConfig* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageLodMapConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::RPG::GameCore::StageLodMapConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_627D204E7CA1E169(::RPG::GameCore::LodConfig* a1, ::RPG::GameCore::LodConfig* a2, ::RPG::GameCore::LodConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::LodConfig*))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_627D204E7CA1E169_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9F04BE68706819B7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_9F04BE68706819B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_FF63E816B4D956CD_OFFSET))(this);
	}

	::Class_1_414BCDCDAD47B487* Method_1_E79EF21F0A1F4065(::System::String* a1)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_E79EF21F0A1F4065_OFFSET))(this, a1);
	}

	::System::String* Method_1_C77976EB06F2E2F1(::Struct_2_A77148D52D516E55 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_A77148D52D516E55))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_C77976EB06F2E2F1_OFFSET))(this, a1);
	}

	::Class_1_414BCDCDAD47B487* Method_1_A60980497C60F70B(::Struct_2_A77148D52D516E55 a1)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::Struct_2_A77148D52D516E55))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_A60980497C60F70B_OFFSET))(this, a1);
	}

	::Class_1_414BCDCDAD47B487* Method_1_D56133F35B0B69B9(::System::String* a1, ::System::Single a2)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_D56133F35B0B69B9_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_37641CB56E59A096(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_37641CB56E59A096_OFFSET))(this, a1);
	}

	::Class_1_414BCDCDAD47B487* Method_1_E79EF21F0A1F4065_1(::System::String* a1)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_E79EF21F0A1F4065_1_OFFSET))(this, a1);
	}

	::Class_1_414BCDCDAD47B487* Method_1_70686EA4FBC1268C(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_70686EA4FBC1268C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_816ED7FC0A7FCCD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_816ED7FC0A7FCCD1_OFFSET))(this);
	}

	::Class_1_414BCDCDAD47B487* Method_1_503CD42A0C349327(::System::String* a1)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_503CD42A0C349327_OFFSET))(this, a1);
	}

	::Class_1_414BCDCDAD47B487* Method_1_503CD42A0C349327_1(::System::String* a1)
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_503CD42A0C349327_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14377CDC129CA49E_DISPOSE_OFFSET))(this);
	}
};
