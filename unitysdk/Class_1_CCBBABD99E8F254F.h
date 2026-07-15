#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43B0AF86156D9901;
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace RPG::GameCore { class PassengerBehaviorConfigRow; }
namespace RPG::GameCore { class TrainPassengerConfigRow; }

#define CLASS_1_CCBBABD99E8F254F_GET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0x17AC4790)
#define CLASS_1_CCBBABD99E8F254F_GET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x17AC4850)
#define CLASS_1_CCBBABD99E8F254F_GET_PASSENGERID_OFFSET UNITYSDK_OFFSET(0x17AC4770)
#define CLASS_1_CCBBABD99E8F254F_METHOD_1_1994748E813083D7_OFFSET UNITYSDK_OFFSET(0x17AC4420)
#define CLASS_1_CCBBABD99E8F254F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17AC47B0)
#define CLASS_1_CCBBABD99E8F254F_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x17AC4680)
#define CLASS_1_CCBBABD99E8F254F_METHOD_1_AA2D3E889C8A52CA_2_OFFSET UNITYSDK_OFFSET(0x17AC46D0)
#define CLASS_1_CCBBABD99E8F254F_METHOD_1_AA2D3E889C8A52CA_3_OFFSET UNITYSDK_OFFSET(0x17AC4720)
#define CLASS_1_CCBBABD99E8F254F_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x17AC4800)
#define CLASS_1_CCBBABD99E8F254F_SET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0x17AC47A0)
#define CLASS_1_CCBBABD99E8F254F_SET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0x17AC4860)
#define CLASS_1_CCBBABD99E8F254F_SET_PASSENGERID_OFFSET UNITYSDK_OFFSET(0x17AC4780)
#define CLASS_1_CCBBABD99E8F254F__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC43F0)

inline static constexpr unsigned int Class_1_CCBBABD99E8F254F_TypeDefinitionIndex = 65136;

class Class_1_CCBBABD99E8F254F : public ::System::Object
{
public:
	::RPG::GameCore::PassengerBehaviorConfigRow* Field_1_0; // 0x10
	::RPG::GameCore::LevelNPCInfoOverride* _OverrideInfo_k__BackingField; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::System::UInt32 _PassengerID_k__BackingField; // 0x28
	::System::UInt32 _BehaviorID_k__BackingField; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TrainPassengerConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPassengerConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_1994748E813083D7(::Class_1_43B0AF86156D9901* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43B0AF86156D9901*))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_METHOD_1_1994748E813083D7_OFFSET))(this, a1);
	}

	::System::UInt32 get_PassengerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_GET_PASSENGERID_OFFSET))(this);
	}

	::System::Void set_PassengerID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_SET_PASSENGERID_OFFSET))(this, a1);
	}

	::System::UInt32 get_BehaviorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_GET_BEHAVIORID_OFFSET))(this);
	}

	::System::Void set_BehaviorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_SET_BEHAVIORID_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_METHOD_1_AA2D3E889C8A52CA_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_METHOD_1_AA2D3E889C8A52CA_3_OFFSET))(this);
	}

	::RPG::GameCore::LevelNPCInfoOverride* get_OverrideInfo()
	{
		return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_GET_OVERRIDEINFO_OFFSET))(this);
	}

	::System::Void set_OverrideInfo(::RPG::GameCore::LevelNPCInfoOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfoOverride*))((::PBYTE)hIl2Cpp + CLASS_1_CCBBABD99E8F254F_SET_OVERRIDEINFO_OFFSET))(this, a1);
	}
};
