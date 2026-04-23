#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B17C3A61CEC44E6.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_2_7AB80EA33D3E8C38_METHOD_2_0F23E0F757B675A9_OFFSET UNITYSDK_OFFSET(0x90F99C0)
#define CLASS_2_7AB80EA33D3E8C38__CTOR_OFFSET UNITYSDK_OFFSET(0x90F9A10)

inline static constexpr unsigned int Class_2_7AB80EA33D3E8C38_TypeDefinitionIndex = 60017;

class Class_2_7AB80EA33D3E8C38 : public ::Class_1_7B17C3A61CEC44E6
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AB80EA33D3E8C38__CTOR_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_2_0F23E0F757B675A9(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_7AB80EA33D3E8C38_METHOD_2_0F23E0F757B675A9_OFFSET))(this, a1);
	}
};
