#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class IMarbleData; }
namespace RPG::Client::PetMarble { class PetMarbleData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_17783041F7D36C5C_GETMARBLEBYIDINTERFACE_OFFSET UNITYSDK_OFFSET(0xB156120)
#define CLASS_1_17783041F7D36C5C__CTOR_OFFSET UNITYSDK_OFFSET(0xB156090)

inline static constexpr unsigned int Class_1_17783041F7D36C5C_TypeDefinitionIndex = 74735;

class Class_1_17783041F7D36C5C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PetMarble::PetMarbleData*>* JGJOJAAMEAJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17783041F7D36C5C__CTOR_OFFSET))(this);
	}

	::RPG::Client::ActivityMarble::IMarbleData* GetMarbleByIDInterface(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityMarble::IMarbleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17783041F7D36C5C_GETMARBLEBYIDINTERFACE_OFFSET))(this, a1);
	}
};
