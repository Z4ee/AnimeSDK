#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A_3;

#define CLASS_3_545CB7596A8E5524_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x8D75C30)
#define CLASS_3_545CB7596A8E5524__CTOR_OFFSET UNITYSDK_OFFSET(0x8D75D90)
#define CLASS_3_545CB7596A8E5524___IFIXBASEPROXY_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x8D75DD0)

inline static constexpr unsigned int Class_3_545CB7596A8E5524_TypeDefinitionIndex = 57026;

class Class_3_545CB7596A8E5524 : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A_3*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_545CB7596A8E5524__CTOR_OFFSET))(this);
	}

	::System::Void InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_545CB7596A8E5524_INITINTERNAL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_545CB7596A8E5524___IFIXBASEPROXY_INITINTERNAL_OFFSET))(this);
	}
};
