#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskConfig; }

#define CLASS_1_0597192E98B9E538_METHOD_1_3499D4555E100076_OFFSET UNITYSDK_OFFSET(0x17C2AB70)
#define CLASS_1_0597192E98B9E538_METHOD_1_7C798DF2D7BB7252_OFFSET UNITYSDK_OFFSET(0x17C2ABB0)
#define CLASS_1_0597192E98B9E538__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2ABF0)

inline static constexpr unsigned int Class_1_0597192E98B9E538_TypeDefinitionIndex = 34508;

class Class_1_0597192E98B9E538 : public ::System::Object
{
public:
	::RPG::Client::LittleGameShare::TaskState Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0597192E98B9E538__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::TaskState Method_1_3499D4555E100076()
	{
		return ((::RPG::Client::LittleGameShare::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0597192E98B9E538_METHOD_1_3499D4555E100076_OFFSET))(this);
	}

	::RPG::GameCore::TaskConfig* Method_1_7C798DF2D7BB7252()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0597192E98B9E538_METHOD_1_7C798DF2D7BB7252_OFFSET))(this);
	}
};
