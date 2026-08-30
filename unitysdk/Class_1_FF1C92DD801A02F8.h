#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_2AE9FC3995804AA7;
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace System { class Exception; }

#define CLASS_1_FF1C92DD801A02F8_CLEAR_OFFSET UNITYSDK_OFFSET(0xFA61BF0)
#define CLASS_1_FF1C92DD801A02F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFA61C40)
#define CLASS_1_FF1C92DD801A02F8_METHOD_1_24161D3594279E95_OFFSET UNITYSDK_OFFSET(0xFA61CB0)
#define CLASS_1_FF1C92DD801A02F8_METHOD_1_6D58C177FA29984C_OFFSET UNITYSDK_OFFSET(0xFA61AA0)
#define CLASS_1_FF1C92DD801A02F8_METHOD_1_AAC50C44B9E263D9_OFFSET UNITYSDK_OFFSET(0xFA61EE0)
#define CLASS_1_FF1C92DD801A02F8_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0xFA61A40)
#define CLASS_1_FF1C92DD801A02F8_ONALLOC_OFFSET UNITYSDK_OFFSET(0xFA61B20)
#define CLASS_1_FF1C92DD801A02F8_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xFA61B70)
#define CLASS_1_FF1C92DD801A02F8__CTOR_OFFSET UNITYSDK_OFFSET(0xFA62020)

inline static constexpr unsigned int Class_1_FF1C92DD801A02F8_TypeDefinitionIndex = 67556;

class Class_1_FF1C92DD801A02F8 : public ::System::Object
{
public:
	::Class_1_2AE9FC3995804AA7* JDIFBABEMHJ; // 0x10
	::System::UInt32 ODCDFECAMAG; // 0x18
	::System::UInt32 JFFIFPGKDMD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF1C92DD801A02F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF1C92DD801A02F8_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D58C177FA29984C(::RPG::GameCore::RogueTournMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + CLASS_1_FF1C92DD801A02F8_METHOD_1_6D58C177FA29984C_OFFSET))(this, a1);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF1C92DD801A02F8_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF1C92DD801A02F8_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF1C92DD801A02F8_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF1C92DD801A02F8_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_24161D3594279E95(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Exception*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Exception*&))((::PBYTE)hIl2Cpp + CLASS_1_FF1C92DD801A02F8_METHOD_1_24161D3594279E95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AAC50C44B9E263D9(::RPG::Client::RogueTournBuildRefShareCodeDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_FF1C92DD801A02F8_METHOD_1_AAC50C44B9E263D9_OFFSET))(this, a1);
	}
};
