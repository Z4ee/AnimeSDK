#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatRandomChoiceDisplayItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_CLASS_3_DF5D433F901E6575_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x178FF7D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_CLASS_3_DF5D433F901E6575_READMEMBER_OFFSET UNITYSDK_OFFSET(0x178FF7E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_CLASS_3_DF5D433F901E6575_WRITE_OFFSET UNITYSDK_OFFSET(0x178FFC30)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_CLASS_3_DF5D433F901E6575__CCTOR_OFFSET UNITYSDK_OFFSET(0x178FFF00)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_CLASS_3_DF5D433F901E6575__CTOR_OFFSET UNITYSDK_OFFSET(0x178FFEC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatRandomChoiceDisplayItem_Class_3_DF5D433F901E6575_TypeDefinitionIndex = 66447;

	class MainCityChatRandomChoiceDisplayItem_Class_3_DF5D433F901E6575 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatRandomChoiceDisplayItem_Class_3_DF5D433F901E6575_TypeDefinitionIndex)->GetStaticField(0x42680);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatRandomChoiceDisplayItem_Class_3_DF5D433F901E6575_TypeDefinitionIndex)->GetStaticField(0x42688);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_CLASS_3_DF5D433F901E6575__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_CLASS_3_DF5D433F901E6575__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_CLASS_3_DF5D433F901E6575_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_CLASS_3_DF5D433F901E6575_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICEDISPLAYITEM_CLASS_3_DF5D433F901E6575_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
