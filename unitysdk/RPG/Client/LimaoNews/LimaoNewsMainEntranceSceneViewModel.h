#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_895FB63906FAA27E;
class Class_1_AB4ED2B21F301DB7;
class Class_1_C56ACF52E09DFFD3;
namespace RPG::Client::LimaoNews { class LimaoNewsLimaoData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEDESKS_OFFSET UNITYSDK_OFFSET(0x1C547E20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEPOINTIDS_OFFSET UNITYSDK_OFFSET(0x1C547ED0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETSHOWLIMAODATAS_OFFSET UNITYSDK_OFFSET(0x1C547F80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C548710)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL__GETEXCLUDELIMAOIDS_OFFSET UNITYSDK_OFFSET(0x1C548760)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainEntranceSceneViewModel_TypeDefinitionIndex = 79097;

	class LimaoNewsMainEntranceSceneViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_AB4ED2B21F301DB7* _EmployeeCheckService; // 0x20
		::Class_1_895FB63906FAA27E* _EventService; // 0x28
		::Class_1_C56ACF52E09DFFD3* _LimaoService; // 0x30

		::System::Void _ctor(::Class_1_C56ACF52E09DFFD3* a1, ::Class_1_895FB63906FAA27E* a2, ::Class_1_AB4ED2B21F301DB7* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C56ACF52E09DFFD3*, ::Class_1_895FB63906FAA27E*, ::Class_1_AB4ED2B21F301DB7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::UInt32>* GetCurPhaseDesks()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEDESKS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetCurPhasePointIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEPOINTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsLimaoData*>* GetShowLimaoDatas(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsLimaoData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETSHOWLIMAODATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetExcludeLimaoIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL__GETEXCLUDELIMAOIDS_OFFSET))(this);
		}
	};
}
