#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F14F05C7810148.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_2_B6D97766BA82A9E5_METHOD_2_C79B82BFBF60EB48_OFFSET UNITYSDK_OFFSET(0x9C68410)
#define CLASS_2_B6D97766BA82A9E5__CTOR_OFFSET UNITYSDK_OFFSET(0x9C68460)

inline static constexpr unsigned int Class_2_B6D97766BA82A9E5_TypeDefinitionIndex = 52935;

class Class_2_B6D97766BA82A9E5 : public ::Class_1_48F14F05C7810148
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D97766BA82A9E5__CTOR_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_2_C79B82BFBF60EB48(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_B6D97766BA82A9E5_METHOD_2_C79B82BFBF60EB48_OFFSET))(this, a1);
	}
};
