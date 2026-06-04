#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9E825E3D3A62B6E0_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x136CFB30)
#define CLASS_1_9E825E3D3A62B6E0_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x136CFB50)
#define CLASS_1_9E825E3D3A62B6E0_GET_POS_OFFSET UNITYSDK_OFFSET(0x136CFB10)
#define CLASS_1_9E825E3D3A62B6E0_GET_UID_OFFSET UNITYSDK_OFFSET(0x136CFAF0)
#define CLASS_1_9E825E3D3A62B6E0_METHOD_1_842446766C7EDE9B_OFFSET UNITYSDK_OFFSET(0x136CFA00)
#define CLASS_1_9E825E3D3A62B6E0_METHOD_1_950FFDA49AA7A714_OFFSET UNITYSDK_OFFSET(0x136CF910)
#define CLASS_1_9E825E3D3A62B6E0_METHOD_1_BC10E4695016E354_OFFSET UNITYSDK_OFFSET(0x136CFA60)
#define CLASS_1_9E825E3D3A62B6E0_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x136CFB40)
#define CLASS_1_9E825E3D3A62B6E0_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x136CFB60)
#define CLASS_1_9E825E3D3A62B6E0_SET_POS_OFFSET UNITYSDK_OFFSET(0x136CFB20)
#define CLASS_1_9E825E3D3A62B6E0_SET_UID_OFFSET UNITYSDK_OFFSET(0x136CFB00)
#define CLASS_1_9E825E3D3A62B6E0__CTOR_OFFSET UNITYSDK_OFFSET(0x136CF9F0)

inline static constexpr unsigned int Class_1_9E825E3D3A62B6E0_TypeDefinitionIndex = 73538;

class Class_1_9E825E3D3A62B6E0 : public ::System::Object
{
public:
	::System::UInt32 _Level_k__BackingField; // 0x10
	::System::UInt32 _EquipID_k__BackingField; // 0x14
	::System::UInt32 _UID_k__BackingField; // 0x18
	::System::UInt32 _Pos_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0__CTOR_OFFSET))(this);
	}

	static ::Class_1_9E825E3D3A62B6E0* Method_1_950FFDA49AA7A714(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::Class_1_9E825E3D3A62B6E0*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_METHOD_1_950FFDA49AA7A714_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_9E825E3D3A62B6E0* Method_1_BC10E4695016E354(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_9E825E3D3A62B6E0*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_METHOD_1_BC10E4695016E354_OFFSET))(a1, a2);
	}

	::System::Void Method_1_842446766C7EDE9B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_METHOD_1_842446766C7EDE9B_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_UID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_GET_UID_OFFSET))(this);
	}

	::System::Void set_UID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_SET_UID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Pos()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_GET_POS_OFFSET))(this);
	}

	::System::Void set_Pos(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_SET_POS_OFFSET))(this, a1);
	}

	::System::UInt32 get_EquipID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_GET_EQUIPID_OFFSET))(this);
	}

	::System::Void set_EquipID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_SET_EQUIPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E825E3D3A62B6E0_SET_LEVEL_OFFSET))(this, a1);
	}
};
