#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_1_F9AE7AA9DD8A83B5;
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_1_E754E66360B8422F__CTOR_OFFSET UNITYSDK_OFFSET(0xA05D3C0)

inline static constexpr unsigned int Class_1_E754E66360B8422F_TypeDefinitionIndex = 50063;

class Class_1_E754E66360B8422F : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* Field_1_3; // 0x10
	::Class_1_F9AE7AA9DD8A83B5* Field_1_4; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::System::UInt32 Field_1_1; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E754E66360B8422F__CTOR_OFFSET))(this);
	}
};
