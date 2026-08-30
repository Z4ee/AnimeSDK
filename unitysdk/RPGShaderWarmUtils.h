#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGSHADERWARMUTILS_ISENABLESHADERMEMTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C6F8930)
#define RPGSHADERWARMUTILS_SWITCHSHADERMEMTESTFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8A20)
#define RPGSHADERWARMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F8BD0)

inline static constexpr unsigned int RPGShaderWarmUtils_TypeDefinitionIndex = 36794;

class RPGShaderWarmUtils : public ::System::Object
{
public:
	static ::System::String** StaticGet_swCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGShaderWarmUtils_TypeDefinitionIndex)->GetStaticField(0x42FD0);
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
