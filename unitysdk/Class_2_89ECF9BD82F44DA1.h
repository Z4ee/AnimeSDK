#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_305;
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

#define CLASS_2_89ECF9BD82F44DA1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0041E0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x1A003550)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_3559476C7C86165D_OFFSET UNITYSDK_OFFSET(0x1A004580)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A0049B0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_62408CD28ABE9144_OFFSET UNITYSDK_OFFSET(0x1A0043B0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_898C9A3FDCAD7F6C_OFFSET UNITYSDK_OFFSET(0x1A004910)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x1A003940)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_AC57D19FD9B7BD91_OFFSET UNITYSDK_OFFSET(0x1A0046A0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x1A004AE0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_B318062D1273AA20_OFFSET UNITYSDK_OFFSET(0x1A004290)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_B4F3962066A4D1DE_OFFSET UNITYSDK_OFFSET(0x1A003360)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x1A004A10)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_D10CC1E11A66A97B_OFFSET UNITYSDK_OFFSET(0x1A004C60)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_E74FF508BE0BE487_OFFSET UNITYSDK_OFFSET(0x1A0048A0)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_E7F32F87F10DF354_OFFSET UNITYSDK_OFFSET(0x1A004D00)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_F1F0265991A5CA33_OFFSET UNITYSDK_OFFSET(0x1A003770)
#define CLASS_2_89ECF9BD82F44DA1_METHOD_2_F52588958242F29E_OFFSET UNITYSDK_OFFSET(0x1A004B30)
#define CLASS_2_89ECF9BD82F44DA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A004F50)
#define CLASS_2_89ECF9BD82F44DA1___LOADANCHORPREFABASYNC_B__13_0_OFFSET UNITYSDK_OFFSET(0x1A004F60)

inline static constexpr unsigned int Class_2_89ECF9BD82F44DA1_TypeDefinitionIndex = 60693;

class Class_2_89ECF9BD82F44DA1 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>* GAIBNIMFGIG; // 0x10
	::UnityEngine::Transform* KJFFDOFKNEG; // 0x18
	::Class_1_64D890C466F37235* KGCNPIEDOCA; // 0x20
	::UnityEngine::Transform* PKBIFDKKOEN; // 0x28
	::UnityEngine::GameObject* BGBBKDAONKM; // 0x30
	::RPG::Client::IAssetOperation* DHBHOJLOIKL; // 0x38
	::UnityEngine::Object* LHFJFAIKNEK; // 0x40
	::RPG::Client::MapDef* KKKADHHBMLD; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>* JKMFFFPBIFF; // 0x50
	::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x58

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

	::RPG::GameCore::AnchorInfo* Method_2_B318062D1273AA20(::System::String* a1)
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_B318062D1273AA20_OFFSET))(this, a1);
	}

	::RPG::GameCore::AnchorInfo* Method_2_62408CD28ABE9144(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_62408CD28ABE9144_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3559476C7C86165D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_3559476C7C86165D_OFFSET))(this, a1);
	}

	::RPG::GameCore::AnchorInfo* Method_2_AC57D19FD9B7BD91(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
	{
		return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_AC57D19FD9B7BD91_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E74FF508BE0BE487(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_E74FF508BE0BE487_OFFSET))(this, a1);
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

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_F1F0265991A5CA33(::RPG::GameCore::RotatableRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RotatableRegion*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_F1F0265991A5CA33_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>* Method_2_D10CC1E11A66A97B(::System::String* a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_305*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1_METHOD_2_D10CC1E11A66A97B_OFFSET))(this, a1);
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

	::System::Boolean __LoadAnchorPrefabAsync_b__13_0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_89ECF9BD82F44DA1___LOADANCHORPREFABASYNC_B__13_0_OFFSET))(this, a1);
	}
};
