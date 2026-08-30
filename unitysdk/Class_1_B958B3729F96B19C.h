#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_B958B3729F96B19C_GET_AVATARPATH_OFFSET UNITYSDK_OFFSET(0x1787E6C0)
#define CLASS_1_B958B3729F96B19C_GET_HP_OFFSET UNITYSDK_OFFSET(0x1787E6A0)
#define CLASS_1_B958B3729F96B19C_GET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0x1787E6D0)
#define CLASS_1_B958B3729F96B19C_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1787E690)
#define CLASS_1_B958B3729F96B19C_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x1787E6B0)
#define CLASS_1_B958B3729F96B19C_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1787E680)
#define CLASS_1_B958B3729F96B19C_METHOD_1_50D5408532CEA464_OFFSET UNITYSDK_OFFSET(0x1787E6E0)
#define CLASS_1_B958B3729F96B19C_METHOD_1_83C512DA6EBFB148_OFFSET UNITYSDK_OFFSET(0x1787EB40)
#define CLASS_1_B958B3729F96B19C_METHOD_1_B73A002CE0E60E94_OFFSET UNITYSDK_OFFSET(0x1787E870)
#define CLASS_1_B958B3729F96B19C_METHOD_1_F213163B5813F4D5_OFFSET UNITYSDK_OFFSET(0x1787E9D0)
#define CLASS_1_B958B3729F96B19C__CTOR_OFFSET UNITYSDK_OFFSET(0x1787ED70)

inline static constexpr unsigned int Class_1_B958B3729F96B19C_TypeDefinitionIndex = 50357;

class Class_1_B958B3729F96B19C : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::String*>* _Name_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::Int32>* _Hp_k__BackingField; // 0x18
	::R3::ReactiveProperty_1<::System::String*>* _AvatarPath_k__BackingField; // 0x20
	::R3::ReactiveProperty_1<::System::Boolean>* _IsInBattle_k__BackingField; // 0x28
	::R3::ReactiveProperty_1<::System::Int32>* _MaxHp_k__BackingField; // 0x30
	::R3::ReactiveProperty_1<::System::Int32>* _Level_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_Name()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C_GET_NAME_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_Level()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C_GET_LEVEL_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_Hp()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C_GET_HP_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_MaxHp()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C_GET_MAXHP_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_AvatarPath()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C_GET_AVATARPATH_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsInBattle()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C_GET_ISINBATTLE_OFFSET))(this);
	}

	::R3::Observable_1<::System::Single>* Method_1_50D5408532CEA464()
	{
		return ((::R3::Observable_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C_METHOD_1_50D5408532CEA464_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_B73A002CE0E60E94()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C_METHOD_1_B73A002CE0E60E94_OFFSET))(this);
	}

	::System::Void Method_1_F213163B5813F4D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C_METHOD_1_F213163B5813F4D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_83C512DA6EBFB148(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B958B3729F96B19C_METHOD_1_83C512DA6EBFB148_OFFSET))(this, a1);
	}
};
