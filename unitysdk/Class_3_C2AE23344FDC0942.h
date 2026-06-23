#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C2AE23344FDC0942_Enum_3_6F9C991C1573DBA1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_CEBAC46919FDDBDD.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_433EAFD16930C7BA.h"
#include "unitysdk/Struct_2_E81C588ED0B50078.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_07AAFA6F7F79BEB3_1;
class Class_3_F66EF797857EB737;
namespace MoleMole::Config { class ConfigMonsterAlertTrait; }
namespace MoleMole::Config { class ConfigMonsterDefaultTrait; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_3_C2AE23344FDC0942_METHOD_3_1CE3078A8EE9E6A7_OFFSET UNITYSDK_OFFSET(0x143A7660)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_1D2705A9B139AB3F_OFFSET UNITYSDK_OFFSET(0x143A5F10)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_251FC2608778545E_OFFSET UNITYSDK_OFFSET(0x143A6480)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x143A79B0)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_439E0C55B2B4FB13_OFFSET UNITYSDK_OFFSET(0x143A85B0)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x143A76C0)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_69A8CC96DF736330_OFFSET UNITYSDK_OFFSET(0x143A73C0)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x143A6070)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x143A7150)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x143A7900)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x143A7CF0)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_832295EC279E5994_4_OFFSET UNITYSDK_OFFSET(0x143A8380)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x143A7140)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x143A7650)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x143A7910)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_A36CD044991EC839_OFFSET UNITYSDK_OFFSET(0x143A6D00)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_BDBB8268FF68D532_OFFSET UNITYSDK_OFFSET(0x143A7160)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_E83D3547A9015657_OFFSET UNITYSDK_OFFSET(0x143A7D00)
#define CLASS_3_C2AE23344FDC0942_METHOD_3_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x143A8390)
#define CLASS_3_C2AE23344FDC0942_ONATTACH_OFFSET UNITYSDK_OFFSET(0x143A5DC0)
#define CLASS_3_C2AE23344FDC0942_ONDETACH_OFFSET UNITYSDK_OFFSET(0x143A6B10)
#define CLASS_3_C2AE23344FDC0942_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x143A6430)
#define CLASS_3_C2AE23344FDC0942_ONENABLE_OFFSET UNITYSDK_OFFSET(0x143A5F60)
#define CLASS_3_C2AE23344FDC0942_ONEVENT_OFFSET UNITYSDK_OFFSET(0x143A6C30)
#define CLASS_3_C2AE23344FDC0942_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x143A5CE0)
#define CLASS_3_C2AE23344FDC0942_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x143A6F80)
#define CLASS_3_C2AE23344FDC0942__CCTOR_OFFSET UNITYSDK_OFFSET(0x143A5C70)
#define CLASS_3_C2AE23344FDC0942__CTOR_OFFSET UNITYSDK_OFFSET(0x143A70B0)

inline static constexpr unsigned int Class_3_C2AE23344FDC0942_TypeDefinitionIndex = 59626;

class Class_3_C2AE23344FDC0942 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_C2AE23344FDC0942*>
{
public:
	::MoleMole::Config::ConfigMonsterDefaultTrait* Field_3_0; // 0x20
	::MoleMole::EntityHandle Field_3_10; // 0x28
	::Class_3_F66EF797857EB737* Field_3_12; // 0x38
	::Class_3_07AAFA6F7F79BEB3_1* Field_3_8; // 0x40
	::Struct_2_E81C588ED0B50078 Field_3_9; // 0x48
	::MoleMole::Config::ConfigMonsterAlertTrait* Field_3_1; // 0x58
	::System::Threading::CancellationTokenSource* Field_3_16; // 0x60
	::System::Int32 Field_3_2; // 0x68
	::System::Int32 Field_3_3; // 0x6C
	::System::Int32 Field_3_7; // 0x70
	::System::Int32 Field_3_15; // 0x74
	::System::UInt32 Field_3_13; // 0x78
	::System::Boolean Field_3_14; // 0x7C
	::System::Boolean Field_3_5; // 0x7D
	::System::Boolean Field_3_6; // 0x7E
	::System::Boolean Field_3_4; // 0x7F
	::Struct_2_433EAFD16930C7BA Field_3_11; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_RECEIVEFEATUREEVENT_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_BDBB8268FF68D532(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_BDBB8268FF68D532_OFFSET))(this, a1);
	}

	::System::Void Method_3_69A8CC96DF736330(::Class_3_07AAFA6F7F79BEB3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3_1*))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_69A8CC96DF736330_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_3_1CE3078A8EE9E6A7(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_1CE3078A8EE9E6A7_OFFSET))(this, a1);
	}

	::System::Void Method_3_251FC2608778545E(::Enum_3_CEBAC46919FDDBDD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CEBAC46919FDDBDD))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_251FC2608778545E_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::System::Void Method_3_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_3_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_3_1D2705A9B139AB3F(::Class_3_C2AE23344FDC0942_Enum_3_6F9C991C1573DBA1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C2AE23344FDC0942_Enum_3_6F9C991C1573DBA1))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_1D2705A9B139AB3F_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_E83D3547A9015657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_E83D3547A9015657_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_832295EC279E5994_4_OFFSET))(this);
	}

	::System::Int32 Method_3_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Single Method_3_439E0C55B2B4FB13(::Class_3_C2AE23344FDC0942_Enum_3_6F9C991C1573DBA1 a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_3_C2AE23344FDC0942_Enum_3_6F9C991C1573DBA1))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_439E0C55B2B4FB13_OFFSET))(this, a1);
	}

	::System::Void Method_3_A36CD044991EC839(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_A36CD044991EC839_OFFSET))(this, a1);
	}

	::System::Void Method_3_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2AE23344FDC0942_METHOD_3_51DEC44B986280C0_OFFSET))(this);
	}
};
