#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicScreenInfo; }

#define CLASS_1_3B1E672EB76288CF_COMPARE_OFFSET UNITYSDK_OFFSET(0x12A7F8B0)
#define CLASS_1_3B1E672EB76288CF__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7F930)

inline static constexpr unsigned int Class_1_3B1E672EB76288CF_TypeDefinitionIndex = 62431;

class Class_1_3B1E672EB76288CF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1E672EB76288CF__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::MoleMole::ComicScreenInfo* a1, ::MoleMole::ComicScreenInfo* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ComicScreenInfo*, ::MoleMole::ComicScreenInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3B1E672EB76288CF_COMPARE_OFFSET))(this, a1, a2);
	}
};
