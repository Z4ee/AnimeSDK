#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatRandomChoiceDisplayItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130213E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130213F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13021890)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13021B90)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13021B50)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatRandomChoiceDisplayItem_MainCityChatRandomChoiceDisplayItem_UnityGeneratedFormatter_TypeDefinitionIndex = 63191;

	class MainCityChatRandomChoiceDisplayItem_MainCityChatRandomChoiceDisplayItem_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatRandomChoiceDisplayItem_MainCityChatRandomChoiceDisplayItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49DA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatRandomChoiceDisplayItem_MainCityChatRandomChoiceDisplayItem_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49DA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
