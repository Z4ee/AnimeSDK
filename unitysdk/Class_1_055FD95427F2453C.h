#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ShowEntryType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_055FD95427F2453C_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x11B1EAF0)
#define CLASS_1_055FD95427F2453C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x11B1F0E0)
#define CLASS_1_055FD95427F2453C_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x11B1EB40)
#define CLASS_1_055FD95427F2453C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11B1EBB0)
#define CLASS_1_055FD95427F2453C__CTOR_OFFSET UNITYSDK_OFFSET(0x11B1F0D0)

inline static constexpr unsigned int Class_1_055FD95427F2453C_TypeDefinitionIndex = 58287;

class Class_1_055FD95427F2453C : public ::System::Object
{
public:
	::System::String* Field_1_8; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Boolean Field_1_11; // 0x28
	::System::Boolean Field_1_15; // 0x29
	::System::Boolean Field_1_9; // 0x2A
	::System::Int32 Field_1_10; // 0x2C
	::System::Int32 Field_1_7; // 0x30
	::MoleMole::HollowChessboard::ShowEntryType Field_1_5; // 0x34
	::System::Int32 Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055FD95427F2453C__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055FD95427F2453C_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055FD95427F2453C_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055FD95427F2453C_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_055FD95427F2453C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
