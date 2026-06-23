#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/MoleMole/UIGeneralIntimacyUpPopWindowController_Context_Type.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::GalGame { class MainCityChatShowUIGeneralIntimacyUpNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1912B730)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1912B740)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1912BBE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1912BEE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1912BEA0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUIGeneralIntimacyUpNode_MainCityChatShowUIGeneralIntimacyUpNode_UnityGeneratedFormatter_TypeDefinitionIndex = 65746;

	class MainCityChatShowUIGeneralIntimacyUpNode_MainCityChatShowUIGeneralIntimacyUpNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_MainCityChatShowUIGeneralIntimacyUpNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CCF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_MainCityChatShowUIGeneralIntimacyUpNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CCF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_MainCityChatShowUIGeneralIntimacyUpNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CD00);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::System::Int32>>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_MainCityChatShowUIGeneralIntimacyUpNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CD08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_MainCityChatShowUIGeneralIntimacyUpNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CD10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
