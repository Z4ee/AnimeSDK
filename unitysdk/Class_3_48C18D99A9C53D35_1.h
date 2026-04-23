#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A_1;

#define CLASS_3_48C18D99A9C53D35_1_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x90DDBC0)
#define CLASS_3_48C18D99A9C53D35_1__CTOR_OFFSET UNITYSDK_OFFSET(0x90DDC00)
#define CLASS_3_48C18D99A9C53D35_1___IFIXBASEPROXY_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x90DDC40)

inline static constexpr unsigned int Class_3_48C18D99A9C53D35_1_TypeDefinitionIndex = 64278;

class Class_3_48C18D99A9C53D35_1 : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A_1*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48C18D99A9C53D35_1__CTOR_OFFSET))(this);
	}

	::System::Void InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48C18D99A9C53D35_1_INITINTERNAL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48C18D99A9C53D35_1___IFIXBASEPROXY_INITINTERNAL_OFFSET))(this);
	}
};
