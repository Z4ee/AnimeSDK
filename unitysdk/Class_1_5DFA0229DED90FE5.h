#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5DFA0229DED90FE5__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A78E0)

inline static constexpr unsigned int Class_1_5DFA0229DED90FE5_TypeDefinitionIndex = 53128;

class Class_1_5DFA0229DED90FE5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_8; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x18
	::RPG::GameCore::FixPoint Field_1_4; // 0x20
	::RPG::GameCore::FixPoint Field_1_2; // 0x28
	::System::UInt32 Field_1_0; // 0x30
	::System::UInt32 Field_1_9; // 0x34
	::System::UInt32 Field_1_6; // 0x38
	::RPG::GameCore::FixPoint Field_1_5; // 0x40
	::System::UInt32 Field_1_7; // 0x48
	::System::UInt32 Field_1_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DFA0229DED90FE5__CTOR_OFFSET))(this);
	}
};
