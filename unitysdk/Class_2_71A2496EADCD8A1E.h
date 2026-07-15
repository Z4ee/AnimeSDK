#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

#define CLASS_2_71A2496EADCD8A1E_INIT_OFFSET UNITYSDK_OFFSET(0x15F36BA0)
#define CLASS_2_71A2496EADCD8A1E__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x15F36C30)
#define CLASS_2_71A2496EADCD8A1E__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x15F36BF0)
#define CLASS_2_71A2496EADCD8A1E__CTOR_OFFSET UNITYSDK_OFFSET(0x15F36C70)

inline static constexpr unsigned int Class_2_71A2496EADCD8A1E_TypeDefinitionIndex = 59256;

class Class_2_71A2496EADCD8A1E : public ::RPG::Client::BaseModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A2496EADCD8A1E__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A2496EADCD8A1E_INIT_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A2496EADCD8A1E__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71A2496EADCD8A1E__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};
