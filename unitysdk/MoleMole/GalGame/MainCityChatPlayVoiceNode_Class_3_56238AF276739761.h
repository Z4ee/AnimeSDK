#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatPlayVoiceNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_CLASS_3_56238AF276739761_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A61A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_CLASS_3_56238AF276739761_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A61B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_CLASS_3_56238AF276739761_WRITE_OFFSET UNITYSDK_OFFSET(0x136A6400)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_CLASS_3_56238AF276739761__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A65C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_CLASS_3_56238AF276739761__CTOR_OFFSET UNITYSDK_OFFSET(0x136A6580)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayVoiceNode_Class_3_56238AF276739761_TypeDefinitionIndex = 42299;

	class MainCityChatPlayVoiceNode_Class_3_56238AF276739761 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatPlayVoiceNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayVoiceNode_Class_3_56238AF276739761_TypeDefinitionIndex)->GetStaticField(0x4D640);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayVoiceNode_Class_3_56238AF276739761_TypeDefinitionIndex)->GetStaticField(0x4D648);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayVoiceNode_Class_3_56238AF276739761_TypeDefinitionIndex)->GetStaticField(0x4D650);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_CLASS_3_56238AF276739761__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_CLASS_3_56238AF276739761__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_CLASS_3_56238AF276739761_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatPlayVoiceNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayVoiceNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_CLASS_3_56238AF276739761_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatPlayVoiceNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayVoiceNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_CLASS_3_56238AF276739761_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
