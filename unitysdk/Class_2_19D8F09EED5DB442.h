#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }

#define CLASS_2_19D8F09EED5DB442_METHOD_2_2F2F7924D292824D_OFFSET UNITYSDK_OFFSET(0xB956540)
#define CLASS_2_19D8F09EED5DB442__CTOR_OFFSET UNITYSDK_OFFSET(0xB9567C0)
#define CLASS_2_19D8F09EED5DB442__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9564C0)

inline static constexpr unsigned int Class_2_19D8F09EED5DB442_TypeDefinitionIndex = 72273;

class Class_2_19D8F09EED5DB442 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x60
	::RPG::Client::LocalizedText* GBFKFBCCLKK; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19D8F09EED5DB442__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19D8F09EED5DB442__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2F2F7924D292824D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19D8F09EED5DB442_METHOD_2_2F2F7924D292824D_OFFSET))(this, a1);
	}
};
