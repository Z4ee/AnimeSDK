#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23C1B7E6B450FFB8_6;

#define CLASS_1_829D266DDB3E979B_GET_ADDCOIN_OFFSET UNITYSDK_OFFSET(0x9210FB0)
#define CLASS_1_829D266DDB3E979B_GET_DAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x9210FF0)
#define CLASS_1_829D266DDB3E979B_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x9210F90)
#define CLASS_1_829D266DDB3E979B_GET_SOLDIERDEADCNT_OFFSET UNITYSDK_OFFSET(0x9210FD0)
#define CLASS_1_829D266DDB3E979B_SET_ADDCOIN_OFFSET UNITYSDK_OFFSET(0x9210FC0)
#define CLASS_1_829D266DDB3E979B_SET_DAMAGEINFOS_OFFSET UNITYSDK_OFFSET(0x9211000)
#define CLASS_1_829D266DDB3E979B_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x9210FA0)
#define CLASS_1_829D266DDB3E979B_SET_SOLDIERDEADCNT_OFFSET UNITYSDK_OFFSET(0x9210FE0)
#define CLASS_1_829D266DDB3E979B__CTOR_OFFSET UNITYSDK_OFFSET(0x9210F70)

inline static constexpr unsigned int Class_1_829D266DDB3E979B_TypeDefinitionIndex = 70073;

class Class_1_829D266DDB3E979B : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_23C1B7E6B450FFB8_6*>* _DamageInfos_k__BackingField; // 0x10
	::System::UInt32 _AddCoin_k__BackingField; // 0x18
	::System::UInt32 _SoldierDeadCnt_k__BackingField; // 0x1C
	::System::Boolean _IsWin_k__BackingField; // 0x20

	::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2, ::Il2CppArray<::Class_1_23C1B7E6B450FFB8_6*>* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::Il2CppArray<::Class_1_23C1B7E6B450FFB8_6*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_829D266DDB3E979B__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean get_IsWin()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_829D266DDB3E979B_GET_ISWIN_OFFSET))(this);
	}

	::System::Void set_IsWin(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_829D266DDB3E979B_SET_ISWIN_OFFSET))(this, value);
	}

	::System::UInt32 get_AddCoin()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_829D266DDB3E979B_GET_ADDCOIN_OFFSET))(this);
	}

	::System::Void set_AddCoin(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_829D266DDB3E979B_SET_ADDCOIN_OFFSET))(this, value);
	}

	::System::UInt32 get_SoldierDeadCnt()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_829D266DDB3E979B_GET_SOLDIERDEADCNT_OFFSET))(this);
	}

	::System::Void set_SoldierDeadCnt(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_829D266DDB3E979B_SET_SOLDIERDEADCNT_OFFSET))(this, value);
	}

	::Il2CppArray<::Class_1_23C1B7E6B450FFB8_6*>* get_DamageInfos()
	{
		return ((::Il2CppArray<::Class_1_23C1B7E6B450FFB8_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_829D266DDB3E979B_GET_DAMAGEINFOS_OFFSET))(this);
	}

	::System::Void set_DamageInfos(::Il2CppArray<::Class_1_23C1B7E6B450FFB8_6*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_23C1B7E6B450FFB8_6*>*))((::PBYTE)hIl2Cpp + CLASS_1_829D266DDB3E979B_SET_DAMAGEINFOS_OFFSET))(this, value);
	}
};
