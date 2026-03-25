#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_48F14F05C7810148_METHOD_1_69664FFD926CBE59_OFFSET UNITYSDK_OFFSET(0x1096F190)
#define CLASS_1_48F14F05C7810148_METHOD_1_752AB718DB9788BA_OFFSET UNITYSDK_OFFSET(0x1096EF80)
#define CLASS_1_48F14F05C7810148_METHOD_1_D41B893CAD3EB2B0_OFFSET UNITYSDK_OFFSET(0x1096F570)
#define CLASS_1_48F14F05C7810148__CTOR_OFFSET UNITYSDK_OFFSET(0x1096F640)

inline static constexpr unsigned int Class_1_48F14F05C7810148_TypeDefinitionIndex = 52934;

class Class_1_48F14F05C7810148 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48F14F05C7810148__CTOR_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_752AB718DB9788BA(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_48F14F05C7810148_METHOD_1_752AB718DB9788BA_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_69664FFD926CBE59(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_48F14F05C7810148_METHOD_1_69664FFD926CBE59_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_D41B893CAD3EB2B0(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_48F14F05C7810148_METHOD_1_D41B893CAD3EB2B0_OFFSET))(this, a1);
	}
};
