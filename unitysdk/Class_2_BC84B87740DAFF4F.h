#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_FFE03FE61A5D4B1E;
namespace RPG::Client { class MonoCurveTriggerManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropInteractionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_BC84B87740DAFF4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB513980)
#define CLASS_2_BC84B87740DAFF4F_DOONENTER_OFFSET UNITYSDK_OFFSET(0xB513C00)
#define CLASS_2_BC84B87740DAFF4F_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xB5141A0)
#define CLASS_2_BC84B87740DAFF4F_DOONTICK_OFFSET UNITYSDK_OFFSET(0xB514210)
#define CLASS_2_BC84B87740DAFF4F_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB5145F0)
#define CLASS_2_BC84B87740DAFF4F_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB5145B0)
#define CLASS_2_BC84B87740DAFF4F_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0xB5145D0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_1265AD26B9934ADC_OFFSET UNITYSDK_OFFSET(0xB514520)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_1F130271093617A5_1_OFFSET UNITYSDK_OFFSET(0xB513AD0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xB5142A0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0xB513BA0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_6A6A96FBD090C99D_OFFSET UNITYSDK_OFFSET(0xB513C60)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB513A50)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_BF85224A16082717_OFFSET UNITYSDK_OFFSET(0xB513760)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_F534E0360F42C704_OFFSET UNITYSDK_OFFSET(0xB514370)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_F7D9E881EE15AF45_OFFSET UNITYSDK_OFFSET(0xB513880)
#define CLASS_2_BC84B87740DAFF4F_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB514600)
#define CLASS_2_BC84B87740DAFF4F_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB5145C0)
#define CLASS_2_BC84B87740DAFF4F_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0xB5145E0)
#define CLASS_2_BC84B87740DAFF4F__CTOR_OFFSET UNITYSDK_OFFSET(0xB513770)
#define CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB514610)
#define CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xB514620)
#define CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xB514630)

inline static constexpr unsigned int Class_2_BC84B87740DAFF4F_TypeDefinitionIndex = 64134;

class Class_2_BC84B87740DAFF4F : public ::Class_1_A696AB4980B3D7B5
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::System::String* _IconPath_k__BackingField; // 0x98
	::Class_1_FFE03FE61A5D4B1E* Field_2_2; // 0xA0
	::RPG::Client::MonoCurveTriggerManager* Field_2_3; // 0xA8
	::RPG::GameCore::GameEntity* Field_2_4; // 0xB0
	::RPG::GameCore::GameEntity* Field_2_5; // 0xB8
	::RPG::GameCore::PropInteractionTrigger_ButtonParam* Field_2_6; // 0xC0
	::System::Boolean Field_2_7; // 0xC8
	::System::Boolean Field_2_8; // 0xC9
	::System::Boolean Field_2_9; // 0xCA
	::System::UInt32 _RuntimeID_k__BackingField; // 0xCC
	::System::Single Field_2_11; // 0xD0
	::RPG::Client::TextID _TextID_k__BackingField; // 0xD8

	::System::Void _ctor(::RPG::Client::MonoCurveTriggerManager* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::OptionTriggerInfo* a3, ::Class_1_FFE03FE61A5D4B1E* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveTriggerManager*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::OptionTriggerInfo*, ::Class_1_FFE03FE61A5D4B1E*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::PropInteractionTrigger_ButtonParam* Method_2_BF85224A16082717()
	{
		return ((::RPG::GameCore::PropInteractionTrigger_ButtonParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_BF85224A16082717_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7D9E881EE15AF45(::RPG::GameCore::OptionTriggerInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTriggerInfo*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_F7D9E881EE15AF45_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_DOONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A6A96FBD090C99D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_6A6A96FBD090C99D_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_1F130271093617A5_1_OFFSET))(this);
	}

	::System::Void Method_2_F534E0360F42C704(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_F534E0360F42C704_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1265AD26B9934ADC(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_1265AD26B9934ADC_OFFSET))(this, a1);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::Void set_RuntimeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_RUNTIMEID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_TextID()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_TEXTID_OFFSET))(this);
	}

	::System::Void set_TextID(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_TEXTID_OFFSET))(this, a1);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_ICONPATH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
