#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F14F05C7810148.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_2_B8AF07180A80483D_METHOD_2_822ADDF800253AEA_OFFSET UNITYSDK_OFFSET(0xA9EB640)
#define CLASS_2_B8AF07180A80483D__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EB690)

inline static constexpr unsigned int Class_2_B8AF07180A80483D_TypeDefinitionIndex = 52937;

class Class_2_B8AF07180A80483D : public ::Class_1_48F14F05C7810148
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8AF07180A80483D__CTOR_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_2_822ADDF800253AEA(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_B8AF07180A80483D_METHOD_2_822ADDF800253AEA_OFFSET))(this, a1);
	}
};
