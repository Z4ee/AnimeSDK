#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6396E99C6B13C372;
namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_9694CD6B4882E9AA_METHOD_1_DBFF441A370CD690_OFFSET UNITYSDK_OFFSET(0xAAB6600)
#define CLASS_1_9694CD6B4882E9AA__CTOR_OFFSET UNITYSDK_OFFSET(0xAAB66B0)

inline static constexpr unsigned int Class_1_9694CD6B4882E9AA_TypeDefinitionIndex = 61436;

class Class_1_9694CD6B4882E9AA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9694CD6B4882E9AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DBFF441A370CD690(::Class_1_6396E99C6B13C372* a1, ::RPG::GameCore::ItemConfig* a2, ::System::UInt32 a3, ::System::UInt32& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6396E99C6B13C372*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_9694CD6B4882E9AA_METHOD_1_DBFF441A370CD690_OFFSET))(this, a1, a2, a3, a4);
	}
};
