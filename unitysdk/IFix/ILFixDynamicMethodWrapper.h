#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MeshDecimator/BoneWeight.h"
#include "unitysdk/MeshDecimator/Math/Vector2.h"
#include "unitysdk/MeshDecimator/Math/Vector3.h"
#include "unitysdk/MeshDecimator/Math/Vector3d.h"
#include "unitysdk/MeshDecimator/Math/Vector4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoneWeight.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/StreamInClipInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace IFix::Core { class VirtualMachine; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A0C0D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A0A4E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_0_OFFSET UNITYSDK_OFFSET(0x11A0A4F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_10_OFFSET UNITYSDK_OFFSET(0x11A07940)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_11_OFFSET UNITYSDK_OFFSET(0x11A0A6D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_12_OFFSET UNITYSDK_OFFSET(0x11A05920)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_13_OFFSET UNITYSDK_OFFSET(0x11A06380)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_14_OFFSET UNITYSDK_OFFSET(0x11A0A810)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_15_OFFSET UNITYSDK_OFFSET(0x11A0A9D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_16_OFFSET UNITYSDK_OFFSET(0x11A0ABD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_17_OFFSET UNITYSDK_OFFSET(0x11A0ADF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_18_OFFSET UNITYSDK_OFFSET(0x11A0B000)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_19_OFFSET UNITYSDK_OFFSET(0x11A0B1F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_1_OFFSET UNITYSDK_OFFSET(0x11A04130)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_20_OFFSET UNITYSDK_OFFSET(0x11A0B410)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_21_OFFSET UNITYSDK_OFFSET(0x11A0B650)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_22_OFFSET UNITYSDK_OFFSET(0x11A0B860)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_23_OFFSET UNITYSDK_OFFSET(0x11A0B9B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_24_OFFSET UNITYSDK_OFFSET(0x11A0BB00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_25_OFFSET UNITYSDK_OFFSET(0x11A0BC90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_26_OFFSET UNITYSDK_OFFSET(0x11A0BDC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_27_OFFSET UNITYSDK_OFFSET(0x11A0BF50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_2_OFFSET UNITYSDK_OFFSET(0x11A00280)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_3_OFFSET UNITYSDK_OFFSET(0x11A04A40)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_4_OFFSET UNITYSDK_OFFSET(0x11A03D40)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_5_OFFSET UNITYSDK_OFFSET(0x11A04670)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_6_OFFSET UNITYSDK_OFFSET(0x11A04840)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_7_OFFSET UNITYSDK_OFFSET(0x11A044B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_8_OFFSET UNITYSDK_OFFSET(0x11A03E90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_9_OFFSET UNITYSDK_OFFSET(0x11A04280)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_TypeDefinitionIndex = 91483;

	class ILFixDynamicMethodWrapper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_TypeDefinitionIndex)->GetStaticField(0x4F310);
		}
		::System::Object* anonObj; // 0x10
		::IFix::Core::VirtualMachine* virtualMachine; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__CCTOR_OFFSET))();
		}

		::System::Int32 _GW_0(::UnityEngine::StreamInClipInfo P0, ::UnityEngine::StreamInClipInfo P1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::StreamInClipInfo, ::UnityEngine::StreamInClipInfo))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_0_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_1(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_1_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_2(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_2_OFFSET))(this, P0);
		}

		::System::Object* _GW_3(::System::Object* P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_3_OFFSET))(this, P0);
		}

		::System::Single _GW_4(::System::Object* P0)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_4_OFFSET))(this, P0);
		}

		::System::Void _GW_5(::System::Object* P0, ::UnityEngine::Rect P1, ::UnityEngine::Color P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Rect, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_5_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_6(::System::UInt64 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_6_OFFSET))(this, P0);
		}

		::System::Boolean _GW_7(::System::Object* P0, ::UnityEngine::Rect P1, ::System::Object* P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::UnityEngine::Rect, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_7_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_8(::System::Object* P0, ::UnityEngine::Rect P1, ::System::UInt64 P2, ::System::UInt64 P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Rect, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_8_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Object* _GW_9(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_9_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 _GW_10(::System::Object* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_10_OFFSET))(this, P0);
		}

		::System::Boolean _GW_11()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_11_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _GW_12(::System::Object* P0)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_12_OFFSET))(this, P0);
		}

		::System::Void _GW_13(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_13_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_14(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Int32 P3, ::System::Object* P4, ::System::Object* P5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_14_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Object* _GW_15(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_15_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_16(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_16_OFFSET))(this, P0, P1);
		}

		::MeshDecimator::Math::Vector3d _GW_17(::UnityEngine::Vector3 P0)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_17_OFFSET))(this, P0);
		}

		::MeshDecimator::Math::Vector2 _GW_18(::UnityEngine::Vector2 P0)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_18_OFFSET))(this, P0);
		}

		::MeshDecimator::Math::Vector4 _GW_19(::UnityEngine::Color P0)
		{
			return ((::MeshDecimator::Math::Vector4(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_19_OFFSET))(this, P0);
		}

		::MeshDecimator::BoneWeight _GW_20(::UnityEngine::BoneWeight P0)
		{
			return ((::MeshDecimator::BoneWeight(*)(::PVOID, ::UnityEngine::BoneWeight))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_20_OFFSET))(this, P0);
		}

		::MeshDecimator::Math::Vector3 _GW_21(::UnityEngine::Vector3 P0)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_21_OFFSET))(this, P0);
		}

		::System::Boolean _GW_22(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_22_OFFSET))(this, P0);
		}

		::System::Boolean _GW_23(::System::Reflection::MethodInfo* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_23_OFFSET))(this, P0);
		}

		::System::Boolean _GW_24(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_24_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_25()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_25_OFFSET))(this);
		}

		::System::Void _GW_26(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_26_OFFSET))(this, P0);
		}

		::System::Void _GW_27(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER__GW_27_OFFSET))(this, P0);
		}
	};
}
