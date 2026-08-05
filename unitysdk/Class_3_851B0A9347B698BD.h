#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_851B0A9347B698BD_Enum_3_6F9C991C1573DBA1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_CEBAC46919FDDBDD.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_433EAFD16930C7BA.h"
#include "unitysdk/Struct_2_E81C588ED0B50078.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_07AAFA6F7F79BEB3;
class Class_3_F66EF797857EB737;
namespace MoleMole::Config { class ConfigMonsterAlertTrait; }
namespace MoleMole::Config { class ConfigMonsterDefaultTrait; }
namespace System { class EventArgs; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_3_851B0A9347B698BD_METHOD_3_1D2705A9B139AB3F_OFFSET UNITYSDK_OFFSET(0x1788C190)
#define CLASS_3_851B0A9347B698BD_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x1788E720)
#define CLASS_3_851B0A9347B698BD_METHOD_3_2311B03F33225A57_OFFSET UNITYSDK_OFFSET(0x1788D0A0)
#define CLASS_3_851B0A9347B698BD_METHOD_3_251FC2608778545E_OFFSET UNITYSDK_OFFSET(0x1788C830)
#define CLASS_3_851B0A9347B698BD_METHOD_3_439E0C55B2B4FB13_OFFSET UNITYSDK_OFFSET(0x1788D9A0)
#define CLASS_3_851B0A9347B698BD_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x1788C390)
#define CLASS_3_851B0A9347B698BD_METHOD_3_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x1788DCA0)
#define CLASS_3_851B0A9347B698BD_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1788D990)
#define CLASS_3_851B0A9347B698BD_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1788E610)
#define CLASS_3_851B0A9347B698BD_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x1788EB60)
#define CLASS_3_851B0A9347B698BD_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x1788EB70)
#define CLASS_3_851B0A9347B698BD_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1788D740)
#define CLASS_3_851B0A9347B698BD_METHOD_3_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x1788D750)
#define CLASS_3_851B0A9347B698BD_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1788E420)
#define CLASS_3_851B0A9347B698BD_METHOD_3_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x1788E680)
#define CLASS_3_851B0A9347B698BD_METHOD_3_A78A3A2829178A6C_OFFSET UNITYSDK_OFFSET(0x1788E430)
#define CLASS_3_851B0A9347B698BD_METHOD_3_B6172BBF351CA338_OFFSET UNITYSDK_OFFSET(0x1788D9F0)
#define CLASS_3_851B0A9347B698BD_METHOD_3_C406C32A894FBA7F_OFFSET UNITYSDK_OFFSET(0x1788EB80)
#define CLASS_3_851B0A9347B698BD_METHOD_3_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0x1788E620)
#define CLASS_3_851B0A9347B698BD_ONATTACH_OFFSET UNITYSDK_OFFSET(0x1788C040)
#define CLASS_3_851B0A9347B698BD_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1788CEC0)
#define CLASS_3_851B0A9347B698BD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1788C7E0)
#define CLASS_3_851B0A9347B698BD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1788C1E0)
#define CLASS_3_851B0A9347B698BD_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1788CFD0)
#define CLASS_3_851B0A9347B698BD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1788BF50)
#define CLASS_3_851B0A9347B698BD_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x1788D5C0)
#define CLASS_3_851B0A9347B698BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1788D4F0)
#define CLASS_3_851B0A9347B698BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1788D700)

inline static constexpr unsigned int Class_3_851B0A9347B698BD_TypeDefinitionIndex = 89462;

class Class_3_851B0A9347B698BD : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_851B0A9347B698BD*>
{
public:
	::MoleMole::Config::ConfigMonsterAlertTrait* Field_3_2; // 0x20
	::MoleMole::EntityHandle Field_3_9; // 0x28
	::Class_3_07AAFA6F7F79BEB3* Field_3_11; // 0x38
	::Class_3_F66EF797857EB737* Field_3_15; // 0x40
	::System::Threading::CancellationTokenSource* Field_3_19; // 0x48
	::MoleMole::Config::ConfigMonsterDefaultTrait* Field_3_3; // 0x50
	::Struct_2_E81C588ED0B50078 Field_3_10; // 0x58
	::System::Int32 Field_3_4; // 0x68
	::System::Int32 Field_3_0; // 0x6C
	::System::Int32 Field_3_12; // 0x70
	::System::Int32 Field_3_1; // 0x74
	::Struct_2_433EAFD16930C7BA Field_3_8; // 0x78
	::System::UInt32 Field_3_14; // 0x80
	::System::Boolean Field_3_6; // 0x84
	::System::Boolean Field_3_13; // 0x85
	::System::Boolean Field_3_7; // 0x86
	::System::Boolean Field_3_5; // 0x87

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Single Method_3_439E0C55B2B4FB13(::Class_3_851B0A9347B698BD_Enum_3_6F9C991C1573DBA1 a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_3_851B0A9347B698BD_Enum_3_6F9C991C1573DBA1))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_439E0C55B2B4FB13_OFFSET))(this, a1);
	}

	::System::Void Method_3_B6172BBF351CA338(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_B6172BBF351CA338_OFFSET))(this, a1);
	}

	::System::Void Method_3_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A78A3A2829178A6C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_A78A3A2829178A6C_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::System::Void Method_3_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_3_2311B03F33225A57(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_2311B03F33225A57_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_251FC2608778545E(::Enum_3_CEBAC46919FDDBDD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CEBAC46919FDDBDD))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_251FC2608778545E_OFFSET))(this, a1);
	}

	::System::Void Method_3_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_832295EC279E5994_4_OFFSET))(this);
	}

	::System::Void Method_3_1D2705A9B139AB3F(::Class_3_851B0A9347B698BD_Enum_3_6F9C991C1573DBA1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_851B0A9347B698BD_Enum_3_6F9C991C1573DBA1))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_1D2705A9B139AB3F_OFFSET))(this, a1);
	}

	::System::Void Method_3_C406C32A894FBA7F(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_851B0A9347B698BD_METHOD_3_C406C32A894FBA7F_OFFSET))(this, a1);
	}
};
