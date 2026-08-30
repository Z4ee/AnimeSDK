#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5DFA0229DED90FE5__CTOR_OFFSET UNITYSDK_OFFSET(0x15B67360)

inline static constexpr unsigned int Class_1_5DFA0229DED90FE5_TypeDefinitionIndex = 57783;

class Class_1_5DFA0229DED90FE5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* FFGNGFBJAAP; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* AFDIIDKAKEE; // 0x18
	::System::UInt32 DLOOMDHHNGC; // 0x20
	::System::UInt32 OHIDKMKBIGJ; // 0x24
	::RPG::GameCore::FixPoint IMKHIDEBGEB; // 0x28
	::System::UInt32 HADOLAHMBJE; // 0x30
	::RPG::GameCore::FixPoint OHBHPFKAFME; // 0x38
	::System::UInt32 BKKDEEMMBJI; // 0x40
	::System::UInt32 ACCJKGEKHKP; // 0x44
	::RPG::GameCore::FixPoint EOMBCKAJDAK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DFA0229DED90FE5__CTOR_OFFSET))(this);
	}
};
