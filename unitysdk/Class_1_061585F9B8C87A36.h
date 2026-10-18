#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }

#define CLASS_1_061585F9B8C87A36_ADD_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0x15F1AAF0)
#define CLASS_1_061585F9B8C87A36_GET_WORKSHOPLEVEL_OFFSET UNITYSDK_OFFSET(0x15F1AA90)
#define CLASS_1_061585F9B8C87A36_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15F1AC70)
#define CLASS_1_061585F9B8C87A36_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15F1AAB0)
#define CLASS_1_061585F9B8C87A36_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0x15F1ABB0)
#define CLASS_1_061585F9B8C87A36_REMOVE_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0x15F1AB50)
#define CLASS_1_061585F9B8C87A36_SET_WORKSHOPLEVEL_OFFSET UNITYSDK_OFFSET(0x15F1AAA0)
#define CLASS_1_061585F9B8C87A36__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1ACD0)

inline static constexpr unsigned int Class_1_061585F9B8C87A36_TypeDefinitionIndex = 79780;

class Class_1_061585F9B8C87A36 : public ::System::Object
{
public:
	::Sofa::Core::SimpleCommand* FGHLGECDPMB; // 0x10
	::System::Action* ExitHandler; // 0x18
	::System::UInt32 _WorkshopLevel_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_061585F9B8C87A36__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_WorkshopLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_061585F9B8C87A36_GET_WORKSHOPLEVEL_OFFSET))(this);
	}

	::System::Void set_WorkshopLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_061585F9B8C87A36_SET_WORKSHOPLEVEL_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_061585F9B8C87A36_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void add_ExitHandler(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_061585F9B8C87A36_ADD_EXITHANDLER_OFFSET))(this, a1);
	}

	::System::Void remove_ExitHandler(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_061585F9B8C87A36_REMOVE_EXITHANDLER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_397* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_061585F9B8C87A36_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_061585F9B8C87A36_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
