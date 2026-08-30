#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_6CE70F4211D79CD5_6;
namespace RPG::Client { class LocalizedText; }

#define CLASS_2_9384BB234F2D2A88_METHOD_2_970F83AA36AAD910_OFFSET UNITYSDK_OFFSET(0x19F9DEB0)
#define CLASS_2_9384BB234F2D2A88__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9DFC0)
#define CLASS_2_9384BB234F2D2A88__ONBIND_OFFSET UNITYSDK_OFFSET(0x19F9DE30)

inline static constexpr unsigned int Class_2_9384BB234F2D2A88_TypeDefinitionIndex = 71549;

class Class_2_9384BB234F2D2A88 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9384BB234F2D2A88__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9384BB234F2D2A88__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_970F83AA36AAD910(::Class_1_6CE70F4211D79CD5_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_6*))((::PBYTE)hIl2Cpp + CLASS_2_9384BB234F2D2A88_METHOD_2_970F83AA36AAD910_OFFSET))(this, a1);
	}
};
