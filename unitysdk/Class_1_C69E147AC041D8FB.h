#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define CLASS_1_C69E147AC041D8FB_EQUALS_OFFSET UNITYSDK_OFFSET(0x18F29DC0)
#define CLASS_1_C69E147AC041D8FB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18F29E90)
#define CLASS_1_C69E147AC041D8FB__CTOR_OFFSET UNITYSDK_OFFSET(0x18F29F20)

inline static constexpr unsigned int Class_1_C69E147AC041D8FB_TypeDefinitionIndex = 62228;

class Class_1_C69E147AC041D8FB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C69E147AC041D8FB__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::RPG::Client::GridFightRole* a1, ::RPG::Client::GridFightRole* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_C69E147AC041D8FB_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_C69E147AC041D8FB_GETHASHCODE_OFFSET))(this, a1);
	}
};
