#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentPointState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_GET_ACTIVATEDURATION_OFFSET UNITYSDK_OFFSET(0xD661820)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_GET_ANCHORAREA_OFFSET UNITYSDK_OFFSET(0xD661690)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_08CB19092CEAC042_OFFSET UNITYSDK_OFFSET(0xD660AD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_2112A4A828C06283_OFFSET UNITYSDK_OFFSET(0xD661300)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xD6637E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_65C67DD2A6BC2009_OFFSET UNITYSDK_OFFSET(0xD660E10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_6C477A26E3C363F4_OFFSET UNITYSDK_OFFSET(0xD663010)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xD663540)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_8E31E232A132CDE3_OFFSET UNITYSDK_OFFSET(0xD662600)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_BE4747FD3700474C_OFFSET UNITYSDK_OFFSET(0xD661A70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_D38BD30D40B87653_OFFSET UNITYSDK_OFFSET(0xD661530)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD6619E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0xD6638E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD663870)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPointControl_TypeDefinitionIndex = 80070;

	class MechCraftTalentPointControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_OGEHBDKMGFE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MechCraftTalentPointControl_TypeDefinitionIndex)->GetStaticField(0x11B70);
		}
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentPointControlBinder* _Binder; // 0x20
		::System::String* _StateDefault; // 0x28
		::System::String* _StateActive; // 0x30
		::System::String* _StateFinish; // 0x38
		::System::String* _StateLocked; // 0x40
		::System::Single _SfxStartTime; // 0x48
		::System::String* _SfxEventName; // 0x50
		::System::Nullable_1<::System::Boolean> HGMADJOAKFF; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL__CCTOR_OFFSET))();
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* Method_5_65C67DD2A6BC2009()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_65C67DD2A6BC2009_OFFSET))(this);
		}

		::System::Void Method_5_08CB19092CEAC042(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_08CB19092CEAC042_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_AnchorArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_GET_ANCHORAREA_OFFSET))(this);
		}

		::System::Single get_ActivateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_GET_ACTIVATEDURATION_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_D38BD30D40B87653(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_D38BD30D40B87653_OFFSET))(this, a1);
		}

		::System::Void Method_5_2112A4A828C06283(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_2112A4A828C06283_OFFSET))(this, a1);
		}

		::System::Void Method_5_6C477A26E3C363F4(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_6C477A26E3C363F4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_BE4747FD3700474C(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_BE4747FD3700474C_OFFSET))(this, a1);
		}

		::System::Void Method_5_8E31E232A132CDE3(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_8E31E232A132CDE3_OFFSET))(this, a1);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPOINTCONTROL_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}
	};
}
