#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FunctionMaskLevel.h"
#include "unitysdk/System/Object.h"

template <typename T1, typename T2> class Class_2_4AF6EFCF8A08DE1E;

#define FUNCTIONSWITCHMANAGER_BUILDFUNCMASKLEVEL_OFFSET UNITYSDK_OFFSET(0x12E6E260)
#define FUNCTIONSWITCHMANAGER_GETFUNCMASKLEVEL_OFFSET UNITYSDK_OFFSET(0x12E6E700)
#define FUNCTIONSWITCHMANAGER_REMOVEFUNCMASKLEVEL_OFFSET UNITYSDK_OFFSET(0x12E6E510)
#define FUNCTIONSWITCHMANAGER_UPDATEFUNCMASKLEVEL_OFFSET UNITYSDK_OFFSET(0x12E6E2A0)
#define FUNCTIONSWITCHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E6E820)

inline static constexpr unsigned int FunctionSwitchManager_TypeDefinitionIndex = 56052;

class FunctionSwitchManager : public ::System::Object
{
public:
	::Class_2_4AF6EFCF8A08DE1E<::System::Int32, ::FunctionMaskLevel>* _functionMaskLevels; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONSWITCHMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void BuildFuncMaskLevel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONSWITCHMANAGER_BUILDFUNCMASKLEVEL_OFFSET))(this);
	}

	::System::Void UpdateFuncMaskLevel(::System::Int32 funcId, ::FunctionMaskLevel level, ::System::Boolean sendNotify)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FunctionMaskLevel, ::System::Boolean))((::PBYTE)hIl2Cpp + FUNCTIONSWITCHMANAGER_UPDATEFUNCMASKLEVEL_OFFSET))(this, funcId, level, sendNotify);
	}

	::System::Void RemoveFuncMaskLevel(::System::Int32 funcId, ::FunctionMaskLevel level)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FunctionMaskLevel))((::PBYTE)hIl2Cpp + FUNCTIONSWITCHMANAGER_REMOVEFUNCMASKLEVEL_OFFSET))(this, funcId, level);
	}

	::FunctionMaskLevel GetFuncMaskLevel(::System::Int32 funcId)
	{
		return ((::FunctionMaskLevel(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FUNCTIONSWITCHMANAGER_GETFUNCMASKLEVEL_OFFSET))(this, funcId);
	}
};
