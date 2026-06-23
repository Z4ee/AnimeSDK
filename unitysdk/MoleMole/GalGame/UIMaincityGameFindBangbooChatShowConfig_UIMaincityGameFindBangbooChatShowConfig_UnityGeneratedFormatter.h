#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class UIMaincityGameFindBangbooChatShowConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D4CF40)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D4CF50)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10D4D2A0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D4D4F0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4D4B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int UIMaincityGameFindBangbooChatShowConfig_UIMaincityGameFindBangbooChatShowConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 85658;

	class UIMaincityGameFindBangbooChatShowConfig_UIMaincityGameFindBangbooChatShowConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::UIMaincityGameFindBangbooChatShowConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::UInt32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameFindBangbooChatShowConfig_UIMaincityGameFindBangbooChatShowConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34290);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameFindBangbooChatShowConfig_UIMaincityGameFindBangbooChatShowConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34298);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameFindBangbooChatShowConfig_UIMaincityGameFindBangbooChatShowConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x342A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMaincityGameFindBangbooChatShowConfig_UIMaincityGameFindBangbooChatShowConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x342A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::UIMaincityGameFindBangbooChatShowConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::UIMaincityGameFindBangbooChatShowConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::UIMaincityGameFindBangbooChatShowConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::UIMaincityGameFindBangbooChatShowConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
