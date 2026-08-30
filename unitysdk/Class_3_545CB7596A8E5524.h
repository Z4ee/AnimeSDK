#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A;

#define CLASS_3_545CB7596A8E5524_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A59920)
#define CLASS_3_545CB7596A8E5524__CTOR_OFFSET UNITYSDK_OFFSET(0x18A59A60)

inline static constexpr unsigned int Class_3_545CB7596A8E5524_TypeDefinitionIndex = 69701;

class Class_3_545CB7596A8E5524 : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A*>
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
};
