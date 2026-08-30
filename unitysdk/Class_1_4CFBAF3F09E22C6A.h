#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4CFBAF3F09E22C6A_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x15936960)
#define CLASS_1_4CFBAF3F09E22C6A_METHOD_1_3CE8A1831DA14AB7_OFFSET UNITYSDK_OFFSET(0x15936AB0)
#define CLASS_1_4CFBAF3F09E22C6A_METHOD_1_D335C42499186977_OFFSET UNITYSDK_OFFSET(0x15936970)
#define CLASS_1_4CFBAF3F09E22C6A__CCTOR_OFFSET UNITYSDK_OFFSET(0x15936BD0)
#define CLASS_1_4CFBAF3F09E22C6A__CTOR_OFFSET UNITYSDK_OFFSET(0x15936BC0)

inline static constexpr unsigned int Class_1_4CFBAF3F09E22C6A_TypeDefinitionIndex = 61305;

class Class_1_4CFBAF3F09E22C6A : public ::System::Object
{
public:
	static ::System::String** StaticGet_EOOMOFHGOBI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4CFBAF3F09E22C6A_TypeDefinitionIndex)->GetStaticField(0x644D0);
	}
	// static const ::System::String* NGGKBANBKEO; // 0x0
	// static const ::System::String* KMFALPBKAGC; // 0x0
	// static const ::System::String* CJMKLLAPEJD; // 0x0
	// static const ::System::String* FAPNHKLEJBG; // 0x0
	// static const ::System::String* HPOBCLBMJNM; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CFBAF3F09E22C6A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CFBAF3F09E22C6A__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4CFBAF3F09E22C6A_METHOD_1_126AB3935214AA22_OFFSET))();
	}

	static ::System::Void Method_1_D335C42499186977(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4CFBAF3F09E22C6A_METHOD_1_D335C42499186977_OFFSET))(a1);
	}

	static ::System::Void Method_1_3CE8A1831DA14AB7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4CFBAF3F09E22C6A_METHOD_1_3CE8A1831DA14AB7_OFFSET))(a1, a2);
	}
};
