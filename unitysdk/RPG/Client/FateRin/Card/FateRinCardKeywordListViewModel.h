#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_1_B3CB0277F28E93FA;
namespace RPG::Client::FateRin::Card { class IFateRinCardKeywordViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL_GET_HASKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1CBE2040)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x1CBE2000)
#define RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDF380)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinCardKeywordListViewModel_TypeDefinitionIndex = 79815;

	class FateRinCardKeywordListViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Card::IFateRinCardKeywordViewModel*>* _Keywords_ReadOnly; // 0x20
		::Il2CppArray<::RPG::Client::FateRin::Card::IFateRinCardKeywordViewModel*>* _Keywords; // 0x28

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Class_1_B3CB0277F28E93FA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_B3CB0277F28E93FA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinCardKeywordViewModel*>* get_Keywords()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinCardKeywordViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL_GET_KEYWORDS_OFFSET))(this);
		}

		::System::Boolean get_HasKeywords()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINCARDKEYWORDLISTVIEWMODEL_GET_HASKEYWORDS_OFFSET))(this);
		}
	};
}
