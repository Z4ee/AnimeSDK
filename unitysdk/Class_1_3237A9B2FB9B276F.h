#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_0_16E4307DCC419505_296;
class Class_1_303D5A33D1401D59;
class Class_1_3237A9B2FB9B276F_Class_1_29346FA79C775DFC;
class Class_1_3237A9B2FB9B276F_Class_1_6C0E0714F0095639;
class Class_1_3237A9B2FB9B276F_Class_1_B656A956F6340AD8;
class Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA;
class Class_1_ECBCF86CDE61CBCA;
class PreviewTrackCamera;
class TrainPartyCameraBlend;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::GameCore { class TrainPartyAreaConfigRow; }
namespace RPG::GameCore { class TrainPartyBuildBlock; }
namespace RPG::GameCore { class TrainPartyBuildItemConfig; }
namespace RPG::GameCore { class TrainPartyBuildItemDynamicBindValue; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3237A9B2FB9B276F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BB2290)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_022185F96633E24B_OFFSET UNITYSDK_OFFSET(0x11BB9100)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_05199D26900A4BE4_OFFSET UNITYSDK_OFFSET(0x11BB1E60)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x11BB4020)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_08D1E655AA16026D_OFFSET UNITYSDK_OFFSET(0x11BB7FC0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_0A98D70CB06DD547_OFFSET UNITYSDK_OFFSET(0x11BB7610)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_0E66A936D3C7048B_OFFSET UNITYSDK_OFFSET(0x11BB4BB0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_19B7442A74D19BBF_OFFSET UNITYSDK_OFFSET(0x11BB5600)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_1B4187F96A348A7D_OFFSET UNITYSDK_OFFSET(0x11BB6FA0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0x11BB4460)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_2703461EC3882894_OFFSET UNITYSDK_OFFSET(0x11BB9780)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x11BB06A0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_2E8DB46416359A53_OFFSET UNITYSDK_OFFSET(0x11BB6480)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_3004987011D63DCE_OFFSET UNITYSDK_OFFSET(0x11BB19D0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_32A2BB7DDD959D13_OFFSET UNITYSDK_OFFSET(0x11BB6BC0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0x11BB4130)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_397AFDCBC683E63F_OFFSET UNITYSDK_OFFSET(0x11BB0910)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_3E4243BB348DE0D4_OFFSET UNITYSDK_OFFSET(0x11BB2DE0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11BB2A30)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_4A15A3A2812290C2_OFFSET UNITYSDK_OFFSET(0x11BB3060)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_4C9F052AE8E41112_OFFSET UNITYSDK_OFFSET(0x11BB9220)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_53C19D54FAFB9954_OFFSET UNITYSDK_OFFSET(0x11BB5930)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_5A12C00C2BBA43B1_OFFSET UNITYSDK_OFFSET(0x11BB1090)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x11BB3290)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_6248BDDF38E2649E_OFFSET UNITYSDK_OFFSET(0x11BB51B0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_65221CD4A9269503_OFFSET UNITYSDK_OFFSET(0x11BB3890)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_672A0099EFAD8FCE_OFFSET UNITYSDK_OFFSET(0x11BB8F50)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_6DF8E2E2BDB874D5_OFFSET UNITYSDK_OFFSET(0x11BB87C0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_6E3DEABB1FC191BB_OFFSET UNITYSDK_OFFSET(0x11BB8BD0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_71BD3F0BF7CA602C_OFFSET UNITYSDK_OFFSET(0x11BB9D20)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_76475A8B2C3EBBDC_OFFSET UNITYSDK_OFFSET(0x11BB5AD0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_78B6B08902C9ECAF_OFFSET UNITYSDK_OFFSET(0x11BB8C50)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_7BD2194F29FB2D5E_OFFSET UNITYSDK_OFFSET(0x11BB63A0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x11BB02B0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_8B8DD9C0E983DD9C_OFFSET UNITYSDK_OFFSET(0x11BBA730)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_8DBA79648044F9B1_OFFSET UNITYSDK_OFFSET(0x11BB5480)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_901D5A7422339B1D_OFFSET UNITYSDK_OFFSET(0x11BBA3A0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_96A2939A97E26414_OFFSET UNITYSDK_OFFSET(0x11BB7960)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_96BF62E147D3D419_OFFSET UNITYSDK_OFFSET(0x11BB3E00)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_98F5AAA93BF786AA_OFFSET UNITYSDK_OFFSET(0x11BB2C40)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_9AD043FF7578EFB2_OFFSET UNITYSDK_OFFSET(0x11BB5260)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_9FEF743119D36039_OFFSET UNITYSDK_OFFSET(0x11BBA080)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_A16653A71F65D5D5_OFFSET UNITYSDK_OFFSET(0x11BB9340)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_A4B7633F7AC11553_OFFSET UNITYSDK_OFFSET(0x11BB6250)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_A65AC190C0D0526C_OFFSET UNITYSDK_OFFSET(0x11BB8A80)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_ABD781CAE1D41BD7_OFFSET UNITYSDK_OFFSET(0x11BBA5B0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_B101C3577B7D9A7D_OFFSET UNITYSDK_OFFSET(0x11BB9A30)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_B269B245CF3BE93A_OFFSET UNITYSDK_OFFSET(0x11BBA230)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_B54A8816911EA091_OFFSET UNITYSDK_OFFSET(0x11BB7E00)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_B7A43C06FD78D78B_OFFSET UNITYSDK_OFFSET(0x11BB20C0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_B7CCB99AAB7A4C8B_OFFSET UNITYSDK_OFFSET(0x11BB2A90)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_CA9A97F28B72FA59_OFFSET UNITYSDK_OFFSET(0x11BB3A70)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_D241F26A33FA3F15_OFFSET UNITYSDK_OFFSET(0x11BB3330)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_D4550D9E4433D1A0_OFFSET UNITYSDK_OFFSET(0x11BB0960)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_DB0B63609387A5E4_OFFSET UNITYSDK_OFFSET(0x11BB6990)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_DDC98122D465FB0C_OFFSET UNITYSDK_OFFSET(0x11BB0C40)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_DF74391877A986A7_OFFSET UNITYSDK_OFFSET(0x11BB8D90)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x11BB2FB0)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_F07065E7242BA338_OFFSET UNITYSDK_OFFSET(0x11BB5C60)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x11BB3B80)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_F49CE2A420D0D523_OFFSET UNITYSDK_OFFSET(0x11BB9980)
#define CLASS_1_3237A9B2FB9B276F_METHOD_1_FCB1E39FE3773F4E_OFFSET UNITYSDK_OFFSET(0x11BB7770)
#define CLASS_1_3237A9B2FB9B276F__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BBA980)
#define CLASS_1_3237A9B2FB9B276F__CTOR_OFFSET UNITYSDK_OFFSET(0x11BAFA40)
#define CLASS_1_3237A9B2FB9B276F__ENTERBUILDCAMERA_B__4_0_OFFSET UNITYSDK_OFFSET(0x11BBA9C0)

inline static constexpr unsigned int Class_1_3237A9B2FB9B276F_TypeDefinitionIndex = 55539;

class Class_1_3237A9B2FB9B276F : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_23()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3237A9B2FB9B276F_TypeDefinitionIndex)->GetStaticField(0xB840);
	}
	static ::System::Single* StaticGet_Field_1_21()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3237A9B2FB9B276F_TypeDefinitionIndex)->GetStaticField(0xB844);
	}
	static ::System::Single* StaticGet_Field_1_22()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3237A9B2FB9B276F_TypeDefinitionIndex)->GetStaticField(0xB848);
	}
	::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* Field_1_20; // 0x10
	::Cinemachine::CinemachineVirtualCameraBase* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_17; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3237A9B2FB9B276F_Class_1_6C0E0714F0095639*>* Field_1_19; // 0x28
	::RPG::Client::NotifyHandler* Field_1_2; // 0x30
	::RPG::Client::Stage* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA*>* Field_1_14; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_1_13; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3237A9B2FB9B276F_Class_1_29346FA79C775DFC*>* Field_1_16; // 0x50
	::UnityEngine::GameObject* Field_1_6; // 0x58
	::UnityEngine::Transform* Field_1_7; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TrainPartyBuildItemConfig*>* Field_1_12; // 0x68
	::PreviewTrackCamera* Field_1_9; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_3237A9B2FB9B276F_Class_1_B656A956F6340AD8*>* Field_1_15; // 0x78
	::System::UInt32 Field_1_3; // 0x80
	::System::Boolean Field_1_18; // 0x84
	::System::Boolean Field_1_1; // 0x85
	::System::Boolean Field_1_0; // 0x86
	::System::Boolean Field_1_4; // 0x87
	::System::UInt32 Field_1_11; // 0x88
	::System::UInt32 Field_1_10; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_65221CD4A9269503(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_65221CD4A9269503_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_1_361C06486F56B4E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_361C06486F56B4E7_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_0E66A936D3C7048B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_0E66A936D3C7048B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_53C19D54FAFB9954(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_53C19D54FAFB9954_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F07065E7242BA338(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_F07065E7242BA338_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7CCB99AAB7A4C8B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_B7CCB99AAB7A4C8B_OFFSET))(this);
	}

	::System::Void Method_1_DB0B63609387A5E4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_DB0B63609387A5E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B4187F96A348A7D(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_1B4187F96A348A7D_OFFSET))(this, a1);
	}

	::System::Void Method_1_98F5AAA93BF786AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_98F5AAA93BF786AA_OFFSET))(this);
	}

	::System::Void Method_1_0A98D70CB06DD547(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_0A98D70CB06DD547_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_96A2939A97E26414(::UnityEngine::GameObject* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_96A2939A97E26414_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_B54A8816911EA091(::System::UInt32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_B54A8816911EA091_OFFSET))(this, a1);
	}

	::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_1_08D1E655AA16026D(::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* a1, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* a2, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_08D1E655AA16026D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B7A43C06FD78D78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_B7A43C06FD78D78B_OFFSET))(this);
	}

	::System::Void Method_1_3E4243BB348DE0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_3E4243BB348DE0D4_OFFSET))(this);
	}

	::System::Void Method_1_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_1_D241F26A33FA3F15(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_D241F26A33FA3F15_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DF8E2E2BDB874D5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_6DF8E2E2BDB874D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_19B7442A74D19BBF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_19B7442A74D19BBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::Cinemachine::CinemachineBrain* Method_1_A65AC190C0D0526C()
	{
		return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_A65AC190C0D0526C_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_1_6E3DEABB1FC191BB()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_6E3DEABB1FC191BB_OFFSET))(this);
	}

	::TrainPartyCameraBlend* Method_1_8DBA79648044F9B1()
	{
		return ((::TrainPartyCameraBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_8DBA79648044F9B1_OFFSET))(this);
	}

	::System::Void Method_1_9AD043FF7578EFB2(::Class_0_16E4307DCC419505_296* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_296*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_9AD043FF7578EFB2_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_6248BDDF38E2649E(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_6248BDDF38E2649E_OFFSET))(this, a1, a2, a3);
	}

	::PreviewTrackCamera* Method_1_76475A8B2C3EBBDC(::System::UInt32 a1)
	{
		return ((::PreviewTrackCamera*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_76475A8B2C3EBBDC_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_78B6B08902C9ECAF()
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_78B6B08902C9ECAF_OFFSET))(this);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_022185F96633E24B(::System::UInt32 a1)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_022185F96633E24B_OFFSET))(this, a1);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_672A0099EFAD8FCE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_672A0099EFAD8FCE_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CinemachineVirtualCameraBase* Method_1_DF74391877A986A7(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_DF74391877A986A7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_397AFDCBC683E63F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_397AFDCBC683E63F_OFFSET))(this);
	}

	::System::Void Method_1_4C9F052AE8E41112()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_4C9F052AE8E41112_OFFSET))(this);
	}

	::System::Void Method_1_D4550D9E4433D1A0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_D4550D9E4433D1A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDC98122D465FB0C(::RPG::GameCore::TrainPartyBuildBlock* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildBlock*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_DDC98122D465FB0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F49CE2A420D0D523(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_F49CE2A420D0D523_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CA9A97F28B72FA59(::RPG::GameCore::TrainPartyBuildStaticItem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildStaticItem*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_CA9A97F28B72FA59_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B101C3577B7D9A7D(::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_B101C3577B7D9A7D_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_71BD3F0BF7CA602C(::System::Int16 a1, ::System::Int16 a2, ::RPG::GameCore::CompareType a3)
	{
		return ((::System::Boolean(*)(::System::Int16, ::System::Int16, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_71BD3F0BF7CA602C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_3004987011D63DCE(::System::UInt32 a1, ::Class_1_3237A9B2FB9B276F_Class_1_B656A956F6340AD8* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_3237A9B2FB9B276F_Class_1_B656A956F6340AD8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_3004987011D63DCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_05199D26900A4BE4(::System::UInt32 a1, ::Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_05199D26900A4BE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A4B7633F7AC11553(::System::UInt32 a1, ::Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_A4B7633F7AC11553_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4A15A3A2812290C2(::Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_4A15A3A2812290C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_32A2BB7DDD959D13(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1, ::Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::Class_1_3237A9B2FB9B276F_Class_1_ED591F162BC733AA*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_32A2BB7DDD959D13_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5A12C00C2BBA43B1(::System::UInt32 a1, ::Class_1_3237A9B2FB9B276F_Class_1_B656A956F6340AD8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_3237A9B2FB9B276F_Class_1_B656A956F6340AD8*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_5A12C00C2BBA43B1_OFFSET))(this, a1, a2);
	}

	::Class_1_303D5A33D1401D59* Method_1_2703461EC3882894(::System::String* a1)
	{
		return ((::Class_1_303D5A33D1401D59*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_2703461EC3882894_OFFSET))(this, a1);
	}

	::Class_1_303D5A33D1401D59* Method_1_9FEF743119D36039(::System::String* a1)
	{
		return ((::Class_1_303D5A33D1401D59*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_9FEF743119D36039_OFFSET))(this, a1);
	}

	::System::Void Method_1_B269B245CF3BE93A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_B269B245CF3BE93A_OFFSET))(this, a1);
	}

	::System::Void Method_1_901D5A7422339B1D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_901D5A7422339B1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABD781CAE1D41BD7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_ABD781CAE1D41BD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_A16653A71F65D5D5(::RPG::GameCore::TrainPartyAreaConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyAreaConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_A16653A71F65D5D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCB1E39FE3773F4E(::System::UInt32 a1, ::Class_1_3237A9B2FB9B276F_Class_1_B656A956F6340AD8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_3237A9B2FB9B276F_Class_1_B656A956F6340AD8*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_FCB1E39FE3773F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_226842F6044F973B_OFFSET))(this);
	}

	::System::Void Method_1_96BF62E147D3D419(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_96BF62E147D3D419_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B8DD9C0E983DD9C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_8B8DD9C0E983DD9C_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_7BD2194F29FB2D5E(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
	{
		return ((::System::UInt32(*)(::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_7BD2194F29FB2D5E_OFFSET))(a1);
	}

	::System::String* Method_1_2E8DB46416359A53(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F_METHOD_1_2E8DB46416359A53_OFFSET))(this, a1);
	}

	::System::Void _EnterBuildCamera_b__4_0(::System::Object* _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3237A9B2FB9B276F__ENTERBUILDCAMERA_B__4_0_OFFSET))(this, _);
	}
};
