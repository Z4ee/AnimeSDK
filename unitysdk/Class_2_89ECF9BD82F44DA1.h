#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_265;
class Class_1_64D890C466F37235;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class RotatableRegion; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_89ECF9BD82F44DA1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1236ED00)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_0B0C993B34575B04_OFFSET UNITYSDK_OFFSET(0x1236F4B0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1236F550)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0x1236F440)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_62408CD28ABE9144_OFFSET UNITYSDK_OFFSET(0x1236EF00)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0x1236F5B0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x1236E360)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_96E3159279ADB646_OFFSET UNITYSDK_OFFSET(0x1236F0D0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x1236E750)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_AC57D19FD9B7BD91_OFFSET UNITYSDK_OFFSET(0x1236F230)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x1236F6A0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_B4F3962066A4D1DE_OFFSET UNITYSDK_OFFSET(0x1236E170)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_CB49AB1B6ADFFD2A_OFFSET UNITYSDK_OFFSET(0x1236E5B0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_D10CC1E11A66A97B_OFFSET UNITYSDK_OFFSET(0x1236F7D0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_DC43559CA57E89E9_OFFSET UNITYSDK_OFFSET(0x1236EDB0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x1236FBB0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_E7F32F87F10DF354_OFFSET UNITYSDK_OFFSET(0x1236F870)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_F52588958242F29E_OFFSET UNITYSDK_OFFSET(0x1236F6F0)
#define CLASS_2_89ECF9BD82F44DA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1236FAD0)
#define CLASS_2_89ECF9BD82F44DA1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1236FC20)
#define CLASS_2_89ECF9BD82F44DA1___LOADANCHORPREFABASYNC_B__13_0_OFFSET UNITYSDK_OFFSET(0x1236FAE0)

inline static constexpr unsigned int Class_2_89ECF9BD82F44DA1_TypeDefinitionIndex = 55871;

class Class_2_89ECF9BD82F44DA1 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::RPG::Client::MapDef* Field_2_2; // 0x10
	::RPG::Client::IAssetOperation* Field_2_9; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>* Field_2_4; // 0x20
	::UnityEngine::Transform* Field_2_5; // 0x28
	::UnityEngine::Object* Field_2_8; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::RPG::Client::MapRotationInfo* Field_2_1; // 0x40
	::Class_1_64D890C466F37235* Field_2_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>* Field_2_3; // 0x50
	::UnityEngine::Transform* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B4F3962066A4D1DE(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_B4F3962066A4D1DE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnchorInfo* Method_2_DC43559CA57E89E9(::System::String* a1)
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_DC43559CA57E89E9_OFFSET))(this, a1);
	}

	::RPG::GameCore::AnchorInfo* Method_2_62408CD28ABE9144(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_62408CD28ABE9144_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_96E3159279ADB646(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_96E3159279ADB646_OFFSET))(this, a1);
	}

	::RPG::GameCore::AnchorInfo* Method_2_AC57D19FD9B7BD91(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_AC57D19FD9B7BD91_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_485502A9571E17C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B0C993B34575B04(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_0B0C993B34575B04_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F52588958242F29E(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_F52588958242F29E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_2_CB49AB1B6ADFFD2A(::RPG::GameCore::RotatableRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RotatableRegion*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_CB49AB1B6ADFFD2A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>* Method_2_D10CC1E11A66A97B(::System::String* a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_D10CC1E11A66A97B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_E7F32F87F10DF354(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_E7F32F87F10DF354_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Boolean __LoadAnchorPrefabAsync_b__13_0(::RPG::Client::IAssetOperation* assetOpt)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1___LOADANCHORPREFABASYNC_B__13_0_OFFSET))(this, assetOpt);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
