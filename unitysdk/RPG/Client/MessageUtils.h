#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MessageStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageContentBlock; }
namespace RPG::Client { class MessageGroupData; }
namespace RPG::Client { class MessageItemData; }
namespace RPG::Client { class MessageSectionData; }

#define RPG_CLIENT_MESSAGEUTILS_GETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0xBFE7750)
#define RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_1_OFFSET UNITYSDK_OFFSET(0xBFE75E0)
#define RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_OFFSET UNITYSDK_OFFSET(0xBFE7090)
#define RPG_CLIENT_MESSAGEUTILS_ISMESSAGEITEMSCHOICE_OFFSET UNITYSDK_OFFSET(0xBFDBEF0)
#define RPG_CLIENT_MESSAGEUTILS_ISMESSAGEMISSIONVALID_OFFSET UNITYSDK_OFFSET(0xBFE7900)
#define RPG_CLIENT_MESSAGEUTILS_SHOWMISSIONICON_OFFSET UNITYSDK_OFFSET(0xBFDB360)
#define RPG_CLIENT_MESSAGEUTILS__SAFEINITPARAM_OFFSET UNITYSDK_OFFSET(0xBFE71A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageUtils_TypeDefinitionIndex = 61777;

	class MessageUtils : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__MaxWritingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x11B80);
		}
		static ::System::Single* StaticGet__WritingTimeBias()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x11B84);
		}
		static ::System::Single* StaticGet__MinWritingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x11B88);
		}
		static ::System::Boolean* StaticGet__HasInitiated()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x11B8C);
		}
		static ::System::Single* StaticGet__SpecialWritingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x11B90);
		}
		static ::System::Single* StaticGet__WritingTimeRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MessageUtils_TypeDefinitionIndex)->GetStaticField(0x11B94);
		}

		static ::System::Single GetWritingTime(::RPG::Client::MessageItemData* a1)
		{
			return ((::System::Single(*)(::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_OFFSET))(a1);
		}

		static ::System::Single GetWritingTime_1(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Single(*)(::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_GETWRITINGTIME_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::MessageStateType GetGroupState(::RPG::Client::MessageGroupData* a1)
		{
			return ((::RPG::GameCore::MessageStateType(*)(::RPG::Client::MessageGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_GETGROUPSTATE_OFFSET))(a1);
		}

		static ::System::Boolean ShowMissionIcon(::RPG::Client::MessageSectionData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MessageSectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_SHOWMISSIONICON_OFFSET))(a1);
		}

		static ::System::Boolean IsMessageMissionValid(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_ISMESSAGEMISSIONVALID_OFFSET))(a1);
		}

		static ::System::Boolean IsMessageItemsChoice(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS_ISMESSAGEITEMSCHOICE_OFFSET))(a1);
		}

		static ::System::Void _SafeInitParam()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUTILS__SAFEINITPARAM_OFFSET))();
		}
	};
}
