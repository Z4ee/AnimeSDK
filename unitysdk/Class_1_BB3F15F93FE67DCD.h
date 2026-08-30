#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionBeginType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB3F15F93FE67DCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC14DBA0)
#define CLASS_1_BB3F15F93FE67DCD__CTOR_OFFSET UNITYSDK_OFFSET(0xC14DC50)

inline static constexpr unsigned int Class_1_BB3F15F93FE67DCD_TypeDefinitionIndex = 52297;

class Class_1_BB3F15F93FE67DCD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* IIFKLLFEIDE; // 0x10
	::System::UInt32 PHFMCACHFIJ; // 0x18
	::System::Boolean DNOONKNLGBD; // 0x1C
	::RPG::GameCore::MissionBeginType DJMOAEIBFDK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB3F15F93FE67DCD__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB3F15F93FE67DCD_TOSTRING_OFFSET))(this);
	}
};
