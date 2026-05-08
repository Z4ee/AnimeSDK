#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FunctionMaskLevel.h"
#include "unitysdk/System/Object.h"

template <typename T1, typename T2> class Class_2_1908F2437AE347F8;

#define FUNCTIONSWITCHMANAGER_BUILDFUNCMASKLEVEL_OFFSET UNITYSDK_OFFSET(0x105916F0)
#define FUNCTIONSWITCHMANAGER_GETFUNCMASKLEVEL_OFFSET UNITYSDK_OFFSET(0x10591BA0)
#define FUNCTIONSWITCHMANAGER_REMOVEFUNCMASKLEVEL_OFFSET UNITYSDK_OFFSET(0x105919A0)
#define FUNCTIONSWITCHMANAGER_UPDATEFUNCMASKLEVEL_OFFSET UNITYSDK_OFFSET(0x10591730)
#define FUNCTIONSWITCHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10591CC0)

inline static constexpr unsigned int FunctionSwitchManager_TypeDefinitionIndex = 48050;

class FunctionSwitchManager : public ::System::Object
{
public:
	::Class_2_1908F2437AE347F8<::System::Int32, ::FunctionMaskLevel>* _functionMaskLevels; // 0x10

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
