#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class Track; }

#define CLASS_1_4ADB267523680365_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15D286D0)
#define CLASS_1_4ADB267523680365_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x15D286C0)
#define CLASS_1_4ADB267523680365_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15D28730)
#define CLASS_1_4ADB267523680365__CTOR_OFFSET UNITYSDK_OFFSET(0x15D286B0)

inline static constexpr unsigned int Class_1_4ADB267523680365_TypeDefinitionIndex = 80323;

class Class_1_4ADB267523680365 : public ::System::Object
{
public:
	::MoleMole::Track* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::MoleMole::Track* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Track*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4ADB267523680365__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4ADB267523680365_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ADB267523680365_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ADB267523680365_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
