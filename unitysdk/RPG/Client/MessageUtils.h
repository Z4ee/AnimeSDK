#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MessageStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageContentBlock; }
namespace RPG::Client { class MessageGroupData; }
namespace RPG::Client { class MessageItemData; }
namespace RPG::Client { class MessageSectionData; }

#define RPG_CLIENT_MESSAGEUTILS_GETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x9BA11B0)
#define RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_1_OFFSET UNITYSDK_OFFSET(0x9BA1040)
#define RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_OFFSET UNITYSDK_OFFSET(0x9BA0B00)
#define RPG_CLIENT_MESSAGEUTILS_ISMESSAGEITEMSCHOICE_OFFSET UNITYSDK_OFFSET(0x9B95550)
#define RPG_CLIENT_MESSAGEUTILS_ISMESSAGEMISSIONVALID_OFFSET UNITYSDK_OFFSET(0x9BA12F0)
#define RPG_CLIENT_MESSAGEUTILS_SHOWMISSIONICON_OFFSET UNITYSDK_OFFSET(0x9B94870)
#define RPG_CLIENT_MESSAGEUTILS__SAFEINITPARAM_OFFSET UNITYSDK_OFFSET(0x9BA0C10)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageUtils_TypeDefinitionIndex = 53699;

	class MessageUtils : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__MinWritingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x10010);
		}
		static ::System::Boolean* StaticGet__HasInitiated()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x10014);
		}
		static ::System::Single* StaticGet__WritingTimeRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x10018);
		}
		static ::System::Single* StaticGet__SpecialWritingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x1001C);
		}
		static ::System::Single* StaticGet__MaxWritingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x10020);
		}
		static ::System::Single* StaticGet__WritingTimeBias()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x10024);
		}

		static ::System::Single GetWritingTime(::RPG::Client::MessageItemData* itemData)
		{
			return ((::System::Single(*)(::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_OFFSET))(itemData);
		}

		static ::System::Single GetWritingTime_1(::RPG::Client::MessageContentBlock* contentBlock)
		{
			return ((::System::Single(*)(::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_1_OFFSET))(contentBlock);
		}

		static ::RPG::GameCore::MessageStateType GetGroupState(::RPG::Client::MessageGroupData* groupData)
		{
			return ((::RPG::GameCore::MessageStateType(*)(::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_GETGROUPSTATE_OFFSET))(groupData);
		}

		static ::System::Boolean ShowMissionIcon(::RPG::Client::MessageSectionData* sectionData)
		{
			return ((::System::Boolean(*)(::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_SHOWMISSIONICON_OFFSET))(sectionData);
		}

		static ::System::Boolean IsMessageMissionValid(::System::UInt32 mainMissionID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_ISMESSAGEMISSIONVALID_OFFSET))(mainMissionID);
		}

		static ::System::Boolean IsMessageItemsChoice(::Il2CppArray<::System::UInt32>* itemIDs)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_ISMESSAGEITEMSCHOICE_OFFSET))(itemIDs);
		}

		static ::System::Void _SafeInitParam()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS__SAFEINITPARAM_OFFSET))();
		}
	};
}
