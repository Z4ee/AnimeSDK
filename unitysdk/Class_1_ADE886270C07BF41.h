#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConfirmDialogContext; }
namespace System { class String; }

#define CLASS_1_ADE886270C07BF41_METHOD_1_0BC0DAD295CAFFD2_OFFSET UNITYSDK_OFFSET(0x195C4950)
#define CLASS_1_ADE886270C07BF41_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x195C4800)
#define CLASS_1_ADE886270C07BF41__CTOR_OFFSET UNITYSDK_OFFSET(0x195C4E40)

inline static constexpr unsigned int Class_1_ADE886270C07BF41_TypeDefinitionIndex = 61204;

class Class_1_ADE886270C07BF41 : public ::System::Object
{
public:
	::System::String* OCNGEPBPGCM; // 0x10
	::System::String* LDOHLFIHLNH; // 0x18
	::System::String* FHLCNCDFAKD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADE886270C07BF41__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADE886270C07BF41_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_0BC0DAD295CAFFD2(::RPG::Client::ConfirmDialogContext* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConfirmDialogContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADE886270C07BF41_METHOD_1_0BC0DAD295CAFFD2_OFFSET))(this, a1, a2, a3);
	}
};
