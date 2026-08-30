#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfCustomerState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DAC5574BFC0E853F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C519D70)

inline static constexpr unsigned int Class_1_DAC5574BFC0E853F_TypeDefinitionIndex = 40497;

class Class_1_DAC5574BFC0E853F : public ::System::Object
{
public:
	::System::UInt32 GKJBKEDFHIB; // 0x10
	::System::Single BPDHDJELOJA; // 0x14
	::System::UInt32 LLDCHLHNADA; // 0x18
	::System::UInt32 FDOELDMEBPE; // 0x1C
	::RPG::GameCore::ElfCustomerState BDJCJOHLJKJ; // 0x20
	::System::UInt32 DFEJABODPGM; // 0x24
	::System::Boolean BOPGCHFNIPK; // 0x28
	::System::Boolean CINOJLDOGOL; // 0x29
	::System::Int32 KIPNINGLDIJ; // 0x2C
	::System::UInt32 FGEADJLMEOI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAC5574BFC0E853F__CTOR_OFFSET))(this);
	}
};
