#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPScriptableRenderData.h"

namespace RPG::CustomRP { class CustomPostProcessData; }

#define RPG_CUSTOMRP_CRPRENDERERDATABASE_RELOADRES_OFFSET UNITYSDK_OFFSET(0x16A74CA0)
#define RPG_CUSTOMRP_CRPRENDERERDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A75270)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPRendererDataBase_TypeDefinitionIndex = 29472;

	class CRPRendererDataBase : public ::RPG::CustomRP::CRPScriptableRenderData
	{
	public:
		::RPG::CustomRP::CustomPostProcessData* CRPPostProcessData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATABASE__CTOR_OFFSET))(this);
		}

		::System::Void ReloadRes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATABASE_RELOADRES_OFFSET))(this);
		}
	};
}
