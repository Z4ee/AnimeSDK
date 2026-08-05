#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatPlayStoryNode; }
namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_CLASS_3_6C024998C0DCC70C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x178FE2F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_CLASS_3_6C024998C0DCC70C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x178FE300)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_CLASS_3_6C024998C0DCC70C_WRITE_OFFSET UNITYSDK_OFFSET(0x178FEF80)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_CLASS_3_6C024998C0DCC70C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178FF6D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_CLASS_3_6C024998C0DCC70C__CTOR_OFFSET UNITYSDK_OFFSET(0x178FF690)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayStoryNode_Class_3_6C024998C0DCC70C_TypeDefinitionIndex = 61252;

	class MainCityChatPlayStoryNode_Class_3_6C024998C0DCC70C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatPlayStoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_Class_3_6C024998C0DCC70C_TypeDefinitionIndex)->GetStaticField(0x42640);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::SpeakerActionCfg*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::SpeakerActionCfg*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_Class_3_6C024998C0DCC70C_TypeDefinitionIndex)->GetStaticField(0x42648);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_Class_3_6C024998C0DCC70C_TypeDefinitionIndex)->GetStaticField(0x42650);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_Class_3_6C024998C0DCC70C_TypeDefinitionIndex)->GetStaticField(0x42658);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatNPCLocation>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_Class_3_6C024998C0DCC70C_TypeDefinitionIndex)->GetStaticField(0x42660);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_Class_3_6C024998C0DCC70C_TypeDefinitionIndex)->GetStaticField(0x42668);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_Class_3_6C024998C0DCC70C_TypeDefinitionIndex)->GetStaticField(0x42670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_CLASS_3_6C024998C0DCC70C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_CLASS_3_6C024998C0DCC70C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_CLASS_3_6C024998C0DCC70C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatPlayStoryNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_CLASS_3_6C024998C0DCC70C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatPlayStoryNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_CLASS_3_6C024998C0DCC70C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
