#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShowMessageItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_CLASS_3_8F6786EF2C65FF14_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x129A5B80)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_CLASS_3_8F6786EF2C65FF14_READMEMBER_OFFSET UNITYSDK_OFFSET(0x129A5B90)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_CLASS_3_8F6786EF2C65FF14_WRITE_OFFSET UNITYSDK_OFFSET(0x129A5C60)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_CLASS_3_8F6786EF2C65FF14__CCTOR_OFFSET UNITYSDK_OFFSET(0x129A5D50)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_CLASS_3_8F6786EF2C65FF14__CTOR_OFFSET UNITYSDK_OFFSET(0x129A5D10)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowMessageItem_Class_3_8F6786EF2C65FF14_TypeDefinitionIndex = 85194;

	class MainCityChatShowMessageItem_Class_3_8F6786EF2C65FF14 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowMessageItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowMessageItem_Class_3_8F6786EF2C65FF14_TypeDefinitionIndex)->GetStaticField(0x50EE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_CLASS_3_8F6786EF2C65FF14__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_CLASS_3_8F6786EF2C65FF14__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_CLASS_3_8F6786EF2C65FF14_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowMessageItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowMessageItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_CLASS_3_8F6786EF2C65FF14_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowMessageItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowMessageItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGEITEM_CLASS_3_8F6786EF2C65FF14_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
