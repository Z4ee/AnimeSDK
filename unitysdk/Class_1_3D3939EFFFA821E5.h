#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3D3939EFFFA821E5_GET_FROM_OFFSET UNITYSDK_OFFSET(0x19244EF0)
#define CLASS_1_3D3939EFFFA821E5_GET_PACKETLOSSRATE_OFFSET UNITYSDK_OFFSET(0x19244F50)
#define CLASS_1_3D3939EFFFA821E5_GET_RTT_OFFSET UNITYSDK_OFFSET(0x19244F30)
#define CLASS_1_3D3939EFFFA821E5_GET_TO_OFFSET UNITYSDK_OFFSET(0x19244F10)
#define CLASS_1_3D3939EFFFA821E5_SET_FROM_OFFSET UNITYSDK_OFFSET(0x19244F00)
#define CLASS_1_3D3939EFFFA821E5_SET_PACKETLOSSRATE_OFFSET UNITYSDK_OFFSET(0x19244F60)
#define CLASS_1_3D3939EFFFA821E5_SET_RTT_OFFSET UNITYSDK_OFFSET(0x19244F40)
#define CLASS_1_3D3939EFFFA821E5_SET_TO_OFFSET UNITYSDK_OFFSET(0x19244F20)
#define CLASS_1_3D3939EFFFA821E5__CTOR_OFFSET UNITYSDK_OFFSET(0x192375D0)

inline static constexpr unsigned int Class_1_3D3939EFFFA821E5_TypeDefinitionIndex = 39635;

class Class_1_3D3939EFFFA821E5 : public ::System::Object
{
public:
	::System::Single _RTT_k__BackingField; // 0x10
	::RPG::Client::IPVersion _From_k__BackingField; // 0x14
	::RPG::Client::IPVersion _To_k__BackingField; // 0x18
	::System::Single _PacketLossRate_k__BackingField; // 0x1C

	::System::Void _ctor(::RPG::Client::IPVersion a1, ::RPG::Client::IPVersion a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion, ::RPG::Client::IPVersion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D3939EFFFA821E5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::IPVersion get_From()
	{
		return ((::RPG::Client::IPVersion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D3939EFFFA821E5_GET_FROM_OFFSET))(this);
	}

	::System::Void set_From(::RPG::Client::IPVersion value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + CLASS_1_3D3939EFFFA821E5_SET_FROM_OFFSET))(this, value);
	}

	::RPG::Client::IPVersion get_To()
	{
		return ((::RPG::Client::IPVersion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D3939EFFFA821E5_GET_TO_OFFSET))(this);
	}

	::System::Void set_To(::RPG::Client::IPVersion value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + CLASS_1_3D3939EFFFA821E5_SET_TO_OFFSET))(this, value);
	}

	::System::Single get_RTT()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D3939EFFFA821E5_GET_RTT_OFFSET))(this);
	}

	::System::Void set_RTT(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D3939EFFFA821E5_SET_RTT_OFFSET))(this, value);
	}

	::System::Single get_PacketLossRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D3939EFFFA821E5_GET_PACKETLOSSRATE_OFFSET))(this);
	}

	::System::Void set_PacketLossRate(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D3939EFFFA821E5_SET_PACKETLOSSRATE_OFFSET))(this, value);
	}
};
