#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CE3B674D22BBFC73.h"
#include "unitysdk/MoleMole/SceneObject_MainCityCurveMove_Animation_FloorInfo.h"
#include "unitysdk/MoleMole/SceneObject_MainCityCurveMove_Animation_NpcActionStateInfo.h"
#include "unitysdk/MoleMole/SceneObject_MainCityCurveMove_Animation_SceneObjActionStateInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_COLLIDEREVENTMODE_OFFSET UNITYSDK_OFFSET(0x145010B0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_FLOORINFOLIST_OFFSET UNITYSDK_OFFSET(0x14500FC0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_NPCACTIONSTATEINFOLIST_OFFSET UNITYSDK_OFFSET(0x14500FB0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_SCENEOBJACTIONSTATEINFOLIST_OFFSET UNITYSDK_OFFSET(0x14500FA0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x145010C0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObject_MainCityCurveMove_TypeDefinitionIndex = 69697;

	class SceneObject_MainCityCurveMove : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 SelfAreaId; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* AreaIdList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_SceneObjActionStateInfo>* get_SceneObjActionStateInfoList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_SceneObjActionStateInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_SCENEOBJACTIONSTATEINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_NpcActionStateInfo>* get_NpcActionStateInfoList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_NpcActionStateInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_NPCACTIONSTATEINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_FloorInfo>* get_FloorInfoList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_FloorInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_FLOORINFOLIST_OFFSET))(this);
		}

		::Enum_3_CE3B674D22BBFC73 get_ColliderEventMode()
		{
			return ((::Enum_3_CE3B674D22BBFC73(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_COLLIDEREVENTMODE_OFFSET))(this);
		}
	};
}
