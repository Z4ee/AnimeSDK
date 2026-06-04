#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPGTools::Timeline { class ActiveVirtualCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_GET_STREAMINGSOURCEINDEX_OFFSET UNITYSDK_OFFSET(0xCFD29E0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_2A86A6EF98F53C91_OFFSET UNITYSDK_OFFSET(0xCFD3A50)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_45340C1DF3AEADA4_OFFSET UNITYSDK_OFFSET(0xCFD3430)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_47964386227B3C92_OFFSET UNITYSDK_OFFSET(0xCFD3D40)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_4DF9D318A497852F_OFFSET UNITYSDK_OFFSET(0xCFD3AD0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCFD3DF0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0xCFD3680)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_6E3DEABB1FC191BB_OFFSET UNITYSDK_OFFSET(0xCFD3600)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_908A3655CE42CB9A_OFFSET UNITYSDK_OFFSET(0xCFD31A0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_A65AC190C0D0526C_OFFSET UNITYSDK_OFFSET(0xCFD3050)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_C31A82607DD7D975_OFFSET UNITYSDK_OFFSET(0xCFD2E20)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0xCFD3380)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0xCFD2A00)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_SET_STREAMINGSOURCEINDEX_OFFSET UNITYSDK_OFFSET(0xCFD29F0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD3DE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ActiveVirtualCameraBehaviour_TypeDefinitionIndex = 45129;

	class ActiveVirtualCameraBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		// static const ::System::Single NEAR_PLANE; // 0x0
		// static const ::System::Single FAR_PLANE; // 0x0
		::RPGTools::Timeline::ActiveVirtualCameraConfig* CameraConfig; // 0x20
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x28
		::System::Int32 _StreamingSourceIndex_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Int32 get_StreamingSourceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_GET_STREAMINGSOURCEINDEX_OFFSET))(this);
		}

		::System::Void set_StreamingSourceIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_SET_STREAMINGSOURCEINDEX_OFFSET))(this, a1);
		}

		::System::Void Method_3_DF3C54A5ADEABAF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_DF3C54A5ADEABAF1_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* Method_3_A65AC190C0D0526C()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_A65AC190C0D0526C_OFFSET))(this);
		}

		::System::Void Method_3_2A86A6EF98F53C91(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_2A86A6EF98F53C91_OFFSET))(this, a1);
		}

		::System::Void Method_3_4DF9D318A497852F(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_4DF9D318A497852F_OFFSET))(this, a1);
		}

		::System::Void Method_3_5EBCF276C230582C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_5EBCF276C230582C_OFFSET))(this);
		}

		::System::Void Method_3_908A3655CE42CB9A(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_908A3655CE42CB9A_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>* Method_3_47964386227B3C92()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_47964386227B3C92_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_3_C31A82607DD7D975(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_C31A82607DD7D975_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Camera* Method_3_6E3DEABB1FC191BB()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_6E3DEABB1FC191BB_OFFSET))(this);
		}

		::System::Void Method_3_DEAC86EB2AD5D389()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_DEAC86EB2AD5D389_OFFSET))(this);
		}

		::System::Void Method_3_45340C1DF3AEADA4(::System::String* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_45340C1DF3AEADA4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
