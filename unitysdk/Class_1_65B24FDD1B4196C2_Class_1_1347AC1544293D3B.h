#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_65B24FDD1B4196C2_CLASS_1_1347AC1544293D3B_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0xC507030)
#define CLASS_1_65B24FDD1B4196C2_CLASS_1_1347AC1544293D3B_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC507080)
#define CLASS_1_65B24FDD1B4196C2_CLASS_1_1347AC1544293D3B__CTOR_OFFSET UNITYSDK_OFFSET(0xC506250)

inline static constexpr unsigned int Class_1_65B24FDD1B4196C2_Class_1_1347AC1544293D3B_TypeDefinitionIndex = 50364;

class Class_1_65B24FDD1B4196C2_Class_1_1347AC1544293D3B : public ::System::Object
{
public:
	::System::Action* CONFIAMBBBC; // 0x10

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_CLASS_1_1347AC1544293D3B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean CanExecute(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_CLASS_1_1347AC1544293D3B_CANEXECUTE_OFFSET))(this, a1);
	}

	::System::Void Execute(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2_CLASS_1_1347AC1544293D3B_EXECUTE_OFFSET))(this, a1);
	}
};
