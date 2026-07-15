#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeCatchSlotStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchCatData; }

#define CLASS_1_0DD90E5A9403AEBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16510060)
#define CLASS_1_0DD90E5A9403AEBE_GET_CAKEDATA_OFFSET UNITYSDK_OFFSET(0x16510110)
#define CLASS_1_0DD90E5A9403AEBE_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0x165100A0)
#define CLASS_1_0DD90E5A9403AEBE_METHOD_1_5C124A71F2A2E459_OFFSET UNITYSDK_OFFSET(0x1650FC00)
#define CLASS_1_0DD90E5A9403AEBE_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1650FCD0)
#define CLASS_1_0DD90E5A9403AEBE_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1650FC40)
#define CLASS_1_0DD90E5A9403AEBE_METHOD_1_CEA9DE177B16FBFB_OFFSET UNITYSDK_OFFSET(0x165100C0)
#define CLASS_1_0DD90E5A9403AEBE_METHOD_1_D7589331915522E6_OFFSET UNITYSDK_OFFSET(0x1650FD30)
#define CLASS_1_0DD90E5A9403AEBE_SET_CAKEDATA_OFFSET UNITYSDK_OFFSET(0x16510120)
#define CLASS_1_0DD90E5A9403AEBE_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0x165100B0)
#define CLASS_1_0DD90E5A9403AEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1650FBF0)

inline static constexpr unsigned int Class_1_0DD90E5A9403AEBE_TypeDefinitionIndex = 60209;

class Class_1_0DD90E5A9403AEBE : public ::System::Object
{
public:
	::RPG::Client::CakeCatchCatData* _CakeData_k__BackingField; // 0x10
	::System::UInt32 _CakeID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE__CTOR_OFFSET))(this);
	}

	static ::Class_1_0DD90E5A9403AEBE* Method_1_5C124A71F2A2E459()
	{
		return ((::Class_1_0DD90E5A9403AEBE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_METHOD_1_5C124A71F2A2E459_OFFSET))();
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::RPG::Client::CakeCatchSlotStatus Method_1_D7589331915522E6()
	{
		return ((::RPG::Client::CakeCatchSlotStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_METHOD_1_D7589331915522E6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 get_CakeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_GET_CAKEID_OFFSET))(this);
	}

	::System::Void set_CakeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_SET_CAKEID_OFFSET))(this, a1);
	}

	::RPG::Client::CakeCatchSlotStatus Method_1_CEA9DE177B16FBFB()
	{
		return ((::RPG::Client::CakeCatchSlotStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_METHOD_1_CEA9DE177B16FBFB_OFFSET))(this);
	}

	::RPG::Client::CakeCatchCatData* get_CakeData()
	{
		return ((::RPG::Client::CakeCatchCatData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_GET_CAKEDATA_OFFSET))(this);
	}

	::System::Void set_CakeData(::RPG::Client::CakeCatchCatData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_SET_CAKEDATA_OFFSET))(this, a1);
	}
};
