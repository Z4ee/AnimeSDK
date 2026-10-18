#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftTalentDetailState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_680ABE7B0CC9E97F;
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentDetailControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControl; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentDetailViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD65D970)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_GET_POINTGETTER_OFFSET UNITYSDK_OFFSET(0xD65D950)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_2551ADBDDEB1F315_OFFSET UNITYSDK_OFFSET(0xD65DA30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_357E890EA185370E_OFFSET UNITYSDK_OFFSET(0xD65F5F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_6D85C48579656B24_OFFSET UNITYSDK_OFFSET(0xD65FF70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_74A119856660FF82_OFFSET UNITYSDK_OFFSET(0xD65DB50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_D1A914AF101812C8_OFFSET UNITYSDK_OFFSET(0xD65DCB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_DA2EBDD187EE2416_OFFSET UNITYSDK_OFFSET(0xD65F090)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD65D9B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_SET_POINTGETTER_OFFSET UNITYSDK_OFFSET(0xD65D960)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0xD660160)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD660130)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentDetailControl_TypeDefinitionIndex = 80063;

	class MechCraftTalentDetailControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::TextID* StaticGet_FPADDIGANHH()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MechCraftTalentDetailControl_TypeDefinitionIndex)->GetStaticField(0x11AF0);
		}
		static ::RPG::Client::TextID* StaticGet_AJNBKGEMOAH()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(MechCraftTalentDetailControl_TypeDefinitionIndex)->GetStaticField(0x11B00);
		}
		::System::String* _StateDefault; // 0x18
		::System::String* _StateLocked; // 0x20
		::System::String* _StateFinished; // 0x28
		::System::String* _StateToFinished; // 0x30
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* LFGMLJCCPCH; // 0x38
		::System::Boolean PHBCJPCHDHC; // 0x40
		::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>* _PointGetter_k__BackingField; // 0x48
		::RPG::Client::MechCraft::View::MechCraftTalentDetailControlBinder* _Binder; // 0x50
		::System::Boolean FIGOEIGHJGD; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL__CCTOR_OFFSET))();
		}

		::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>* get_PointGetter()
		{
			return ((::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_GET_POINTGETTER_OFFSET))(this);
		}

		::System::Void set_PointGetter(::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::RPG::Client::MechCraft::View::MechCraftTalentPointControl*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_SET_POINTGETTER_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* get_Content()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_74A119856660FF82(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_74A119856660FF82_OFFSET))(this, a1);
		}

		::System::Void Method_5_2551ADBDDEB1F315(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_2551ADBDDEB1F315_OFFSET))(this, a1);
		}

		::System::Void Method_5_357E890EA185370E(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_357E890EA185370E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_D1A914AF101812C8(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_D1A914AF101812C8_OFFSET))(this, a1);
		}

		::System::Void Method_5_DA2EBDD187EE2416(::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* a1, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_DA2EBDD187EE2416_OFFSET))(this, a1, a2);
		}

		::RPG::Client::StaticListViewItem* Method_5_6D85C48579656B24(::RPG::Client::StaticListView* a1, ::Class_1_680ABE7B0CC9E97F* a2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::RPG::Client::StaticListView*, ::Class_1_680ABE7B0CC9E97F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTDETAILCONTROL_METHOD_5_6D85C48579656B24_OFFSET))(this, a1, a2);
		}
	};
}
