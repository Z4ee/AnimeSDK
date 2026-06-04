#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A_1;

#define CLASS_3_2B2C92705A7A0277_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x14153B00)
#define CLASS_3_2B2C92705A7A0277__CTOR_OFFSET UNITYSDK_OFFSET(0x14153B40)
#define CLASS_3_2B2C92705A7A0277___IFIXBASEPROXY_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x14153BF0)

inline static constexpr unsigned int Class_3_2B2C92705A7A0277_TypeDefinitionIndex = 65199;

class Class_3_2B2C92705A7A0277 : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A_1*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B2C92705A7A0277__CTOR_OFFSET))(this);
	}

	::System::Void InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B2C92705A7A0277_INITINTERNAL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B2C92705A7A0277___IFIXBASEPROXY_INITINTERNAL_OFFSET))(this);
	}
};
