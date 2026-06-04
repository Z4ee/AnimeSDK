#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define CLASS_1_1541BCF0CD7008D9_EQUALS_OFFSET UNITYSDK_OFFSET(0xA60BA70)
#define CLASS_1_1541BCF0CD7008D9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA60BAF0)
#define CLASS_1_1541BCF0CD7008D9__CTOR_OFFSET UNITYSDK_OFFSET(0xA60BB50)

inline static constexpr unsigned int Class_1_1541BCF0CD7008D9_TypeDefinitionIndex = 60915;

class Class_1_1541BCF0CD7008D9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1541BCF0CD7008D9__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::RPG::Client::GridFightRole* a1, ::RPG::Client::GridFightRole* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_1541BCF0CD7008D9_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_1541BCF0CD7008D9_GETHASHCODE_OFFSET))(this, a1);
	}
};
