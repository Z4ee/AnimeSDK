#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class AkCallbackInfo;
class Class_0_16E4307DCC419505_464_Class_3_363670394F299996;
class Class_1_D7003CCDED916330_Class_3_640C173449D72699;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSoundInAnim; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_3_1DE48CFB527BCBC5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA6CEC0)
#define CLASS_3_1DE48CFB527BCBC5_METHOD_3_22979A281ED046FD_OFFSET UNITYSDK_OFFSET(0xCA6DEA0)
#define CLASS_3_1DE48CFB527BCBC5_METHOD_3_3C215AF94B0D76C0_OFFSET UNITYSDK_OFFSET(0xCA6DD40)
#define CLASS_3_1DE48CFB527BCBC5_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xCA6CF20)
#define CLASS_3_1DE48CFB527BCBC5_METHOD_3_5B0BDDCEF30419AF_OFFSET UNITYSDK_OFFSET(0xCA6DC40)
#define CLASS_3_1DE48CFB527BCBC5_METHOD_3_C1D1557FFC7E7C08_OFFSET UNITYSDK_OFFSET(0xCA6D860)
#define CLASS_3_1DE48CFB527BCBC5_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xCA6D0B0)
#define CLASS_3_1DE48CFB527BCBC5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCA6D210)
#define CLASS_3_1DE48CFB527BCBC5__CTOR_OFFSET UNITYSDK_OFFSET(0xCA6CE20)

inline static constexpr unsigned int Class_3_1DE48CFB527BCBC5_TypeDefinitionIndex = 56655;

class Class_3_1DE48CFB527BCBC5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerSoundInAnim*>
{
public:
	::Class_1_D7003CCDED916330_Class_3_640C173449D72699* GEDBIMJBELE; // 0x28
	::RPG::GameCore::GameEntity* ONIACPBDNMH; // 0x30
	::Class_0_16E4307DCC419505_464_Class_3_363670394F299996* LENAOOGGHDD; // 0x38
	::System::String* NIDHHGOJAHN; // 0x40
	::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* PKDJEJPKOGO; // 0x48
	::System::String* MGBHHNCMBHD; // 0x50
	::System::Int32 OHOGFBCFFFN; // 0x58
	::System::UInt32 DHEOFFACDEK; // 0x5C
	::System::Boolean LKABAJOFGPI; // 0x60
	::System::Boolean HKNNBCBGPOJ; // 0x61
	::System::Int32 IKHJBFPOFGK; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSoundInAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSoundInAnim*))((::PBYTE)hIl2Cpp + CLASS_3_1DE48CFB527BCBC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DE48CFB527BCBC5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DE48CFB527BCBC5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_5B0BDDCEF30419AF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1DE48CFB527BCBC5_METHOD_3_5B0BDDCEF30419AF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3C215AF94B0D76C0(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_3_1DE48CFB527BCBC5_METHOD_3_3C215AF94B0D76C0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DE48CFB527BCBC5_METHOD_3_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_3_22979A281ED046FD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1DE48CFB527BCBC5_METHOD_3_22979A281ED046FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DE48CFB527BCBC5_METHOD_3_F978A1D172468895_OFFSET))(this);
	}

	::System::String* Method_3_C1D1557FFC7E7C08()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1DE48CFB527BCBC5_METHOD_3_C1D1557FFC7E7C08_OFFSET))(this);
	}
};
