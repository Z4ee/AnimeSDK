#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_6BC34AADE687F0FD_CATCHITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF2390)

inline static constexpr unsigned int Class_2_6BC34AADE687F0FD_CatchItemData_TypeDefinitionIndex = 57590;

class Class_2_6BC34AADE687F0FD_CatchItemData : public ::System::Object
{
public:
	::System::UInt32 GroupID; // 0x10
	::System::UInt32 GroupEntityID; // 0x14
	::System::String* ItemPrefabPath; // 0x18
	::System::Single WaitSeconds; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BC34AADE687F0FD_CATCHITEMDATA__CTOR_OFFSET))(this);
	}
};
