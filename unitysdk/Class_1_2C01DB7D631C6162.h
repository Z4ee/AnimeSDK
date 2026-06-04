#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConfirmDialogContext; }
namespace System { class String; }

#define CLASS_1_2C01DB7D631C6162_METHOD_1_4FD943AB2FB83D69_OFFSET UNITYSDK_OFFSET(0xA620CD0)
#define CLASS_1_2C01DB7D631C6162_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xA620B80)
#define CLASS_1_2C01DB7D631C6162__CTOR_OFFSET UNITYSDK_OFFSET(0xA620FA0)

inline static constexpr unsigned int Class_1_2C01DB7D631C6162_TypeDefinitionIndex = 57119;

class Class_1_2C01DB7D631C6162 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C01DB7D631C6162__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C01DB7D631C6162_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_4FD943AB2FB83D69(::RPG::Client::ConfirmDialogContext* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConfirmDialogContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2C01DB7D631C6162_METHOD_1_4FD943AB2FB83D69_OFFSET))(this, a1, a2, a3);
	}
};
