#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B17C3A61CEC44E6.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_2_28E7F9C7DD39523E_METHOD_2_7F2A39D06BAA5E49_OFFSET UNITYSDK_OFFSET(0x91ECCF0)
#define CLASS_2_28E7F9C7DD39523E__CTOR_OFFSET UNITYSDK_OFFSET(0x91ECD40)

inline static constexpr unsigned int Class_2_28E7F9C7DD39523E_TypeDefinitionIndex = 60018;

class Class_2_28E7F9C7DD39523E : public ::Class_1_7B17C3A61CEC44E6
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28E7F9C7DD39523E__CTOR_OFFSET))(this);
	}

	::RPG::Client::IAvatarInfoProvider* Method_2_7F2A39D06BAA5E49(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_28E7F9C7DD39523E_METHOD_2_7F2A39D06BAA5E49_OFFSET))(this, a1);
	}
};
