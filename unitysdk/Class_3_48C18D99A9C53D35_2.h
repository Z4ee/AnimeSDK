#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A_2;

#define CLASS_3_48C18D99A9C53D35_2_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x12533890)
#define CLASS_3_48C18D99A9C53D35_2__CTOR_OFFSET UNITYSDK_OFFSET(0x125339B0)
#define CLASS_3_48C18D99A9C53D35_2___IFIXBASEPROXY_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x125339F0)

inline static constexpr unsigned int Class_3_48C18D99A9C53D35_2_TypeDefinitionIndex = 64280;

class Class_3_48C18D99A9C53D35_2 : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A_2*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48C18D99A9C53D35_2__CTOR_OFFSET))(this);
	}

	::System::Void InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48C18D99A9C53D35_2_INITINTERNAL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_48C18D99A9C53D35_2___IFIXBASEPROXY_INITINTERNAL_OFFSET))(this);
	}
};
