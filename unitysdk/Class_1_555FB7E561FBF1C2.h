#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_337FE11AA35B1F17.h"
#include "unitysdk/Struct_2_75D3976A6C462D53.h"
#include "unitysdk/System/Object.h"

class Class_1_BC95CD88D4586F73;
class Class_3_1D68EAF01B840505;
namespace System { class String; }

#define CLASS_1_555FB7E561FBF1C2_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x13D90580)
#define CLASS_1_555FB7E561FBF1C2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13D90850)
#define CLASS_1_555FB7E561FBF1C2_METHOD_1_428CC2760C7CEABC_OFFSET UNITYSDK_OFFSET(0x13D90610)
#define CLASS_1_555FB7E561FBF1C2_METHOD_1_9C3A1BA05CD0F0BD_OFFSET UNITYSDK_OFFSET(0x13D908B0)
#define CLASS_1_555FB7E561FBF1C2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13D90570)
#define CLASS_1_555FB7E561FBF1C2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13D904F0)
#define CLASS_1_555FB7E561FBF1C2__CTOR_OFFSET UNITYSDK_OFFSET(0x13D904E0)

inline static constexpr unsigned int Class_1_555FB7E561FBF1C2_TypeDefinitionIndex = 77539;

class Class_1_555FB7E561FBF1C2 : public ::System::Object
{
public:
	::Struct_2_75D3976A6C462D53 Field_1_6; // 0x10
	::Class_1_BC95CD88D4586F73* Field_1_9; // 0x30
	::System::String* Field_1_1; // 0x38
	::System::UInt32 Field_1_5; // 0x40
	::System::UInt32 Field_1_4; // 0x44
	::System::UInt32 Field_1_3; // 0x48
	::System::UInt32 Field_1_0; // 0x4C
	::System::Boolean Field_1_7; // 0x50
	::Enum_3_337FE11AA35B1F17 Field_1_8; // 0x54
	::System::UInt32 Field_1_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555FB7E561FBF1C2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_3_1D68EAF01B840505* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1D68EAF01B840505*))((::PBYTE)hIl2Cpp + CLASS_1_555FB7E561FBF1C2__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555FB7E561FBF1C2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_555FB7E561FBF1C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_555FB7E561FBF1C2*))((::PBYTE)hIl2Cpp + CLASS_1_555FB7E561FBF1C2_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_428CC2760C7CEABC(::Enum_3_337FE11AA35B1F17& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_337FE11AA35B1F17&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_555FB7E561FBF1C2_METHOD_1_428CC2760C7CEABC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_555FB7E561FBF1C2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_9C3A1BA05CD0F0BD(::Enum_3_337FE11AA35B1F17& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_337FE11AA35B1F17&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_555FB7E561FBF1C2_METHOD_1_9C3A1BA05CD0F0BD_OFFSET))(this, a1, a2);
	}
};
