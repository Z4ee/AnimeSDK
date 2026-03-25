#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6EBEA8069CDA622C_6;

#define CLASS_1_762C8F7CCCF88C1D_GET_ADDCOIN_OFFSET UNITYSDK_OFFSET(0x1049DE60)
#define CLASS_1_762C8F7CCCF88C1D_GET_DAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x1049DEA0)
#define CLASS_1_762C8F7CCCF88C1D_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1049DE40)
#define CLASS_1_762C8F7CCCF88C1D_GET_SOLDIERDEADCNT_OFFSET UNITYSDK_OFFSET(0x1049DE80)
#define CLASS_1_762C8F7CCCF88C1D_SET_ADDCOIN_OFFSET UNITYSDK_OFFSET(0x1049DE70)
#define CLASS_1_762C8F7CCCF88C1D_SET_DAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x1049DEB0)
#define CLASS_1_762C8F7CCCF88C1D_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1049DE50)
#define CLASS_1_762C8F7CCCF88C1D_SET_SOLDIERDEADCNT_OFFSET UNITYSDK_OFFSET(0x1049DE90)
#define CLASS_1_762C8F7CCCF88C1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1049DE20)

inline static constexpr unsigned int Class_1_762C8F7CCCF88C1D_TypeDefinitionIndex = 62074;

class Class_1_762C8F7CCCF88C1D : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_6EBEA8069CDA622C_6*>* _DamageInfos_k__BackingField; // 0x10
	::System::UInt32 _AddCoin_k__BackingField; // 0x18
	::System::Boolean _IsWin_k__BackingField; // 0x1C
	::System::UInt32 _SoldierDeadCnt_k__BackingField; // 0x20

	::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2, ::Il2CppArray<::Class_1_6EBEA8069CDA622C_6*>* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::Il2CppArray<::Class_1_6EBEA8069CDA622C_6*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_762C8F7CCCF88C1D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_IsWin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_762C8F7CCCF88C1D_GET_ISWIN_OFFSET))(this);
	}

	::System::Void set_IsWin(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_762C8F7CCCF88C1D_SET_ISWIN_OFFSET))(this, value);
	}

	::System::UInt32 get_AddCoin()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_762C8F7CCCF88C1D_GET_ADDCOIN_OFFSET))(this);
	}

	::System::Void set_AddCoin(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_762C8F7CCCF88C1D_SET_ADDCOIN_OFFSET))(this, value);
	}

	::System::UInt32 get_SoldierDeadCnt()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_762C8F7CCCF88C1D_GET_SOLDIERDEADCNT_OFFSET))(this);
	}

	::System::Void set_SoldierDeadCnt(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_762C8F7CCCF88C1D_SET_SOLDIERDEADCNT_OFFSET))(this, value);
	}

	::Il2CppArray<::Class_1_6EBEA8069CDA622C_6*>* get_DamageInfos()
	{
		return ((::Il2CppArray<::Class_1_6EBEA8069CDA622C_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_762C8F7CCCF88C1D_GET_DAMAGEINFOS_OFFSET))(this);
	}

	::System::Void set_DamageInfos(::Il2CppArray<::Class_1_6EBEA8069CDA622C_6*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_6EBEA8069CDA622C_6*>*))((::PBYTE)hIl2Cpp + CLASS_1_762C8F7CCCF88C1D_SET_DAMAGEINFOS_OFFSET))(this, value);
	}
};
