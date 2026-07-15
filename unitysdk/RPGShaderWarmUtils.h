#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGSHADERWARMUTILS_ISENABLESHADERMEMTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1D13C750)
#define RPGSHADERWARMUTILS_SWITCHSHADERMEMTESTFILE_OFFSET UNITYSDK_OFFSET(0x1D13C840)
#define RPGSHADERWARMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D13C9F0)

inline static constexpr unsigned int RPGShaderWarmUtils_TypeDefinitionIndex = 35933;

class RPGShaderWarmUtils : public ::System::Object
{
public:
	static ::System::String** StaticGet_swCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGShaderWarmUtils_TypeDefinitionIndex)->GetStaticField(0x612E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGSHADERWARMUTILS__CCTOR_OFFSET))();
	}

	static ::System::Boolean IsEnableShaderMemTestConfig()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGSHADERWARMUTILS_ISENABLESHADERMEMTESTCONFIG_OFFSET))();
	}

	static ::System::Void SwitchShaderMemTestFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGSHADERWARMUTILS_SWITCHSHADERMEMTESTFILE_OFFSET))(a1);
	}
};
