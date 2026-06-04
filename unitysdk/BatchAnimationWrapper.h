#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BatchAnimationCustomColor.h"
#include "unitysdk/BatchAnimationWrapper_TargetMove.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class BatchAnimationClipGroup;
class BatchAnimationPlayableGroup;
class PartVariantConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONWRAPPER_APPLYCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x18E9E6C0)
#define BATCHANIMATIONWRAPPER_CREATE_OFFSET UNITYSDK_OFFSET(0x18E9D7E0)
#define BATCHANIMATIONWRAPPER_GETORCREATORBATCHANIMROOT_OFFSET UNITYSDK_OFFSET(0x18E9CD90)
#define BATCHANIMATIONWRAPPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18E9F870)
#define BATCHANIMATIONWRAPPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18E9D7D0)
#define BATCHANIMATIONWRAPPER_PLAY_OFFSET UNITYSDK_OFFSET(0x18E9E350)
#define BATCHANIMATIONWRAPPER_RESETPART_1_OFFSET UNITYSDK_OFFSET(0x18E9F910)
#define BATCHANIMATIONWRAPPER_RESETPART_OFFSET UNITYSDK_OFFSET(0x18E9F8A0)
#define BATCHANIMATIONWRAPPER_RESET_OFFSET UNITYSDK_OFFSET(0x18E9F220)
#define BATCHANIMATIONWRAPPER_SETUPRANDOMPART_OFFSET UNITYSDK_OFFSET(0x18E9E150)
#define BATCHANIMATIONWRAPPER_SETUPSHADOW_OFFSET UNITYSDK_OFFSET(0x18E9E0B0)
#define BATCHANIMATIONWRAPPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18E9F860)
#define BATCHANIMATIONWRAPPER__BUILDPOINTSEDGE_OFFSET UNITYSDK_OFFSET(0x18E9D3E0)
#define BATCHANIMATIONWRAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E9FC50)
#define BATCHANIMATIONWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9FA20)
#define BATCHANIMATIONWRAPPER__GETSTARTPOS_1_OFFSET UNITYSDK_OFFSET(0x18E9D190)
#define BATCHANIMATIONWRAPPER__GETSTARTPOS_OFFSET UNITYSDK_OFFSET(0x18E9CF40)

inline static constexpr unsigned int BatchAnimationWrapper_TypeDefinitionIndex = 35144;

class BatchAnimationWrapper : public ::UnityEngine::MonoBehaviour
{
public:
	static ::Il2CppArray<::UnityEngine::Quaternion>** StaticGet__rotArray()
	{
		return (::Il2CppArray<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(BatchAnimationWrapper_TypeDefinitionIndex)->GetStaticField(0x605F0);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__posArray()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BatchAnimationWrapper_TypeDefinitionIndex)->GetStaticField(0x605F8);
	}
	static ::UnityEngine::Transform** StaticGet_s_BatchAnimationRootCache()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(BatchAnimationWrapper_TypeDefinitionIndex)->GetStaticField(0x60600);
	}
	::UnityEngine::Rendering::BatchAnimation* batchAnimation; // 0x18
	::System::Int32 count; // 0x20
	::System::Int32 range; // 0x24
	::System::Boolean partVariant; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::BatchAnimationInstance*>* instances; // 0x30
	::BatchAnimationPlayableGroup* playableGroup; // 0x38
	::BatchAnimationClipGroup* bakeData; // 0x40
	::System::Collections::Generic::List_1<::PartVariantConfig*>* partVariants; // 0x48
	::System::Collections::Generic::List_1<::BatchAnimationCustomColor>* customColorList; // 0x50
	::System::Int32 copyMatIndex; // 0x58
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> customColorData; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* points; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _pointsEdgeDirs; // 0x78
	::System::Collections::Generic::List_1<::BatchAnimationWrapper_TargetMove>* instanceMove; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Transform* GetOrCreatorBatchAnimRoot()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_GETORCREATORBATCHANIMROOT_OFFSET))();
	}

	::System::Void _GetStartPos(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER__GETSTARTPOS_OFFSET))(this, a1, a2);
	}

	::System::Void _GetStartPos_1(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER__GETSTARTPOS_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _BuildPointsEdge()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER__BUILDPOINTSEDGE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_ONENABLE_OFFSET))(this);
	}

	::System::Void Create()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_CREATE_OFFSET))(this);
	}

	::System::Void Play()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_PLAY_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_RESET_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_UPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_ONDESTROY_OFFSET))(this);
	}

	static ::System::Void ApplyCustomColor(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Collections::Generic::List_1<::BatchAnimationCustomColor>* a2, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::System::Collections::Generic::List_1<::BatchAnimationCustomColor>*, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>&))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_APPLYCUSTOMCOLOR_OFFSET))(a1, a2, a3);
	}

	static ::System::Void SetupShadow(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_SETUPSHADOW_OFFSET))(a1, a2);
	}

	static ::System::Void SetupRandomPart(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Collections::Generic::List_1<::PartVariantConfig*>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::System::Collections::Generic::List_1<::PartVariantConfig*>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_SETUPRANDOMPART_OFFSET))(a1, a2);
	}

	static ::System::Void ResetPart(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BatchAnimationInstance* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_RESETPART_OFFSET))(a1, a2);
	}

	static ::System::Void ResetPart_1(::UnityEngine::Rendering::BatchAnimation* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::BatchAnimation*))((::PBYTE)hIl2Cpp + BATCHANIMATIONWRAPPER_RESETPART_1_OFFSET))(a1);
	}
};
