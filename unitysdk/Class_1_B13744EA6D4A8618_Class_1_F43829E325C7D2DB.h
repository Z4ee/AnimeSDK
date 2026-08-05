#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLogicMovementRegistry; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B13744EA6D4A8618_CLASS_1_F43829E325C7D2DB_METHOD_1_09CDA1C247F48E99_OFFSET UNITYSDK_OFFSET(0x138D39B0)
#define CLASS_1_B13744EA6D4A8618_CLASS_1_F43829E325C7D2DB__CTOR_OFFSET UNITYSDK_OFFSET(0x138D39A0)

inline static constexpr unsigned int Class_1_B13744EA6D4A8618_Class_1_F43829E325C7D2DB_TypeDefinitionIndex = 76073;

class Class_1_B13744EA6D4A8618_Class_1_F43829E325C7D2DB : public ::System::Object
{
public:
	::System::Action* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLogicMovementRegistry*>* Field_1_0; // 0x18
	::System::Action_1<::MoleMole::Config::ConfigLogicMovementRegistry*>* Field_1_5; // 0x20
	::System::Int32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B13744EA6D4A8618_CLASS_1_F43829E325C7D2DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_09CDA1C247F48E99(::MoleMole::Config::ConfigLogicMovementRegistry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLogicMovementRegistry*))((::PBYTE)hIl2Cpp + CLASS_1_B13744EA6D4A8618_CLASS_1_F43829E325C7D2DB_METHOD_1_09CDA1C247F48E99_OFFSET))(this, a1);
	}
};
