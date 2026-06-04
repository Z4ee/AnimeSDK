#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/MetricNumberFormatMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1073;
namespace System { class String; }

#define CLASS_1_F0ECC5927E2A58ED_1_METHOD_1_142140140DE19A6A_OFFSET UNITYSDK_OFFSET(0xA8227B0)
#define CLASS_1_F0ECC5927E2A58ED_1_METHOD_1_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0xA822830)
#define CLASS_1_F0ECC5927E2A58ED_1_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xA822700)
#define CLASS_1_F0ECC5927E2A58ED_1_METHOD_1_7BE0F592A061FB9C_OFFSET UNITYSDK_OFFSET(0xA8226F0)
#define CLASS_1_F0ECC5927E2A58ED_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8228F0)
#define CLASS_1_F0ECC5927E2A58ED_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA8228E0)

inline static constexpr unsigned int Class_1_F0ECC5927E2A58ED_1_TypeDefinitionIndex = 68537;

class Class_1_F0ECC5927E2A58ED_1 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_1073** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_1073**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0ECC5927E2A58ED_1_TypeDefinitionIndex)->GetStaticField(0x42500);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0ECC5927E2A58ED_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0ECC5927E2A58ED_1__CCTOR_OFFSET))();
	}

	::RPG::Client::Textmap::Parameter::MetricNumberFormatMode Method_1_7BE0F592A061FB9C()
	{
		return ((::RPG::Client::Textmap::Parameter::MetricNumberFormatMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0ECC5927E2A58ED_1_METHOD_1_7BE0F592A061FB9C_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0ECC5927E2A58ED_1_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_1_142140140DE19A6A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0ECC5927E2A58ED_1_METHOD_1_142140140DE19A6A_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0ECC5927E2A58ED_1_METHOD_1_35EA095E1AFDD9C8_1_OFFSET))(this);
	}
};
