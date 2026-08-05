#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E9BD7884B1185A88;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISummerTideTreasureInLevelItemWidgetController_Data; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_GETANIMATION_OFFSET UNITYSDK_OFFSET(0x19145B10)
#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_GETWORLDCENTER_OFFSET UNITYSDK_OFFSET(0x19145D60)
#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_GET_STAR_OFFSET UNITYSDK_OFFSET(0x191458A0)
#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19145640)
#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x191456B0)
#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19145750)
#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_PLAYRESULTPERFORMCONVERT_OFFSET UNITYSDK_OFFSET(0x19145900)
#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19146090)
#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x191460A0)
#define MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19146140)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureInLevelItemWidgetController_TypeDefinitionIndex = 60460;

	class UISummerTideTreasureInLevelItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data* _currentData; // 0x2F0
		::UnityEngine::Animation* _animation; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_E9BD7884B1185A88* get__viewModel()
		{
			return ((::Class_2_E9BD7884B1185A88*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Int32 get_Star()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_GET_STAR_OFFSET))(this);
		}

		::System::Void PlayResultPerformConvert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_PLAYRESULTPERFORMCONVERT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetWorldCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_GETWORLDCENTER_OFFSET))(this);
		}

		::UnityEngine::Animation* GetAnimation()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER_GETANIMATION_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREINLEVELITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
