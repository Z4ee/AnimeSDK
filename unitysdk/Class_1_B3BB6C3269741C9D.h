#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/MetricNumberFormatMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_906;
namespace System { class String; }

#define CLASS_1_B3BB6C3269741C9D_METHOD_1_131985F534A933F3_1_OFFSET UNITYSDK_OFFSET(0x8D44A40)
#define CLASS_1_B3BB6C3269741C9D_METHOD_1_131985F534A933F3_OFFSET UNITYSDK_OFFSET(0x8D44920)
#define CLASS_1_B3BB6C3269741C9D_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x8D449A0)
#define CLASS_1_B3BB6C3269741C9D_METHOD_1_7BE0F592A061FB9C_OFFSET UNITYSDK_OFFSET(0x8D44910)
#define CLASS_1_B3BB6C3269741C9D__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D44AD0)
#define CLASS_1_B3BB6C3269741C9D__CTOR_OFFSET UNITYSDK_OFFSET(0x8D44AC0)

inline static constexpr unsigned int Class_1_B3BB6C3269741C9D_TypeDefinitionIndex = 60148;

class Class_1_B3BB6C3269741C9D : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_906** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_906**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3BB6C3269741C9D_TypeDefinitionIndex)->GetStaticField(0x17320);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D__CCTOR_OFFSET))();
	}

	::RPG::Client::Textmap::Parameter::MetricNumberFormatMode Method_1_7BE0F592A061FB9C()
	{
		return ((::RPG::Client::Textmap::Parameter::MetricNumberFormatMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D_METHOD_1_7BE0F592A061FB9C_OFFSET))(this);
	}

	::System::String* Method_1_131985F534A933F3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D_METHOD_1_131985F534A933F3_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::String* Method_1_131985F534A933F3_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3BB6C3269741C9D_METHOD_1_131985F534A933F3_1_OFFSET))(this);
	}
};
