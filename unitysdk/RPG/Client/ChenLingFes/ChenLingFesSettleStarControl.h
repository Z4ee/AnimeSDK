#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesSettleStarViewModel; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB624D60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB624DD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB624C10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB624AF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB624E60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB624E00)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesSettleStarControl_TypeDefinitionIndex = 74004;

	class ChenLingFesSettleStarControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _NodeFinished; // 0x38
		::UnityEngine::Transform* _NodeNotFinished; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesSettleStarViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesSettleStarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESSETTLESTARCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
