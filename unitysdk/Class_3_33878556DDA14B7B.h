#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PipelineCameraStateBaseRunner_1.h"

class Class_3_556E9C29895B365A_3;

#define CLASS_3_33878556DDA14B7B_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x14E96420)
#define CLASS_3_33878556DDA14B7B__CTOR_OFFSET UNITYSDK_OFFSET(0x14E96580)

inline static constexpr unsigned int Class_3_33878556DDA14B7B_TypeDefinitionIndex = 66607;

class Class_3_33878556DDA14B7B : public ::RPG::Client::PipelineCameraStateBaseRunner_1<::Class_3_556E9C29895B365A_3*>
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
};
