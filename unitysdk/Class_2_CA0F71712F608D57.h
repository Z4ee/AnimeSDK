#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B17C3A61CEC44E6.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_2_CA0F71712F608D57_METHOD_2_6BCD6C23CC3F4F06_OFFSET UNITYSDK_OFFSET(0x117A34B0)
#define CLASS_2_CA0F71712F608D57__CTOR_OFFSET UNITYSDK_OFFSET(0x117A3500)

inline static constexpr unsigned int Class_2_CA0F71712F608D57_TypeDefinitionIndex = 60016;

class Class_2_CA0F71712F608D57 : public ::Class_1_7B17C3A61CEC44E6
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0F71712F608D57__CTOR_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_2_6BCD6C23CC3F4F06(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_CA0F71712F608D57_METHOD_2_6BCD6C23CC3F4F06_OFFSET))(this, a1);
	}
};
