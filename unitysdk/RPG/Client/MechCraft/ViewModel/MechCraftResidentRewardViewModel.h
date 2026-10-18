#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_GETQUEST_OFFSET UNITYSDK_OFFSET(0xD684A40)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_GET_QUESTCOUNT_OFFSET UNITYSDK_OFFSET(0xD6848E0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD6848D0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftResidentRewardViewModel_TypeDefinitionIndex = 79687;

	class MechCraftResidentRewardViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* _Quests; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::QuestData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_QuestCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_GET_QUESTCOUNT_OFFSET))(this);
		}

		::RPG::Client::QuestData* GetQuest(::System::Int32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTRESIDENTREWARDVIEWMODEL_GETQUEST_OFFSET))(this, a1);
		}
	};
}
