#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass177_0; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS177_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBCB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass177_3_TypeDefinitionIndex = 62779;

	class UIGalgamePageController___c__DisplayClass177_3 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass177_0* CS___8__locals3; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVoAudioList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS177_3__CTOR_OFFSET))(this);
		}
	};
}
