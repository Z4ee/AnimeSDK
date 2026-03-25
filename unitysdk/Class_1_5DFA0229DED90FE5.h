#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5DFA0229DED90FE5__CTOR_OFFSET UNITYSDK_OFFSET(0xAC46C90)

inline static constexpr unsigned int Class_1_5DFA0229DED90FE5_TypeDefinitionIndex = 46440;

class Class_1_5DFA0229DED90FE5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_8; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_6; // 0x24
	::System::UInt32 Field_1_0; // 0x28
	::RPG::GameCore::FixPoint Field_1_2; // 0x30
	::System::UInt32 Field_1_7; // 0x38
	::System::UInt32 Field_1_1; // 0x3C
	::RPG::GameCore::FixPoint Field_1_4; // 0x40
	::RPG::GameCore::FixPoint Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DFA0229DED90FE5__CTOR_OFFSET))(this);
	}
};
