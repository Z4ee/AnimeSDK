#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client::MechCraft::View { class MechCraftAttributeRadarDimensionControl; }
namespace RPG::Client::MechCraft::View { class MechCraftRadarChartControl; }
namespace RPG::Client::MechCraft::View { class MechCraftRadarVerticesControl; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARCHARTCURRENT_OFFSET UNITYSDK_OFFSET(0xD5E4870)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARCHARTTARGET_OFFSET UNITYSDK_OFFSET(0xD5E4710)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARVERTICESCURRENT_OFFSET UNITYSDK_OFFSET(0xD5E4920)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARVERTICESTARGET_OFFSET UNITYSDK_OFFSET(0xD5E47C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_VFXCHANGE1_OFFSET UNITYSDK_OFFSET(0xD5E1550)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_VFXCHANGE2_OFFSET UNITYSDK_OFFSET(0xD5E1600)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_METHOD_2_DD73FFBFA5B8F775_OFFSET UNITYSDK_OFFSET(0xD5E23F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5E4F20)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftAttributeRadarControlBinder_TypeDefinitionIndex = 79805;

	class MechCraftAttributeRadarControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftRadarChartControl* get_RadarChartCurrent()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftRadarChartControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARCHARTCURRENT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftRadarVerticesControl* get_RadarVerticesCurrent()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftRadarVerticesControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARVERTICESCURRENT_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftRadarChartControl* get_RadarChartTarget()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftRadarChartControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARCHARTTARGET_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftRadarVerticesControl* get_RadarVerticesTarget()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftRadarVerticesControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_RADARVERTICESTARGET_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_VfxChange1()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_VFXCHANGE1_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_VfxChange2()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_GET_VFXCHANGE2_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftAttributeRadarDimensionControl* Method_2_DD73FFBFA5B8F775(::System::Int32 a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftAttributeRadarDimensionControl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARCONTROLBINDER_METHOD_2_DD73FFBFA5B8F775_OFFSET))(this, a1);
		}
	};
}
