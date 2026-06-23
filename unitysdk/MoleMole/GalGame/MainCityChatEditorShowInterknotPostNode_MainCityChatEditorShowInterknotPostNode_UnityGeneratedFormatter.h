#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatEditorShowInterknotPostNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13EDE980)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13EDE990)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13EDEC30)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EDEE20)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDEDE0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatEditorShowInterknotPostNode_MainCityChatEditorShowInterknotPostNode_UnityGeneratedFormatter_TypeDefinitionIndex = 86204;

	class MainCityChatEditorShowInterknotPostNode_MainCityChatEditorShowInterknotPostNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatEditorShowInterknotPostNode_MainCityChatEditorShowInterknotPostNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D8A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatEditorShowInterknotPostNode_MainCityChatEditorShowInterknotPostNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D8A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatEditorShowInterknotPostNode_MainCityChatEditorShowInterknotPostNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D8B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
