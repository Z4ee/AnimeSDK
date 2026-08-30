#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_2_AFEA9649AE987F13;
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_AWAKE_OFFSET UNITYSDK_OFFSET(0xCE284B0)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xCE28990)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_LINERENDERERS_OFFSET UNITYSDK_OFFSET(0xCE28970)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_XOYRENDERER_OFFSET UNITYSDK_OFFSET(0xCE288F0)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_XOZRENDERER_OFFSET UNITYSDK_OFFSET(0xCE288D0)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_XYZOFFSET_OFFSET UNITYSDK_OFFSET(0xCE286C0)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_XYZROTATION_OFFSET UNITYSDK_OFFSET(0xCE28760)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_YOZRENDERER_OFFSET UNITYSDK_OFFSET(0xCE28910)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCE285E0)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_SET_LINERENDERERS_OFFSET UNITYSDK_OFFSET(0xCE28980)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_SET_XOYRENDERER_OFFSET UNITYSDK_OFFSET(0xCE28900)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_SET_XOZRENDERER_OFFSET UNITYSDK_OFFSET(0xCE288E0)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_SET_YOZRENDERER_OFFSET UNITYSDK_OFFSET(0xCE28920)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_START_OFFSET UNITYSDK_OFFSET(0xCE28580)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME_UPDATE_OFFSET UNITYSDK_OFFSET(0xCE28670)
#define RPG_CLIENT_EFFECT_WORLDWIREFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0xCE289A0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_WorldWireFrame_TypeDefinitionIndex = 70551;

	class Effect_WorldWireFrame : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::LineRenderer* _XOZRenderer; // 0x18
		::UnityEngine::LineRenderer* _XOYRenderer; // 0x20
		::UnityEngine::LineRenderer* _YOZRenderer; // 0x28
		::Il2CppArray<::UnityEngine::LineRenderer*>* _LineRenderers; // 0x30
		::Class_2_AFEA9649AE987F13* KADDKEGNCHE; // 0x38
		::UnityEngine::Material* LineMaterial; // 0x40
		::System::Single LineSize; // 0x48
		::UnityEngine::Vector3Int XYZDivide; // 0x4C
		::UnityEngine::Vector3 XYZSize; // 0x58
		::UnityEngine::Vector3 FadePivot; // 0x64
		::UnityEngine::Color WireColor; // 0x70
		::System::Single WireRange; // 0x80
		::System::Single RangeStart; // 0x84
		::System::Single RangeEnd; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_XYZOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_XYZOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_XYZRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_XYZROTATION_OFFSET))(this);
		}

		::UnityEngine::LineRenderer* get_XOZRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_XOZRENDERER_OFFSET))(this);
		}

		::System::Void set_XOZRenderer(::UnityEngine::LineRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_SET_XOZRENDERER_OFFSET))(this, a1);
		}

		::UnityEngine::LineRenderer* get_XOYRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_XOYRENDERER_OFFSET))(this);
		}

		::System::Void set_XOYRenderer(::UnityEngine::LineRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_SET_XOYRENDERER_OFFSET))(this, a1);
		}

		::UnityEngine::LineRenderer* get_YOZRenderer()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_YOZRENDERER_OFFSET))(this);
		}

		::System::Void set_YOZRenderer(::UnityEngine::LineRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_SET_YOZRENDERER_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::LineRenderer*>* get_LineRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::LineRenderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_LINERENDERERS_OFFSET))(this);
		}

		::System::Void set_LineRenderers(::Il2CppArray<::UnityEngine::LineRenderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::LineRenderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_SET_LINERENDERERS_OFFSET))(this, a1);
		}

		::Class_2_AFEA9649AE987F13* get_Behavior()
		{
			return ((::Class_2_AFEA9649AE987F13*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WORLDWIREFRAME_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
