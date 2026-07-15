#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionBeginType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB3F15F93FE67DCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1708F0F0)
#define CLASS_1_BB3F15F93FE67DCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1708F1A0)

inline static constexpr unsigned int Class_1_BB3F15F93FE67DCD_TypeDefinitionIndex = 49639;

class Class_1_BB3F15F93FE67DCD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::RPG::GameCore::MissionBeginType Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB3F15F93FE67DCD__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB3F15F93FE67DCD_TOSTRING_OFFSET))(this);
	}
};
