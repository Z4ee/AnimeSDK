#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }

#define CLASS_2_EF38A48BFE5B16E9_METHOD_2_8583C5AC29198FC4_OFFSET UNITYSDK_OFFSET(0x17A1CA20)
#define CLASS_2_EF38A48BFE5B16E9__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1CCA0)
#define CLASS_2_EF38A48BFE5B16E9__ONBIND_OFFSET UNITYSDK_OFFSET(0x17A1C9A0)

inline static constexpr unsigned int Class_2_EF38A48BFE5B16E9_TypeDefinitionIndex = 69073;

class Class_2_EF38A48BFE5B16E9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::LocalizedText* Field_2_0; // 0x60
	::RPG::Client::MonoInControlTip* Field_2_1; // 0x68

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
