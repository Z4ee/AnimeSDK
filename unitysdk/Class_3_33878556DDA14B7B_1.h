#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A_1;

#define CLASS_3_33878556DDA14B7B_1_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x16C76200)
#define CLASS_3_33878556DDA14B7B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16C76240)

inline static constexpr unsigned int Class_3_33878556DDA14B7B_1_TypeDefinitionIndex = 66609;

class Class_3_33878556DDA14B7B_1 : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A_1*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33878556DDA14B7B_1__CTOR_OFFSET))(this);
	}

	::System::Void InitInternal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33878556DDA14B7B_1_INITINTERNAL_OFFSET))(this);
	}
};
