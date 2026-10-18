#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_E7C4615647E1695F;
namespace RPG::Client::MechCraft::View { class MechCraftTalentPathControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControl; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_FINDFIRSTREADYPOINT_OFFSET UNITYSDK_OFFSET(0xD66A6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_FINDPOINTCONTROL_OFFSET UNITYSDK_OFFSET(0xD66A3A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_METHOD_5_014E2C044659C9FF_OFFSET UNITYSDK_OFFSET(0xD669E40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_METHOD_5_B341B4A19EAFCF2C_OFFSET UNITYSDK_OFFSET(0xD669DE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_METHOD_5_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xD669DA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD66A8B0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPathControl_TypeDefinitionIndex = 80069;

	class MechCraftTalentPathControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_E7C4615647E1695F* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentPathControlBinder* _Binder; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>* _PointControls; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL__CTOR_OFFSET))(this);
		}

		::Class_1_E7C4615647E1695F* Method_5_F8B73ECE7F883AC1()
		{
			return ((::Class_1_E7C4615647E1695F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_METHOD_5_F8B73ECE7F883AC1_OFFSET))(this);
		}

		::System::Void Method_5_B341B4A19EAFCF2C(::Class_1_E7C4615647E1695F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4615647E1695F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_METHOD_5_B341B4A19EAFCF2C_OFFSET))(this, a1);
		}

		::System::Void Method_5_014E2C044659C9FF(::Class_1_E7C4615647E1695F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4615647E1695F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_METHOD_5_014E2C044659C9FF_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentPointControl* FindPointControl(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentPointControl*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_FINDPOINTCONTROL_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentPointControl* FindFirstReadyPoint()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentPointControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHCONTROL_FINDFIRSTREADYPOINT_OFFSET))(this);
		}
	};
}
