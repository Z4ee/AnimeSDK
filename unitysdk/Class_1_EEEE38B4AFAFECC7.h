#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapMappingInfoData; }

#define CLASS_1_EEEE38B4AFAFECC7_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x158E4620)
#define CLASS_1_EEEE38B4AFAFECC7_METHOD_1_67BE74AF111386EC_OFFSET UNITYSDK_OFFSET(0x158E4750)
#define CLASS_1_EEEE38B4AFAFECC7_METHOD_1_6A1BAC2F5CFAD1D5_OFFSET UNITYSDK_OFFSET(0x158E4800)
#define CLASS_1_EEEE38B4AFAFECC7_METHOD_1_D9767523F83272CD_OFFSET UNITYSDK_OFFSET(0x158E4640)
#define CLASS_1_EEEE38B4AFAFECC7_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x158E4630)
#define CLASS_1_EEEE38B4AFAFECC7__CTOR_OFFSET UNITYSDK_OFFSET(0x158E47F0)

inline static constexpr unsigned int Class_1_EEEE38B4AFAFECC7_TypeDefinitionIndex = 63002;

class Class_1_EEEE38B4AFAFECC7 : public ::System::Object
{
public:
	::RPG::Client::MapMappingInfoData* KHDMDJELPPL; // 0x10
	::System::UInt32 _IconType_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEE38B4AFAFECC7__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_IconType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEE38B4AFAFECC7_GET_ICONTYPE_OFFSET))(this);
	}

	::System::Void set_IconType(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EEEE38B4AFAFECC7_SET_ICONTYPE_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9767523F83272CD(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_EEEE38B4AFAFECC7_METHOD_1_D9767523F83272CD_OFFSET))(this, a1);
	}

	static ::Class_1_EEEE38B4AFAFECC7* Method_1_67BE74AF111386EC(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::Class_1_EEEE38B4AFAFECC7*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_EEEE38B4AFAFECC7_METHOD_1_67BE74AF111386EC_OFFSET))(a1);
	}

	::System::Int32 Method_1_6A1BAC2F5CFAD1D5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEEE38B4AFAFECC7_METHOD_1_6A1BAC2F5CFAD1D5_OFFSET))(this);
	}
};
