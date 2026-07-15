#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/Struct_2_D33F5B5815369903.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
class Class_0_16E4307DCC419505_496;
class Class_1_B8CEF7F69BEDEA3B;
class Class_1_E7BD46EB43F1A06F;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CA0BB69AF30EB725_METHOD_1_012F5209D5FA3F65_OFFSET UNITYSDK_OFFSET(0x15662960)
#define CLASS_1_CA0BB69AF30EB725_METHOD_1_091242F6ACD936E4_OFFSET UNITYSDK_OFFSET(0x15662DD0)
#define CLASS_1_CA0BB69AF30EB725_METHOD_1_0C1B4DDA0001225A_OFFSET UNITYSDK_OFFSET(0x156618A0)
#define CLASS_1_CA0BB69AF30EB725_METHOD_1_1A0D3B20C2CC55DC_OFFSET UNITYSDK_OFFSET(0x156626E0)
#define CLASS_1_CA0BB69AF30EB725_METHOD_1_41ACF4F4695791DB_1_OFFSET UNITYSDK_OFFSET(0x15662D10)
#define CLASS_1_CA0BB69AF30EB725_METHOD_1_41ACF4F4695791DB_OFFSET UNITYSDK_OFFSET(0x15662C50)
#define CLASS_1_CA0BB69AF30EB725_METHOD_1_6B5C45B91CB8890A_OFFSET UNITYSDK_OFFSET(0x156624B0)
#define CLASS_1_CA0BB69AF30EB725_METHOD_1_6E82CA604A793879_OFFSET UNITYSDK_OFFSET(0x156620E0)
#define CLASS_1_CA0BB69AF30EB725_METHOD_1_AE844F01C184719B_OFFSET UNITYSDK_OFFSET(0x15661950)
#define CLASS_1_CA0BB69AF30EB725_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x15661170)
#define CLASS_1_CA0BB69AF30EB725_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x15661410)
#define CLASS_1_CA0BB69AF30EB725__CCTOR_OFFSET UNITYSDK_OFFSET(0x15662F80)
#define CLASS_1_CA0BB69AF30EB725__CTOR_OFFSET UNITYSDK_OFFSET(0x15662E40)

inline static constexpr unsigned int Class_1_CA0BB69AF30EB725_TypeDefinitionIndex = 51645;

class Class_1_CA0BB69AF30EB725 : public ::System::Object
{
public:
	static ::RPG::GameCore::RtLifeBindingConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::RtLifeBindingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA0BB69AF30EB725_TypeDefinitionIndex)->GetStaticField(0x24E30);
	}
	static ::RPG::GameCore::RtLifeBindingConfig** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::RtLifeBindingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA0BB69AF30EB725_TypeDefinitionIndex)->GetStaticField(0x24E38);
	}
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_496*, ::Class_1_B8CEF7F69BEDEA3B*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_B8CEF7F69BEDEA3B*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::RPG::PoolList_1<::Class_1_B8CEF7F69BEDEA3B*>*>* Field_1_4; // 0x20
	::RPG::GameCore::GameWorld* Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725__CCTOR_OFFSET))();
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Boolean Method_1_0C1B4DDA0001225A(::RPG::GameCore::RtLifeBindingConfig* a1, ::RPG::GameCore::TaskContext* a2, ::Class_0_16E4307DCC419505_496* a3, ::Class_1_B8CEF7F69BEDEA3B*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtLifeBindingConfig*, ::RPG::GameCore::TaskContext*, ::Class_0_16E4307DCC419505_496*, ::Class_1_B8CEF7F69BEDEA3B*&))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_METHOD_1_0C1B4DDA0001225A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_6E82CA604A793879(::Struct_2_D33F5B5815369903 a1, ::Class_0_16E4307DCC419505_496* a2, ::Class_1_B8CEF7F69BEDEA3B*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D33F5B5815369903, ::Class_0_16E4307DCC419505_496*, ::Class_1_B8CEF7F69BEDEA3B*&))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_METHOD_1_6E82CA604A793879_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6B5C45B91CB8890A(::Class_0_16E4307DCC419505_496* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_496*))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_METHOD_1_6B5C45B91CB8890A_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A0D3B20C2CC55DC(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_METHOD_1_1A0D3B20C2CC55DC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AE844F01C184719B(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtLifeBindingConfig* a2, ::Struct_2_D33F5B5815369903& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtLifeBindingConfig*, ::Struct_2_D33F5B5815369903&))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_METHOD_1_AE844F01C184719B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_012F5209D5FA3F65(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_METHOD_1_012F5209D5FA3F65_OFFSET))(this, a1);
	}

	::System::Void Method_1_41ACF4F4695791DB(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_METHOD_1_41ACF4F4695791DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_41ACF4F4695791DB_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_METHOD_1_41ACF4F4695791DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_091242F6ACD936E4(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_CA0BB69AF30EB725_METHOD_1_091242F6ACD936E4_OFFSET))(this, a1, a2, a3);
	}
};
