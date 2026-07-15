#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class AkCallbackInfo;
class Class_0_16E4307DCC419505_429_Class_3_363670394F299996;
class Class_1_D7003CCDED916330_Class_3_640C173449D72699;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSoundInAnim; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_3_D76B8E917C6A8144_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1558FD30)
#define CLASS_3_D76B8E917C6A8144_METHOD_3_22979A281ED046FD_OFFSET UNITYSDK_OFFSET(0x15590CF0)
#define CLASS_3_D76B8E917C6A8144_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x1558FD90)
#define CLASS_3_D76B8E917C6A8144_METHOD_3_5B0BDDCEF30419AF_OFFSET UNITYSDK_OFFSET(0x15590AC0)
#define CLASS_3_D76B8E917C6A8144_METHOD_3_8255505595309FA5_OFFSET UNITYSDK_OFFSET(0x15590BC0)
#define CLASS_3_D76B8E917C6A8144_METHOD_3_C1D1557FFC7E7C08_OFFSET UNITYSDK_OFFSET(0x155906E0)
#define CLASS_3_D76B8E917C6A8144_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1558FF20)
#define CLASS_3_D76B8E917C6A8144_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15590080)
#define CLASS_3_D76B8E917C6A8144__CTOR_OFFSET UNITYSDK_OFFSET(0x1558FC90)

inline static constexpr unsigned int Class_3_D76B8E917C6A8144_TypeDefinitionIndex = 53934;

class Class_3_D76B8E917C6A8144 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerSoundInAnim*>
{
public:
	::System::String* Field_3_0; // 0x28
	::Class_0_16E4307DCC419505_429_Class_3_363670394F299996* Field_3_1; // 0x30
	::RPG::GameCore::GameEntity* Field_3_2; // 0x38
	::Class_1_D7003CCDED916330_Class_3_640C173449D72699* Field_3_3; // 0x40
	::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* Field_3_4; // 0x48
	::System::String* Field_3_5; // 0x50
	::System::Boolean Field_3_6; // 0x58
	::System::Boolean Field_3_7; // 0x59
	::System::Int32 Field_3_8; // 0x5C
	::System::UInt32 Field_3_9; // 0x60
	::System::Int32 Field_3_10; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSoundInAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSoundInAnim*))((::PBYTE)hIl2Cpp + CLASS_3_D76B8E917C6A8144__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D76B8E917C6A8144_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D76B8E917C6A8144_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_5B0BDDCEF30419AF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D76B8E917C6A8144_METHOD_3_5B0BDDCEF30419AF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_8255505595309FA5(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_3_D76B8E917C6A8144_METHOD_3_8255505595309FA5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D76B8E917C6A8144_METHOD_3_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_3_22979A281ED046FD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D76B8E917C6A8144_METHOD_3_22979A281ED046FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D76B8E917C6A8144_METHOD_3_F978A1D172468895_OFFSET))(this);
	}

	::System::String* Method_3_C1D1557FFC7E7C08()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D76B8E917C6A8144_METHOD_3_C1D1557FFC7E7C08_OFFSET))(this);
	}
};
