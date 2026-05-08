#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D091CC614BEA65CF_Enum_3_08F151FA978DD114.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigCurveDataInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D091CC614BEA65CF_METHOD_1_0D64FB84CB8E6995_OFFSET UNITYSDK_OFFSET(0x15AD8E90)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15AD94B0)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15AD9580)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_7BFFDA9B1EBE5737_OFFSET UNITYSDK_OFFSET(0x15AD91B0)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_8D595942D57F40CD_OFFSET UNITYSDK_OFFSET(0x15AD9320)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x15AD93B0)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15AD8F50)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15AD9510)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_E357A40F3C9D1482_OFFSET UNITYSDK_OFFSET(0x15AD8F60)
#define CLASS_1_D091CC614BEA65CF__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD8E80)

inline static constexpr unsigned int Class_1_D091CC614BEA65CF_TypeDefinitionIndex = 49168;

class Class_1_D091CC614BEA65CF : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_5; // 0x10
	::MoleMole::ConfigCurveDataInfo* Field_1_2; // 0x18
	::System::Action_1<::System::Int32>* Field_1_6; // 0x20
	::System::String* Field_1_0; // 0x28
	::System::Single Field_1_8; // 0x30
	::System::Int32 Field_1_1; // 0x34
	::System::Boolean Field_1_7; // 0x38
	::Class_1_D091CC614BEA65CF_Enum_3_08F151FA978DD114 Field_1_3; // 0x39
	::System::Single Field_1_10; // 0x3C
	::System::Single Field_1_4; // 0x40
	::System::Single Field_1_9; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0D64FB84CB8E6995(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_0D64FB84CB8E6995_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_E357A40F3C9D1482(::System::Int32 a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Action_1<::System::Int32>* a5, ::System::Action_1<::System::Int32>* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single, ::System::Single, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_E357A40F3C9D1482_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_1_7BFFDA9B1EBE5737(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_7BFFDA9B1EBE5737_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8D595942D57F40CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_8D595942D57F40CD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
