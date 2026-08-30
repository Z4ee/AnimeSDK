#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_1_6B9FBCAC09C5F877;
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_1_E754E66360B8422F__CTOR_OFFSET UNITYSDK_OFFSET(0xD230050)

inline static constexpr unsigned int Class_1_E754E66360B8422F_TypeDefinitionIndex = 54496;

class Class_1_E754E66360B8422F : public ::System::Object
{
public:
	::Class_1_6B9FBCAC09C5F877* PDLPIGDDEFL; // 0x10
	::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* KBIBCKNINNH; // 0x18
	::System::UInt32 JIDLKIHJLFL; // 0x20
	::System::UInt32 AAGKEBFHLMC; // 0x24
	::System::UInt32 GBJLLAJJEOL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E754E66360B8422F__CTOR_OFFSET))(this);
	}
};
