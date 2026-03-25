#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F14F05C7810148.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_2_9BA8E155CE79AB4A_METHOD_2_FA970902E48BDF68_OFFSET UNITYSDK_OFFSET(0x11406980)
#define CLASS_2_9BA8E155CE79AB4A__CTOR_OFFSET UNITYSDK_OFFSET(0x114069D0)

inline static constexpr unsigned int Class_2_9BA8E155CE79AB4A_TypeDefinitionIndex = 52936;

class Class_2_9BA8E155CE79AB4A : public ::Class_1_48F14F05C7810148
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BA8E155CE79AB4A__CTOR_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_2_FA970902E48BDF68(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_9BA8E155CE79AB4A_METHOD_2_FA970902E48BDF68_OFFSET))(this, a1);
	}
};
