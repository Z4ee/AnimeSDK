#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatPlayTimelineNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_CLASS_3_A6A06A5AC02ACB1B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x144D95D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_CLASS_3_A6A06A5AC02ACB1B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x144D95E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_CLASS_3_A6A06A5AC02ACB1B_WRITE_OFFSET UNITYSDK_OFFSET(0x144D9990)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_CLASS_3_A6A06A5AC02ACB1B__CCTOR_OFFSET UNITYSDK_OFFSET(0x144D9C00)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_CLASS_3_A6A06A5AC02ACB1B__CTOR_OFFSET UNITYSDK_OFFSET(0x144D9BC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayTimelineNode_Class_3_A6A06A5AC02ACB1B_TypeDefinitionIndex = 41269;

	class MainCityChatPlayTimelineNode_Class_3_A6A06A5AC02ACB1B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatPlayTimelineNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayTimelineNode_Class_3_A6A06A5AC02ACB1B_TypeDefinitionIndex)->GetStaticField(0x39F90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayTimelineNode_Class_3_A6A06A5AC02ACB1B_TypeDefinitionIndex)->GetStaticField(0x39F98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayTimelineNode_Class_3_A6A06A5AC02ACB1B_TypeDefinitionIndex)->GetStaticField(0x39FA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_CLASS_3_A6A06A5AC02ACB1B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_CLASS_3_A6A06A5AC02ACB1B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_CLASS_3_A6A06A5AC02ACB1B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatPlayTimelineNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayTimelineNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_CLASS_3_A6A06A5AC02ACB1B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatPlayTimelineNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayTimelineNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_CLASS_3_A6A06A5AC02ACB1B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
