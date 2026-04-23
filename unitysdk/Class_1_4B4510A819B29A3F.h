#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeCatchSlotStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchCatData; }

#define CLASS_1_4B4510A819B29A3F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A97EB0)
#define CLASS_1_4B4510A819B29A3F_GET_CAKEDATA_OFFSET UNITYSDK_OFFSET(0x12A97F20)
#define CLASS_1_4B4510A819B29A3F_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0x12A97EF0)
#define CLASS_1_4B4510A819B29A3F_METHOD_1_061D9AB395E197CE_OFFSET UNITYSDK_OFFSET(0x12A97F10)
#define CLASS_1_4B4510A819B29A3F_METHOD_1_3E4E9510B9875F1E_OFFSET UNITYSDK_OFFSET(0x12A97A60)
#define CLASS_1_4B4510A819B29A3F_METHOD_1_49C99FA08C8AC733_OFFSET UNITYSDK_OFFSET(0x12A97B90)
#define CLASS_1_4B4510A819B29A3F_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x12A97B30)
#define CLASS_1_4B4510A819B29A3F_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x12A97AA0)
#define CLASS_1_4B4510A819B29A3F_SET_CAKEDATA_OFFSET UNITYSDK_OFFSET(0x12A97F30)
#define CLASS_1_4B4510A819B29A3F_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0x12A97F00)
#define CLASS_1_4B4510A819B29A3F__CTOR_OFFSET UNITYSDK_OFFSET(0x12A97A50)

inline static constexpr unsigned int Class_1_4B4510A819B29A3F_TypeDefinitionIndex = 58022;

class Class_1_4B4510A819B29A3F : public ::System::Object
{
public:
	::RPG::Client::CakeCatchCatData* _CakeData_k__BackingField; // 0x10
	::System::UInt32 _CakeID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F__CTOR_OFFSET))(this);
	}

	static ::Class_1_4B4510A819B29A3F* Method_1_3E4E9510B9875F1E()
	{
		return ((::Class_1_4B4510A819B29A3F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F_METHOD_1_3E4E9510B9875F1E_OFFSET))();
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::RPG::Client::CakeCatchSlotStatus Method_1_49C99FA08C8AC733()
	{
		return ((::RPG::Client::CakeCatchSlotStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F_METHOD_1_49C99FA08C8AC733_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 get_CakeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F_GET_CAKEID_OFFSET))(this);
	}

	::System::Void set_CakeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F_SET_CAKEID_OFFSET))(this, value);
	}

	::RPG::Client::CakeCatchSlotStatus Method_1_061D9AB395E197CE()
	{
		return ((::RPG::Client::CakeCatchSlotStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F_METHOD_1_061D9AB395E197CE_OFFSET))(this);
	}

	::RPG::Client::CakeCatchCatData* get_CakeData()
	{
		return ((::RPG::Client::CakeCatchCatData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F_GET_CAKEDATA_OFFSET))(this);
	}

	::System::Void set_CakeData(::RPG::Client::CakeCatchCatData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + CLASS_1_4B4510A819B29A3F_SET_CAKEDATA_OFFSET))(this, value);
	}
};
