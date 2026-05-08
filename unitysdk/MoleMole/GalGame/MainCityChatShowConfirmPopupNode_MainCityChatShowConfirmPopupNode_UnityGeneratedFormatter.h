#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace MoleMole::GalGame { class MainCityChatShowConfirmPopupNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_MAINCITYCHATSHOWCONFIRMPOPUPNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12336120)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_MAINCITYCHATSHOWCONFIRMPOPUPNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12336130)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_MAINCITYCHATSHOWCONFIRMPOPUPNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12336720)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_MAINCITYCHATSHOWCONFIRMPOPUPNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12336AD0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_MAINCITYCHATSHOWCONFIRMPOPUPNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12336A90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowConfirmPopupNode_MainCityChatShowConfirmPopupNode_UnityGeneratedFormatter_TypeDefinitionIndex = 81322;

	class MainCityChatShowConfirmPopupNode_MainCityChatShowConfirmPopupNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowConfirmPopupNode_MainCityChatShowConfirmPopupNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43680);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowConfirmPopupNode_MainCityChatShowConfirmPopupNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43688);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatBranchItem*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatBranchItem*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowConfirmPopupNode_MainCityChatShowConfirmPopupNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43690);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowConfirmPopupNode_MainCityChatShowConfirmPopupNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43698);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_MAINCITYCHATSHOWCONFIRMPOPUPNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_MAINCITYCHATSHOWCONFIRMPOPUPNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_MAINCITYCHATSHOWCONFIRMPOPUPNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_MAINCITYCHATSHOWCONFIRMPOPUPNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_MAINCITYCHATSHOWCONFIRMPOPUPNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
