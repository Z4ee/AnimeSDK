#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
namespace System { class String; }

#define CLASS_1_A1E7E3FAF077ACCB_METHOD_1_23C730EE17627349_OFFSET UNITYSDK_OFFSET(0x15991BB0)
#define CLASS_1_A1E7E3FAF077ACCB_METHOD_1_7A8A9FE28DE45804_OFFSET UNITYSDK_OFFSET(0x15991CD0)
#define CLASS_1_A1E7E3FAF077ACCB_METHOD_1_90C3E64D31B54503_OFFSET UNITYSDK_OFFSET(0x15991C40)
#define CLASS_1_A1E7E3FAF077ACCB__CTOR_OFFSET UNITYSDK_OFFSET(0x15991D60)

inline static constexpr unsigned int Class_1_A1E7E3FAF077ACCB_TypeDefinitionIndex = 79734;

class Class_1_A1E7E3FAF077ACCB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1E7E3FAF077ACCB__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_23C730EE17627349(::RPG::Client::TextID a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_A1E7E3FAF077ACCB_METHOD_1_23C730EE17627349_OFFSET))(this, a1);
	}

	::System::String* Method_1_90C3E64D31B54503(::RPG::Client::TextID a1, ::Class_0_16E4307DCC419505_955* a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::Class_0_16E4307DCC419505_955*))((::PBYTE)hIl2Cpp + CLASS_1_A1E7E3FAF077ACCB_METHOD_1_90C3E64D31B54503_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_7A8A9FE28DE45804(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_A1E7E3FAF077ACCB_METHOD_1_7A8A9FE28DE45804_OFFSET))(this, a1, a2);
	}
};
