#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeCatchSlotStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchCatData; }

#define CLASS_1_0DD90E5A9403AEBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A28DF0)
#define CLASS_1_0DD90E5A9403AEBE_GET_CAKEDATA_OFFSET UNITYSDK_OFFSET(0x13A28E60)
#define CLASS_1_0DD90E5A9403AEBE_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0x13A28E30)
#define CLASS_1_0DD90E5A9403AEBE_METHOD_1_061D9AB395E197CE_OFFSET UNITYSDK_OFFSET(0x13A28E50)
#define CLASS_1_0DD90E5A9403AEBE_METHOD_1_49C99FA08C8AC733_OFFSET UNITYSDK_OFFSET(0x13A28AD0)
#define CLASS_1_0DD90E5A9403AEBE_METHOD_1_5C124A71F2A2E459_OFFSET UNITYSDK_OFFSET(0x13A289A0)
#define CLASS_1_0DD90E5A9403AEBE_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x13A28A70)
#define CLASS_1_0DD90E5A9403AEBE_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13A289E0)
#define CLASS_1_0DD90E5A9403AEBE_SET_CAKEDATA_OFFSET UNITYSDK_OFFSET(0x13A28E70)
#define CLASS_1_0DD90E5A9403AEBE_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0x13A28E40)
#define CLASS_1_0DD90E5A9403AEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A28990)

inline static constexpr unsigned int Class_1_0DD90E5A9403AEBE_TypeDefinitionIndex = 58938;

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

	::RPG::Client::CakeCatchSlotStatus Method_1_49C99FA08C8AC733()
	{
		return ((::RPG::Client::CakeCatchSlotStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_METHOD_1_49C99FA08C8AC733_OFFSET))(this);
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

	::RPG::Client::CakeCatchSlotStatus Method_1_061D9AB395E197CE()
	{
		return ((::RPG::Client::CakeCatchSlotStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DD90E5A9403AEBE_METHOD_1_061D9AB395E197CE_OFFSET))(this);
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
