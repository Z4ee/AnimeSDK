#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
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

#define CLASS_2_BC84B87740DAFF4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B17400)
#define CLASS_2_BC84B87740DAFF4F_DOONENTER_OFFSET UNITYSDK_OFFSET(0x10B17650)
#define CLASS_2_BC84B87740DAFF4F_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x10B17BF0)
#define CLASS_2_BC84B87740DAFF4F_DOONTICK_OFFSET UNITYSDK_OFFSET(0x10B17C60)
#define CLASS_2_BC84B87740DAFF4F_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x10B18020)
#define CLASS_2_BC84B87740DAFF4F_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x10B17FE0)
#define CLASS_2_BC84B87740DAFF4F_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x10B18000)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_1265AD26B9934ADC_OFFSET UNITYSDK_OFFSET(0x10B17F50)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_17FF7E72EFD64472_OFFSET UNITYSDK_OFFSET(0x10B17DA0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x10B175F0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x10B176B0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_7646FFE662147970_1_OFFSET UNITYSDK_OFFSET(0x10B17540)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x10B17CF0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10B174C0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_BF85224A16082717_OFFSET UNITYSDK_OFFSET(0x10B171E0)
#define CLASS_2_BC84B87740DAFF4F_METHOD_2_F7D9E881EE15AF45_OFFSET UNITYSDK_OFFSET(0x10B17300)
#define CLASS_2_BC84B87740DAFF4F_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x10B18030)
#define CLASS_2_BC84B87740DAFF4F_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x10B17FF0)
#define CLASS_2_BC84B87740DAFF4F_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x10B18010)
#define CLASS_2_BC84B87740DAFF4F__CTOR_OFFSET UNITYSDK_OFFSET(0x10B171F0)
#define CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B18040)
#define CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x10B18050)
#define CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x10B18060)

inline static constexpr unsigned int Class_2_BC84B87740DAFF4F_TypeDefinitionIndex = 55974;

class Class_2_BC84B87740DAFF4F : public ::Class_1_87854DF4F09D42E1
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::System::String* _IconPath_k__BackingField; // 0x98
	::Class_1_FFE03FE61A5D4B1E* Field_2_5; // 0xA0
	::RPG::Client::MonoCurveTriggerManager* Field_2_3; // 0xA8
	::RPG::GameCore::GameEntity* Field_2_2; // 0xB0
	::RPG::GameCore::PropInteractionTrigger_ButtonParam* Field_2_4; // 0xB8
	::RPG::GameCore::GameEntity* Field_2_1; // 0xC0
	::RPG::Client::TextID _TextID_k__BackingField; // 0xC8
	::System::Boolean Field_2_7; // 0xD8
	::System::Boolean Field_2_9; // 0xD9
	::System::Boolean Field_2_6; // 0xDA
	::System::UInt32 _RuntimeID_k__BackingField; // 0xDC
	::System::Single Field_2_8; // 0xE0

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

	::System::Void Method_2_3E586421BA588EFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_3E586421BA588EFD_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_7646FFE662147970_1_OFFSET))(this);
	}

	::System::Void Method_2_17FF7E72EFD64472(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_17FF7E72EFD64472_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1265AD26B9934ADC(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_METHOD_2_1265AD26B9934ADC_OFFSET))(this, a1);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::Void set_RuntimeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_RUNTIMEID_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_TextID()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_TEXTID_OFFSET))(this);
	}

	::System::Void set_TextID(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_TEXTID_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_BC84B87740DAFF4F___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
