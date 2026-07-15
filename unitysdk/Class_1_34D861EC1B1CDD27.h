#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_34D861EC1B1CDD27__CTOR_OFFSET UNITYSDK_OFFSET(0x1606FF50)

inline static constexpr unsigned int Class_1_34D861EC1B1CDD27_TypeDefinitionIndex = 64778;

class Class_1_34D861EC1B1CDD27 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* FavoriteBuildRefIDs; // 0x10
	::System::UInt32 Version; // 0x18
	::System::UInt32 MaxFavoriteCount; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34D861EC1B1CDD27__CTOR_OFFSET))(this);
	}
};
