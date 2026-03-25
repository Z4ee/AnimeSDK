#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_863599272389E80C_DeviceInputType.h"
#include "unitysdk/Class_2_4ECEAC2E03C4560A_NpcShowState.h"
#include "unitysdk/Class_2_4ECEAC2E03C4560A_NpcStateControlSource.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceNotifyType.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_5B72BB58011DDDD8;
class Class_1_8A6989C352B0F0F0;
class Class_1_ECBCF86CDE61CBCA;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::Client { class TimeSpaceCrisscrossAdditionsMonoPlugin; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_863599272389E80C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x114D2FE0)
#define CLASS_1_863599272389E80C_METHOD_1_069963ABB15BE32B_OFFSET UNITYSDK_OFFSET(0x114D4DD0)
#define CLASS_1_863599272389E80C_METHOD_1_06D1E9AF28B5846F_OFFSET UNITYSDK_OFFSET(0x114D3380)
#define CLASS_1_863599272389E80C_METHOD_1_10382836015EA7BB_OFFSET UNITYSDK_OFFSET(0x114D2D20)
#define CLASS_1_863599272389E80C_METHOD_1_15DE61AE3687AE89_OFFSET UNITYSDK_OFFSET(0x114D3C60)
#define CLASS_1_863599272389E80C_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x114D08D0)
#define CLASS_1_863599272389E80C_METHOD_1_188B62CD7F0D10EF_OFFSET UNITYSDK_OFFSET(0x114D39F0)
#define CLASS_1_863599272389E80C_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x114D0FB0)
#define CLASS_1_863599272389E80C_METHOD_1_1FFAB8A0A5AFD69D_OFFSET UNITYSDK_OFFSET(0x114D5F30)
#define CLASS_1_863599272389E80C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x114D2950)
#define CLASS_1_863599272389E80C_METHOD_1_36058D2BD68C4484_OFFSET UNITYSDK_OFFSET(0x114D4E50)
#define CLASS_1_863599272389E80C_METHOD_1_3789E05CE3C8CF29_OFFSET UNITYSDK_OFFSET(0x114D26C0)
#define CLASS_1_863599272389E80C_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x114D2ED0)
#define CLASS_1_863599272389E80C_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x114D2F10)
#define CLASS_1_863599272389E80C_METHOD_1_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x114D2F60)
#define CLASS_1_863599272389E80C_METHOD_1_391A84BCD9F51317_4_OFFSET UNITYSDK_OFFSET(0x114D2FA0)
#define CLASS_1_863599272389E80C_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x114D2E90)
#define CLASS_1_863599272389E80C_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x114D43E0)
#define CLASS_1_863599272389E80C_METHOD_1_4707542020D1D7B1_OFFSET UNITYSDK_OFFSET(0x114D29F0)
#define CLASS_1_863599272389E80C_METHOD_1_4BD913AFB9634F5C_OFFSET UNITYSDK_OFFSET(0x114D0510)
#define CLASS_1_863599272389E80C_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x114D3950)
#define CLASS_1_863599272389E80C_METHOD_1_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x114D5AA0)
#define CLASS_1_863599272389E80C_METHOD_1_76E370440BCD1F7F_OFFSET UNITYSDK_OFFSET(0x114D4570)
#define CLASS_1_863599272389E80C_METHOD_1_7C291E79141B844C_OFFSET UNITYSDK_OFFSET(0x114D6100)
#define CLASS_1_863599272389E80C_METHOD_1_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0x114D5550)
#define CLASS_1_863599272389E80C_METHOD_1_88E99A17C817F5C9_OFFSET UNITYSDK_OFFSET(0x114D3650)
#define CLASS_1_863599272389E80C_METHOD_1_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x114D17D0)
#define CLASS_1_863599272389E80C_METHOD_1_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x114D59C0)
#define CLASS_1_863599272389E80C_METHOD_1_98B33FF96A5BD540_OFFSET UNITYSDK_OFFSET(0x114D47F0)
#define CLASS_1_863599272389E80C_METHOD_1_9AE9D0F1A19E41A8_OFFSET UNITYSDK_OFFSET(0x114D50A0)
#define CLASS_1_863599272389E80C_METHOD_1_A56557C2F35444B6_OFFSET UNITYSDK_OFFSET(0x114D4A80)
#define CLASS_1_863599272389E80C_METHOD_1_A69897E352093283_OFFSET UNITYSDK_OFFSET(0x114D5D00)
#define CLASS_1_863599272389E80C_METHOD_1_AD97903BD7DDEF59_OFFSET UNITYSDK_OFFSET(0x114D4040)
#define CLASS_1_863599272389E80C_METHOD_1_C122055518F63AF1_OFFSET UNITYSDK_OFFSET(0x114D0D90)
#define CLASS_1_863599272389E80C_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x114D2750)
#define CLASS_1_863599272389E80C_METHOD_1_DC56C980598137B4_OFFSET UNITYSDK_OFFSET(0x114D3500)
#define CLASS_1_863599272389E80C_METHOD_1_E6A464C09590E175_OFFSET UNITYSDK_OFFSET(0x114D1D90)
#define CLASS_1_863599272389E80C_METHOD_1_F07023084C1C5A2E_OFFSET UNITYSDK_OFFSET(0x114D3F10)
#define CLASS_1_863599272389E80C_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x114D3B80)
#define CLASS_1_863599272389E80C_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x114D2900)
#define CLASS_1_863599272389E80C_METHOD_1_F713E417997556FC_OFFSET UNITYSDK_OFFSET(0x114D50B0)
#define CLASS_1_863599272389E80C_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x114D4B50)
#define CLASS_1_863599272389E80C__CTOR_OFFSET UNITYSDK_OFFSET(0x114D02D0)

inline static constexpr unsigned int Class_1_863599272389E80C_TypeDefinitionIndex = 49011;

class Class_1_863599272389E80C : public ::System::Object
{
public:
	::RPG::Client::PartialFlipDeviceComponent* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::PartialFlipDeviceComponent*, ::System::Int32>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::PartialFlipDeviceComponent*, ::Class_1_5B72BB58011DDDD8*>* Field_1_0; // 0x20
	::RPG::Client::Promises::Promise* Field_1_15; // 0x28
	::RPG::Client::EraFlipperCommonConfig* Field_1_10; // 0x30
	::Il2CppArray<::RPG::Client::PartialFlipDeviceComponent*>* Field_1_2; // 0x38
	::Class_1_ECBCF86CDE61CBCA* Field_1_4; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossAdditionsMonoPlugin*>* Field_1_11; // 0x48
	::Class_1_863599272389E80C_DeviceInputType Field_1_13; // 0x50
	::System::Boolean Field_1_7; // 0x54
	::System::Boolean Field_1_6; // 0x55
	::System::Boolean Field_1_16; // 0x56
	::System::Boolean Field_1_8; // 0x57
	::System::Int64 Field_1_12; // 0x58
	::System::Boolean Field_1_9; // 0x60
	::System::Boolean Field_1_14; // 0x61
	::System::Boolean Field_1_5; // 0x62

	::System::Void _ctor(::RPG::Client::EraFlipperCommonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BD913AFB9634F5C(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_4BD913AFB9634F5C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C122055518F63AF1(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_C122055518F63AF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::System::Void Method_1_E6A464C09590E175(::Class_1_ECBCF86CDE61CBCA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_E6A464C09590E175_OFFSET))(this, a1);
	}

	::System::Void Method_1_3789E05CE3C8CF29(::RPG::GameCore::EraStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_3789E05CE3C8CF29_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4707542020D1D7B1(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_4707542020D1D7B1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_10382836015EA7BB(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_10382836015EA7BB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_391A84BCD9F51317_3_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_391A84BCD9F51317_4_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_06D1E9AF28B5846F(::RPG::Client::PartialFlipDeviceComponent* a1, ::RPG::Client::FlipDevicePoint* a2, ::RPG::Client::FlipDevicePoint* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::RPG::Client::FlipDevicePoint*, ::RPG::Client::FlipDevicePoint*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_06D1E9AF28B5846F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_88E99A17C817F5C9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_88E99A17C817F5C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_15DE61AE3687AE89(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_15DE61AE3687AE89_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F07023084C1C5A2E(::RPG::Client::PartialFlipDeviceComponent* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_F07023084C1C5A2E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AD97903BD7DDEF59(::RPG::GameCore::GameEntity* a1, ::RPG::Client::PartialFlipDeviceComponent*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::PartialFlipDeviceComponent*&))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_AD97903BD7DDEF59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_1_76E370440BCD1F7F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_76E370440BCD1F7F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A56557C2F35444B6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_A56557C2F35444B6_OFFSET))(this, a1);
	}

	::System::Void Method_1_069963ABB15BE32B(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_069963ABB15BE32B_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single> Method_1_36058D2BD68C4484()
	{
		return ((::System::ValueTuple_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_36058D2BD68C4484_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::RPG::Client::PartialFlipDeviceComponent* Method_1_9AE9D0F1A19E41A8()
	{
		return ((::RPG::Client::PartialFlipDeviceComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_9AE9D0F1A19E41A8_OFFSET))(this);
	}

	::System::Void Method_1_188B62CD7F0D10EF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_188B62CD7F0D10EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_1_F713E417997556FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_F713E417997556FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_98B33FF96A5BD540(::Class_2_4ECEAC2E03C4560A_NpcShowState a1, ::Class_2_4ECEAC2E03C4560A_NpcStateControlSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4ECEAC2E03C4560A_NpcShowState, ::Class_2_4ECEAC2E03C4560A_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_98B33FF96A5BD540_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_1_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_1_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_1_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_1_A69897E352093283(::Class_1_8A6989C352B0F0F0* a1, ::Class_1_303D5A33D1401D59* a2, ::UnityEngine::GameObject* a3, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingInstanceNotifyType))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_A69897E352093283_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1FFAB8A0A5AFD69D(::Class_1_8A6989C352B0F0F0* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_1FFAB8A0A5AFD69D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC56C980598137B4(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_DC56C980598137B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C291E79141B844C(::RPG::Client::PartialFlipDeviceComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + CLASS_1_863599272389E80C_METHOD_1_7C291E79141B844C_OFFSET))(this, a1);
	}
};
