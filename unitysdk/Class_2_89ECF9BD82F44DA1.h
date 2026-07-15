#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_298;
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

#define CLASS_2_89ECF9BD82F44DA1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C7DD20)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17C7E530)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0x17C7E420)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x17C7D450)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_62408CD28ABE9144_OFFSET UNITYSDK_OFFSET(0x17C7DF00)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_898C9A3FDCAD7F6C_OFFSET UNITYSDK_OFFSET(0x17C7E490)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_8A7D3BDBDCD501E7_OFFSET UNITYSDK_OFFSET(0x17C7CE10)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x17C7D000)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_96E3159279ADB646_OFFSET UNITYSDK_OFFSET(0x17C7E0D0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_9AB622480E31F6C0_OFFSET UNITYSDK_OFFSET(0x17C7D250)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_AC57D19FD9B7BD91_OFFSET UNITYSDK_OFFSET(0x17C7E220)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x17C7E670)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_B318062D1273AA20_OFFSET UNITYSDK_OFFSET(0x17C7DDE0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x17C7E590)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_D10CC1E11A66A97B_OFFSET UNITYSDK_OFFSET(0x17C7E7F0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_E7F32F87F10DF354_OFFSET UNITYSDK_OFFSET(0x17C7E890)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_F52588958242F29E_OFFSET UNITYSDK_OFFSET(0x17C7E6C0)
#define CLASS_2_89ECF9BD82F44DA1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C7EAE0)
#define CLASS_2_89ECF9BD82F44DA1___LOADANCHORPREFABASYNC_B__13_0_OFFSET UNITYSDK_OFFSET(0x17C7EAF0)

inline static constexpr unsigned int Class_2_89ECF9BD82F44DA1_TypeDefinitionIndex = 57872;

class Class_2_89ECF9BD82F44DA1 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::Class_1_64D890C466F37235* Field_2_0; // 0x10
	::UnityEngine::Transform* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>* Field_2_2; // 0x20
	::RPG::Client::MapDef* Field_2_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>* Field_2_4; // 0x30
	::UnityEngine::Transform* Field_2_5; // 0x38
	::UnityEngine::Object* Field_2_6; // 0x40
	::UnityEngine::GameObject* Field_2_7; // 0x48
	::RPG::Client::IAssetOperation* Field_2_8; // 0x50
	::RPG::Client::MapRotationInfo* Field_2_9; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8A7D3BDBDCD501E7(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_8A7D3BDBDCD501E7_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnchorInfo* Method_2_B318062D1273AA20(::System::String* a1)
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_B318062D1273AA20_OFFSET))(this, a1);
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

	::System::Void Method_2_898C9A3FDCAD7F6C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_898C9A3FDCAD7F6C_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F52588958242F29E(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_F52588958242F29E_OFFSET))(this, a1);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_2_9AB622480E31F6C0(::RPG::GameCore::RotatableRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RotatableRegion*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_9AB622480E31F6C0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>* Method_2_D10CC1E11A66A97B(::System::String* a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_298*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_D10CC1E11A66A97B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_E7F32F87F10DF354(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_E7F32F87F10DF354_OFFSET))(this, a1);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Boolean __LoadAnchorPrefabAsync_b__13_0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1___LOADANCHORPREFABASYNC_B__13_0_OFFSET))(this, a1);
	}
};
