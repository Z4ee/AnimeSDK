#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }

#define CLASS_2_EF38A48BFE5B16E9_METHOD_2_8583C5AC29198FC4_OFFSET UNITYSDK_OFFSET(0x195DE530)
#define CLASS_2_EF38A48BFE5B16E9__CTOR_OFFSET UNITYSDK_OFFSET(0x195DE7C0)
#define CLASS_2_EF38A48BFE5B16E9__ONBIND_OFFSET UNITYSDK_OFFSET(0x195DE4B0)

inline static constexpr unsigned int Class_2_EF38A48BFE5B16E9_TypeDefinitionIndex = 72272;

class Class_2_EF38A48BFE5B16E9 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x60
	::RPG::Client::LocalizedText* GBFKFBCCLKK; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF38A48BFE5B16E9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF38A48BFE5B16E9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8583C5AC29198FC4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EF38A48BFE5B16E9_METHOD_2_8583C5AC29198FC4_OFFSET))(this, a1);
	}
};
