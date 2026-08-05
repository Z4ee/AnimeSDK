#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CE3B674D22BBFC73.h"
#include "unitysdk/MoleMole/SceneObject_MainCityCurveMove.h"
#include "unitysdk/MoleMole/SceneObject_MainCityCurveMove_Animation_FloorInfo.h"
#include "unitysdk/MoleMole/SceneObject_MainCityCurveMove_Animation_NpcActionStateInfo.h"
#include "unitysdk/MoleMole/SceneObject_MainCityCurveMove_Animation_SceneObjActionStateInfo.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_COLLIDEREVENTMODE_OFFSET UNITYSDK_OFFSET(0x14A1ECE0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_FLOORINFOLIST_OFFSET UNITYSDK_OFFSET(0x14A1ECB0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_NPCACTIONSTATEINFOLIST_OFFSET UNITYSDK_OFFSET(0x14A1ECC0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_SCENEOBJACTIONSTATEINFOLIST_OFFSET UNITYSDK_OFFSET(0x14A1ECD0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1ECF0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObject_MainCityCurveMove_Animation_TypeDefinitionIndex = 43243;

	class SceneObject_MainCityCurveMove_Animation : public ::MoleMole::SceneObject_MainCityCurveMove
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_SceneObjActionStateInfo>* sceneObjActionStateInfoList; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_NpcActionStateInfo>* npcActionStateInfoList; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_FloorInfo>* floorInfos; // 0x38
		::Enum_3_CE3B674D22BBFC73 colliderEventMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_FloorInfo>* get_FloorInfoList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_FloorInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_FLOORINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_NpcActionStateInfo>* get_NpcActionStateInfoList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_NpcActionStateInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_NPCACTIONSTATEINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_SceneObjActionStateInfo>* get_SceneObjActionStateInfoList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::SceneObject_MainCityCurveMove_Animation_SceneObjActionStateInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_SCENEOBJACTIONSTATEINFOLIST_OFFSET))(this);
		}

		::Enum_3_CE3B674D22BBFC73 get_ColliderEventMode()
		{
			return ((::Enum_3_CE3B674D22BBFC73(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_COLLIDEREVENTMODE_OFFSET))(this);
		}
	};
}
