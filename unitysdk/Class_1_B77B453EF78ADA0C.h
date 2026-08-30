#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B9E3601D1336B415;

#define CLASS_1_B77B453EF78ADA0C_GET_ADDCOIN_OFFSET UNITYSDK_OFFSET(0x165CC630)
#define CLASS_1_B77B453EF78ADA0C_GET_DAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x165CC670)
#define CLASS_1_B77B453EF78ADA0C_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x165CC610)
#define CLASS_1_B77B453EF78ADA0C_GET_SOLDIERDEADCNT_OFFSET UNITYSDK_OFFSET(0x165CC650)
#define CLASS_1_B77B453EF78ADA0C_SET_ADDCOIN_OFFSET UNITYSDK_OFFSET(0x165CC640)
#define CLASS_1_B77B453EF78ADA0C_SET_DAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x165CC680)
#define CLASS_1_B77B453EF78ADA0C_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x165CC620)
#define CLASS_1_B77B453EF78ADA0C_SET_SOLDIERDEADCNT_OFFSET UNITYSDK_OFFSET(0x165CC660)
#define CLASS_1_B77B453EF78ADA0C__CTOR_OFFSET UNITYSDK_OFFSET(0x165CC5F0)

inline static constexpr unsigned int Class_1_B77B453EF78ADA0C_TypeDefinitionIndex = 75834;

class Class_1_B77B453EF78ADA0C : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_B9E3601D1336B415*>* _DamageInfos_k__BackingField; // 0x10
	::System::Boolean _IsWin_k__BackingField; // 0x18
	::System::UInt32 _SoldierDeadCnt_k__BackingField; // 0x1C
	::System::UInt32 _AddCoin_k__BackingField; // 0x20

	::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2, ::Il2CppArray<::Class_1_B9E3601D1336B415*>* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::Il2CppArray<::Class_1_B9E3601D1336B415*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B77B453EF78ADA0C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_IsWin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B77B453EF78ADA0C_GET_ISWIN_OFFSET))(this);
	}

	::System::Void set_IsWin(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B77B453EF78ADA0C_SET_ISWIN_OFFSET))(this, a1);
	}

	::System::UInt32 get_AddCoin()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B77B453EF78ADA0C_GET_ADDCOIN_OFFSET))(this);
	}

	::System::Void set_AddCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B77B453EF78ADA0C_SET_ADDCOIN_OFFSET))(this, a1);
	}

	::System::UInt32 get_SoldierDeadCnt()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B77B453EF78ADA0C_GET_SOLDIERDEADCNT_OFFSET))(this);
	}

	::System::Void set_SoldierDeadCnt(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B77B453EF78ADA0C_SET_SOLDIERDEADCNT_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_B9E3601D1336B415*>* get_DamageInfos()
	{
		return ((::Il2CppArray<::Class_1_B9E3601D1336B415*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B77B453EF78ADA0C_GET_DAMAGEINFOS_OFFSET))(this);
	}

	::System::Void set_DamageInfos(::Il2CppArray<::Class_1_B9E3601D1336B415*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_B9E3601D1336B415*>*))((::PBYTE)hIl2Cpp + CLASS_1_B77B453EF78ADA0C_SET_DAMAGEINFOS_OFFSET))(this, a1);
	}
};
