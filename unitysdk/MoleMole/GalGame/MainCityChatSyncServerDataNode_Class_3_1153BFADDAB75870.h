#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatSyncServerDataConfig; }
namespace MoleMole::GalGame { class MainCityChatSyncServerDataNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_CLASS_3_1153BFADDAB75870_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13A914A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_CLASS_3_1153BFADDAB75870_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13A914B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_CLASS_3_1153BFADDAB75870_WRITE_OFFSET UNITYSDK_OFFSET(0x13A91700)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_CLASS_3_1153BFADDAB75870__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A918C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_CLASS_3_1153BFADDAB75870__CTOR_OFFSET UNITYSDK_OFFSET(0x13A91880)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncServerDataNode_Class_3_1153BFADDAB75870_TypeDefinitionIndex = 70448;

	class MainCityChatSyncServerDataNode_Class_3_1153BFADDAB75870 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatSyncServerDataNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatSyncServerDataConfig*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatSyncServerDataConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSyncServerDataNode_Class_3_1153BFADDAB75870_TypeDefinitionIndex)->GetStaticField(0x46D80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSyncServerDataNode_Class_3_1153BFADDAB75870_TypeDefinitionIndex)->GetStaticField(0x46D88);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSyncServerDataNode_Class_3_1153BFADDAB75870_TypeDefinitionIndex)->GetStaticField(0x46D90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_CLASS_3_1153BFADDAB75870__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_CLASS_3_1153BFADDAB75870__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_CLASS_3_1153BFADDAB75870_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatSyncServerDataNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSyncServerDataNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_CLASS_3_1153BFADDAB75870_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatSyncServerDataNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSyncServerDataNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_CLASS_3_1153BFADDAB75870_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
