#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/MetricNumberFormatMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_906;
namespace System { class String; }

#define CLASS_1_B3BB6C3269741C9D_1_METHOD_1_131985F534A933F3_OFFSET UNITYSDK_OFFSET(0xEA70210)
#define CLASS_1_B3BB6C3269741C9D_1_METHOD_1_35EA095E1AFDD9C8_1_OFFSET UNITYSDK_OFFSET(0xEA70290)
#define CLASS_1_B3BB6C3269741C9D_1_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xEA70170)
#define CLASS_1_B3BB6C3269741C9D_1_METHOD_1_7BE0F592A061FB9C_OFFSET UNITYSDK_OFFSET(0xEA70160)
#define CLASS_1_B3BB6C3269741C9D_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA70340)
#define CLASS_1_B3BB6C3269741C9D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xEA70330)

inline static constexpr unsigned int Class_1_B3BB6C3269741C9D_1_TypeDefinitionIndex = 60149;

class Class_1_B3BB6C3269741C9D_1 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_906** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_906**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3BB6C3269741C9D_1_TypeDefinitionIndex)->GetStaticField(0x4BB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D_1__CCTOR_OFFSET))();
	}

	::RPG::Client::Textmap::Parameter::MetricNumberFormatMode Method_1_7BE0F592A061FB9C()
	{
		return ((::RPG::Client::Textmap::Parameter::MetricNumberFormatMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D_1_METHOD_1_7BE0F592A061FB9C_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D_1_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_1_131985F534A933F3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D_1_METHOD_1_131985F534A933F3_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D_1_METHOD_1_35EA095E1AFDD9C8_1_OFFSET))(this);
	}
};
