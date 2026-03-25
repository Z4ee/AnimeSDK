#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_827373C1CEDFE355;
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace RPG::GameCore { class PassengerBehaviorConfigRow; }
namespace RPG::GameCore { class TrainPassengerConfigRow; }

#define CLASS_1_CC12BEA64A5FD961_GET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0x10688E70)
#define CLASS_1_CC12BEA64A5FD961_GET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x10688F00)
#define CLASS_1_CC12BEA64A5FD961_GET_PASSENGERID_OFFSET UNITYSDK_OFFSET(0x10688E50)
#define CLASS_1_CC12BEA64A5FD961_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10688E90)
#define CLASS_1_CC12BEA64A5FD961_METHOD_1_9C66B07446448FC6_OFFSET UNITYSDK_OFFSET(0x10688C70)
#define CLASS_1_CC12BEA64A5FD961_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x10688DF0)
#define CLASS_1_CC12BEA64A5FD961_METHOD_1_D978819B0A4871A0_2_OFFSET UNITYSDK_OFFSET(0x10688E10)
#define CLASS_1_CC12BEA64A5FD961_METHOD_1_D978819B0A4871A0_3_OFFSET UNITYSDK_OFFSET(0x10688E30)
#define CLASS_1_CC12BEA64A5FD961_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x10688EE0)
#define CLASS_1_CC12BEA64A5FD961_SET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0x10688E80)
#define CLASS_1_CC12BEA64A5FD961_SET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x10688F10)
#define CLASS_1_CC12BEA64A5FD961_SET_PASSENGERID_OFFSET UNITYSDK_OFFSET(0x10688E60)
#define CLASS_1_CC12BEA64A5FD961__CTOR_OFFSET UNITYSDK_OFFSET(0x10688C40)

inline static constexpr unsigned int Class_1_CC12BEA64A5FD961_TypeDefinitionIndex = 55637;

class Class_1_CC12BEA64A5FD961 : public ::System::Object
{
public:
	::RPG::GameCore::PassengerBehaviorConfigRow* Field_1_3; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x18
	::RPG::GameCore::LevelNPCInfoOverride* _OverrideInfo_k__BackingField; // 0x20
	::System::UInt32 _PassengerID_k__BackingField; // 0x28
	::System::UInt32 _BehaviorID_k__BackingField; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TrainPassengerConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPassengerConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C66B07446448FC6(::Class_1_827373C1CEDFE355* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_827373C1CEDFE355*))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_METHOD_1_9C66B07446448FC6_OFFSET))(this, a1);
	}

	::System::UInt32 get_PassengerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_GET_PASSENGERID_OFFSET))(this);
	}

	::System::Void set_PassengerID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_SET_PASSENGERID_OFFSET))(this, value);
	}

	::System::UInt32 get_BehaviorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_GET_BEHAVIORID_OFFSET))(this);
	}

	::System::Void set_BehaviorID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_SET_BEHAVIORID_OFFSET))(this, value);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_METHOD_1_D978819B0A4871A0_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_METHOD_1_D978819B0A4871A0_3_OFFSET))(this);
	}

	::RPG::GameCore::LevelNPCInfoOverride* get_OverrideInfo()
	{
		return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_GET_OVERRIDEINFO_OFFSET))(this);
	}

	::System::Void set_OverrideInfo(::RPG::GameCore::LevelNPCInfoOverride* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfoOverride*))((::PBYTE)hIl2Cpp + CLASS_1_CC12BEA64A5FD961_SET_OVERRIDEINFO_OFFSET))(this, value);
	}
};
