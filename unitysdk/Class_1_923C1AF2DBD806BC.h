#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_923C1AF2DBD806BC__CTOR_OFFSET UNITYSDK_OFFSET(0x189FC2D0)

inline static constexpr unsigned int Class_1_923C1AF2DBD806BC_TypeDefinitionIndex = 57743;

class Class_1_923C1AF2DBD806BC : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint EIAADFEOONK; // 0x10
	::System::UInt32 LDIKOLCAJLH; // 0x18
	::System::UInt32 PKEKFAHEPAL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_923C1AF2DBD806BC__CTOR_OFFSET))(this);
	}
};
