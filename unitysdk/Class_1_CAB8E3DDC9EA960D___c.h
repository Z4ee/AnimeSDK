#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_18.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_1_CAB8E3DDC9EA960D___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x161C50A0)
#define CLASS_1_CAB8E3DDC9EA960D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x161C5050)
#define CLASS_1_CAB8E3DDC9EA960D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161C5090)

inline static constexpr unsigned int Class_1_CAB8E3DDC9EA960D___c_TypeDefinitionIndex = 52880;

class Class_1_CAB8E3DDC9EA960D___c : public ::System::Object
{
public:
	static ::Class_1_CAB8E3DDC9EA960D___c** StaticGet___9()
	{
		return (::Class_1_CAB8E3DDC9EA960D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CAB8E3DDC9EA960D___c_TypeDefinitionIndex)->GetStaticField(0x460C0);
	}
	static ::System::Converter_2<::System::Int32, ::Enum_3_ED790DAC948A65A9_18>** StaticGet___9__58_0()
	{
		return (::System::Converter_2<::System::Int32, ::Enum_3_ED790DAC948A65A9_18>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CAB8E3DDC9EA960D___c_TypeDefinitionIndex)->GetStaticField(0x460C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CAB8E3DDC9EA960D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CAB8E3DDC9EA960D___C__CTOR_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_18 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_ED790DAC948A65A9_18(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CAB8E3DDC9EA960D___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
