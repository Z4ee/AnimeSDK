#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D091CC614BEA65CF_Enum_3_08F151FA978DD114.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigCurveDataInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D091CC614BEA65CF_METHOD_1_0D64FB84CB8E6995_OFFSET UNITYSDK_OFFSET(0x1265FE40)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1265FF00)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1265FD60)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_7BFFDA9B1EBE5737_OFFSET UNITYSDK_OFFSET(0x1265F890)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_8D595942D57F40CD_OFFSET UNITYSDK_OFFSET(0x1265FDB0)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x1265FA00)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1265FD50)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1265F820)
#define CLASS_1_D091CC614BEA65CF_METHOD_1_E357A40F3C9D1482_OFFSET UNITYSDK_OFFSET(0x1265FB00)
#define CLASS_1_D091CC614BEA65CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1265F810)

inline static constexpr unsigned int Class_1_D091CC614BEA65CF_TypeDefinitionIndex = 65210;

class Class_1_D091CC614BEA65CF : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_11; // 0x10
	::System::String* Field_1_0; // 0x18
	::MoleMole::ConfigCurveDataInfo* Field_1_6; // 0x20
	::System::Action_1<::System::Int32>* Field_1_10; // 0x28
	::System::Single Field_1_8; // 0x30
	::System::Single Field_1_14; // 0x34
	::System::Int32 Field_1_7; // 0x38
	::System::Single Field_1_4; // 0x3C
	::System::Single Field_1_15; // 0x40
	::Class_1_D091CC614BEA65CF_Enum_3_08F151FA978DD114 Field_1_5; // 0x44
	::System::Boolean Field_1_9; // 0x45

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_1_7BFFDA9B1EBE5737(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_7BFFDA9B1EBE5737_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_1_E357A40F3C9D1482(::System::Int32 a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Action_1<::System::Int32>* a5, ::System::Action_1<::System::Int32>* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single, ::System::Single, ::System::Action_1<::System::Int32>*, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_E357A40F3C9D1482_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_8D595942D57F40CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_8D595942D57F40CD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_0D64FB84CB8E6995(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D091CC614BEA65CF_METHOD_1_0D64FB84CB8E6995_OFFSET))(this, a1);
	}
};
