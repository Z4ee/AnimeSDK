#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A_2;

#define CLASS_3_545CB7596A8E5524_1_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x16AFB190)
#define CLASS_3_545CB7596A8E5524_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16AFB2B0)

inline static constexpr unsigned int Class_3_545CB7596A8E5524_1_TypeDefinitionIndex = 69709;

class Class_3_545CB7596A8E5524_1 : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A_2*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_545CB7596A8E5524_1__CTOR_OFFSET))(this);
	}

	::System::Void InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_545CB7596A8E5524_1_INITINTERNAL_OFFSET))(this);
	}
};
