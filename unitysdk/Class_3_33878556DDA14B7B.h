#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A;

#define CLASS_3_33878556DDA14B7B_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x13FEDF10)
#define CLASS_3_33878556DDA14B7B__CTOR_OFFSET UNITYSDK_OFFSET(0x13FEE050)
#define CLASS_3_33878556DDA14B7B___IFIXBASEPROXY_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x13FEE100)

inline static constexpr unsigned int Class_3_33878556DDA14B7B_TypeDefinitionIndex = 65193;

class Class_3_33878556DDA14B7B : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33878556DDA14B7B__CTOR_OFFSET))(this);
	}

	::System::Void InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33878556DDA14B7B_INITINTERNAL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33878556DDA14B7B___IFIXBASEPROXY_INITINTERNAL_OFFSET))(this);
	}
};
