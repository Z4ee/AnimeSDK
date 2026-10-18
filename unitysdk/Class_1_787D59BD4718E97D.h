#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleTeamSelection; }
namespace RPG::Client::PetMarble { class IPetMarbleData; }

#define CLASS_1_787D59BD4718E97D_COMPARE_OFFSET UNITYSDK_OFFSET(0xF88AEE0)
#define CLASS_1_787D59BD4718E97D__CTOR_OFFSET UNITYSDK_OFFSET(0xF88AED0)

inline static constexpr unsigned int Class_1_787D59BD4718E97D_TypeDefinitionIndex = 74692;

class Class_1_787D59BD4718E97D : public ::System::Object
{
public:
	::RPG::Client::ActivityMarble::MarbleTeamSelection* CLFIOJEHCHG; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityMarble::MarbleTeamSelection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleTeamSelection*))((::PBYTE)hIl2Cpp + CLASS_1_787D59BD4718E97D__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::Client::PetMarble::IPetMarbleData* a1, ::RPG::Client::PetMarble::IPetMarbleData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::PetMarble::IPetMarbleData*, ::RPG::Client::PetMarble::IPetMarbleData*))((::PBYTE)hIl2Cpp + CLASS_1_787D59BD4718E97D_COMPARE_OFFSET))(this, a1, a2);
	}
};
