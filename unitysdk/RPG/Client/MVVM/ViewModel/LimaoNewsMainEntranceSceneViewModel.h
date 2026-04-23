#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E77EE8BE0A609DD9.h"

class Class_1_4780C96744815F8D;
class Class_1_895FB63906FAA27E;
namespace RPG::Client::MVVM::Model { class LimaoNewsLimaoData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEDESKS_OFFSET UNITYSDK_OFFSET(0xA754310)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEPOINTIDS_OFFSET UNITYSDK_OFFSET(0xA7543C0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETSHOWLIMAODATAS_OFFSET UNITYSDK_OFFSET(0xA754470)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCESCENEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA768B60)

namespace RPG::Client::MVVM::ViewModel
{
	inline static constexpr unsigned int LimaoNewsMainEntranceSceneViewModel_TypeDefinitionIndex = 68391;

	class LimaoNewsMainEntranceSceneViewModel : public ::Class_2_E77EE8BE0A609DD9
	{
	public:
		::Class_1_895FB63906FAA27E* _EventService; // 0x20
		::Class_1_4780C96744815F8D* _LimaoService; // 0x28

		::System::Void _ctor(::Class_1_4780C96744815F8D* limaoService, ::Class_1_895FB63906FAA27E* eventService)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4780C96744815F8D*, ::Class_1_895FB63906FAA27E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCESCENEVIEWMODEL__CTOR_OFFSET))(this, limaoService, eventService);
		}

		::Il2CppArray<::System::UInt32>* GetCurPhaseDesks()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEDESKS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetCurPhasePointIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEPOINTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsLimaoData*>* GetShowLimaoDatas(::System::Int32 count)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsLimaoData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETSHOWLIMAODATAS_OFFSET))(this, count);
		}
	};
}
