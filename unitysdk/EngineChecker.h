#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EngineChecker_CheckLevel.h"
#include "unitysdk/System/Object.h"

#define ENGINECHECKER_GET_BASEOBJECTCHECKLEVEL_OFFSET UNITYSDK_OFFSET(0x141688A0)
#define ENGINECHECKER_INITENGINECHECKFLAGS_OFFSET UNITYSDK_OFFSET(0x14168940)
#define ENGINECHECKER_SET_BASEOBJECTCHECKLEVEL_OFFSET UNITYSDK_OFFSET(0x141688B0)
#define ENGINECHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14168A10)
#define ENGINECHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x14168A00)

inline static constexpr unsigned int EngineChecker_TypeDefinitionIndex = 75422;

class EngineChecker : public ::System::Object
{
public:
	static ::EngineChecker_CheckLevel* StaticGet_s_LastSetLevel()
	{
		return (::EngineChecker_CheckLevel*)Il2CppClass::FromTypeDefinitionIndex(EngineChecker_TypeDefinitionIndex)->GetStaticField(0x113D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGINECHECKER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENGINECHECKER__CCTOR_OFFSET))();
	}

	static ::EngineChecker_CheckLevel get_BaseObjectCheckLevel()
	{
		return ((::EngineChecker_CheckLevel(*)())((::PBYTE)hIl2Cpp + ENGINECHECKER_GET_BASEOBJECTCHECKLEVEL_OFFSET))();
	}

	static ::System::Void set_BaseObjectCheckLevel(::EngineChecker_CheckLevel value)
	{
		return ((::System::Void(*)(::EngineChecker_CheckLevel))((::PBYTE)hIl2Cpp + ENGINECHECKER_SET_BASEOBJECTCHECKLEVEL_OFFSET))(value);
	}

	static ::System::Void InitEngineCheckFlags()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENGINECHECKER_INITENGINECHECKFLAGS_OFFSET))();
	}
};
