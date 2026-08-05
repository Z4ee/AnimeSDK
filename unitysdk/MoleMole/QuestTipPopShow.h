#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_QUESTTIPPOPSHOW_GETVIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1688B320)
#define MOLEMOLE_QUESTTIPPOPSHOW_GET_ISBLOCKCENTER_OFFSET UNITYSDK_OFFSET(0x1688B110)
#define MOLEMOLE_QUESTTIPPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1688B100)
#define MOLEMOLE_QUESTTIPPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1688B150)
#define MOLEMOLE_QUESTTIPPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1688B120)

namespace MoleMole
{
	inline static constexpr unsigned int QuestTipPopShow_TypeDefinitionIndex = 81512;

	class QuestTipPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* callback; // 0x28
		::System::Int32 tipID; // 0x30

		::System::Void _ctor(::System::Int32 id, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW__CTOR_OFFSET))(this, id, callback);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsBlockCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW_GET_ISBLOCKCENTER_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		static ::System::String* GetVideoPath(::System::Int32 questTipID)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_QUESTTIPPOPSHOW_GETVIDEOPATH_OFFSET))(questTipID);
		}
	};
}
