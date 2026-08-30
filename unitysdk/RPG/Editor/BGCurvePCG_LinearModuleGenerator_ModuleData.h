#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963;
namespace RPG::Editor { class BGCurvePCG_LinearModuleGenerator_ItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_MODULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16842D60)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_LinearModuleGenerator_ModuleData_TypeDefinitionIndex = 52314;

	class BGCurvePCG_LinearModuleGenerator_ModuleData : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* Mesh; // 0x10
		::UnityEngine::Material* Mat; // 0x18
		::UnityEngine::Vector3 ModuleSize; // 0x20
		::UnityEngine::Vector3 Transform; // 0x2C
		::UnityEngine::Bounds Bounds; // 0x38
		::UnityEngine::Color GizmoColor; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Ranges; // 0x60
		::System::Boolean IfNeedStartModule; // 0x68
		::UnityEngine::GameObject* StartModule; // 0x70
		::System::Boolean IfNeedEndModule; // 0x78
		::UnityEngine::GameObject* EndModule; // 0x80
		::System::Collections::Generic::List_1<::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ItemData*>* ItemDatas; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* GizmoMeshs; // 0x90
		::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*>* StartScatterAnchors; // 0x98
		::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*>* EndScatterAnchors; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_MODULEDATA__CTOR_OFFSET))(this);
		}
	};
}
