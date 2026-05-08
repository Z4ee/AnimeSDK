#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NameValueArray_1.h"
#include "unitysdk/Struct_2_0E3F30CCF139806D.h"
#include "unitysdk/Struct_2_60DB83E0FA9E5BFC.h"
#include "unitysdk/Struct_2_6402D4A3EAB8BDC8.h"
#include "unitysdk/UnityEngine/Animations/TransformSceneHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Foundation { class NativeMemory; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_PHOTO_SKELETON_GETBONECOUNT_OFFSET UNITYSDK_OFFSET(0x17039F20)
#define MOLEMOLE_PHOTO_SKELETON_GETBONEINDEX_1_OFFSET UNITYSDK_OFFSET(0x1703A240)
#define MOLEMOLE_PHOTO_SKELETON_GETBONEINDEX_OFFSET UNITYSDK_OFFSET(0x17039FC0)
#define MOLEMOLE_PHOTO_SKELETON_GETBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1703A480)
#define MOLEMOLE_PHOTO_SKELETON_GETSKELETON_OFFSET UNITYSDK_OFFSET(0x1703A670)
#define MOLEMOLE_PHOTO_SKELETON_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1703AAE0)
#define MOLEMOLE_PHOTO_SKELETON_METHOD_5_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1703C190)
#define MOLEMOLE_PHOTO_SKELETON_METHOD_5_A55FB24DE3C0D372_OFFSET UNITYSDK_OFFSET(0x1703ABE0)
#define MOLEMOLE_PHOTO_SKELETON_METHOD_5_C168F1882EBAD801_OFFSET UNITYSDK_OFFSET(0x1703AEC0)
#define MOLEMOLE_PHOTO_SKELETON_METHOD_5_CB69C24FD8D4A0A4_OFFSET UNITYSDK_OFFSET(0x1703B260)
#define MOLEMOLE_PHOTO_SKELETON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1703AE20)
#define MOLEMOLE_PHOTO_SKELETON_START_OFFSET UNITYSDK_OFFSET(0x1703A820)
#define MOLEMOLE_PHOTO_SKELETON__CTOR_OFFSET UNITYSDK_OFFSET(0x1703AE70)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int Skeleton_TypeDefinitionIndex = 62377;

	class Skeleton : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* root; // 0x18
		::System::Int32 Field_5_1; // 0x20
		::Foundation::NameValueArray_1<::Struct_2_0E3F30CCF139806D> Field_5_2; // 0x28
		::Foundation::NativeMemory* Field_5_3; // 0x48
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>* Field_5_4; // 0x50
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>* Field_5_5; // 0x58
		::Il2CppArray<::UnityEngine::Transform*>* Field_5_6; // 0x60
		::UnityEngine::Animations::TransformSceneHandle Field_5_7; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON__CTOR_OFFSET))(this);
		}

		::System::Int32 GetBoneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_GETBONECOUNT_OFFSET))(this);
		}

		::Struct_2_6402D4A3EAB8BDC8 GetBoneIndex(::UnityEngine::Transform* a1)
		{
			return ((::Struct_2_6402D4A3EAB8BDC8(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_GETBONEINDEX_OFFSET))(this, a1);
		}

		::Struct_2_6402D4A3EAB8BDC8 GetBoneIndex_1(::System::String* a1)
		{
			return ((::Struct_2_6402D4A3EAB8BDC8(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_GETBONEINDEX_1_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetBoneTransform(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_GETBONETRANSFORM_OFFSET))(this, a1);
		}

		::Struct_2_60DB83E0FA9E5BFC GetSkeleton()
		{
			return ((::Struct_2_60DB83E0FA9E5BFC(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_GETSKELETON_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Method_5_C168F1882EBAD801(::Il2CppArray<::UnityEngine::Transform*>*& a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>*& a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>*& a3, ::UnityEngine::Animator* a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>*&, ::UnityEngine::Animator*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_METHOD_5_C168F1882EBAD801_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_CB69C24FD8D4A0A4(::Foundation::NameValueArray_1<::Struct_2_0E3F30CCF139806D>& a1, ::Foundation::NativeMemory*& a2, ::UnityEngine::Animator* a3, ::System::String*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::NameValueArray_1<::Struct_2_0E3F30CCF139806D>&, ::Foundation::NativeMemory*&, ::UnityEngine::Animator*, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_METHOD_5_CB69C24FD8D4A0A4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_5_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_METHOD_5_4DA6D4A624E42CAB_OFFSET))(this);
		}

		::System::Void Method_5_A55FB24DE3C0D372(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_METHOD_5_A55FB24DE3C0D372_OFFSET))(this, a1);
		}
	};
}
