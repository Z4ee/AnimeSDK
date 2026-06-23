#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgameReviewRowWidgetController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5E040)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS18_0__PLAYVOICE_B__0_OFFSET UNITYSDK_OFFSET(0x16F5E050)
#define MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS18_0__PLAYVOICE_G__PLAYAUDIOAFTERVO_1_OFFSET UNITYSDK_OFFSET(0x16F5E250)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameReviewRowWidgetController___c__DisplayClass18_0_TypeDefinitionIndex = 62011;

	class UIGalgameReviewRowWidgetController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgameReviewRowWidgetController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioListPlayAfterVo; // 0x18
		::System::Int64 stopTimeStampMs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVoice_b__0(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS18_0__PLAYVOICE_B__0_OFFSET))(this, pendingId, playingId);
		}

		::System::Void _PlayVoice_g__PlayAudioAfterVO_1(::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWROWWIDGETCONTROLLER___C__DISPLAYCLASS18_0__PLAYVOICE_G__PLAYAUDIOAFTERVO_1_OFFSET))(this, audioList);
		}
	};
}
