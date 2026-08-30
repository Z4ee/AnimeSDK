#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0F82B10534F7616F_CLASS_1_D0E38BACF7313C48__CTOR_OFFSET UNITYSDK_OFFSET(0x198FAA40)

inline static constexpr unsigned int Class_2_0F82B10534F7616F_Class_1_D0E38BACF7313C48_TypeDefinitionIndex = 56149;

class Class_2_0F82B10534F7616F_Class_1_D0E38BACF7313C48 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3*>* LGEMLFLOBKL; // 0x10
	::RPG::GameCore::FixPoint LIDEOEDABPL; // 0x18
	::System::UInt32 DOBKKDIECDO; // 0x20
	::System::UInt32 HFLPDCJDIAC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_CLASS_1_D0E38BACF7313C48__CTOR_OFFSET))(this);
	}
};
