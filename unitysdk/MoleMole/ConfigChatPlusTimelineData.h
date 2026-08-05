#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ChatPlusTimelineData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGCHATPLUSTIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x172C0C80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigChatPlusTimelineData_TypeDefinitionIndex = 41785;

	class ConfigChatPlusTimelineData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 prorityOrder; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChatPlusTimelineData*>* timelineDatas; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCHATPLUSTIMELINEDATA__CTOR_OFFSET))(this);
		}
	};
}
