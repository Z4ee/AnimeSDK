#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_2_973B114F250678D9_Class_1_0AB3957A5CD667A3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_973B114F250678D9_CLASS_1_D0E38BACF7313C48__CTOR_OFFSET UNITYSDK_OFFSET(0xC268C00)

inline static constexpr unsigned int Class_2_973B114F250678D9_Class_1_D0E38BACF7313C48_TypeDefinitionIndex = 55961;

class Class_2_973B114F250678D9_Class_1_D0E38BACF7313C48 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_973B114F250678D9_Class_1_0AB3957A5CD667A3*>* LGEMLFLOBKL; // 0x10
	::System::UInt32 DOBKKDIECDO; // 0x18
	::System::UInt32 HFLPDCJDIAC; // 0x1C
	::RPG::GameCore::FixPoint LIDEOEDABPL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_973B114F250678D9_CLASS_1_D0E38BACF7313C48__CTOR_OFFSET))(this);
	}
};
