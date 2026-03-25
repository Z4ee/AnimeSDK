#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGSHADERWARMUTILS_ISENABLESHADERMEMTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x16AE1D60)
#define RPGSHADERWARMUTILS_SWITCHSHADERMEMTESTFILE_OFFSET UNITYSDK_OFFSET(0x16AE1E50)
#define RPGSHADERWARMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AE2050)

inline static constexpr unsigned int RPGShaderWarmUtils_TypeDefinitionIndex = 29127;

class RPGShaderWarmUtils : public ::System::Object
{
public:
	static ::System::String** StaticGet_swCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGShaderWarmUtils_TypeDefinitionIndex)->GetStaticField(0xAF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGSHADERWARMUTILS__CCTOR_OFFSET))();
	}

	static ::System::Boolean IsEnableShaderMemTestConfig()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGSHADERWARMUTILS_ISENABLESHADERMEMTESTCONFIG_OFFSET))();
	}

	static ::System::Void SwitchShaderMemTestFile(::System::Boolean enable)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGSHADERWARMUTILS_SWITCHSHADERMEMTESTFILE_OFFSET))(enable);
	}
};
