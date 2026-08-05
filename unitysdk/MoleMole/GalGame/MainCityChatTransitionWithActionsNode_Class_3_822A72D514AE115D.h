#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatTransitionWithActionsNode; }
namespace MoleMole::GalGame { class TransitionWithActionsCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_CLASS_3_822A72D514AE115D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19DBF250)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_CLASS_3_822A72D514AE115D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19DBF260)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_CLASS_3_822A72D514AE115D_WRITE_OFFSET UNITYSDK_OFFSET(0x19DBF4B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_CLASS_3_822A72D514AE115D__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DBF670)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_CLASS_3_822A72D514AE115D__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBF630)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionWithActionsNode_Class_3_822A72D514AE115D_TypeDefinitionIndex = 46490;

	class MainCityChatTransitionWithActionsNode_Class_3_822A72D514AE115D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatTransitionWithActionsNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatTransitionWithActionsNode_Class_3_822A72D514AE115D_TypeDefinitionIndex)->GetStaticField(0x4C2F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::TransitionWithActionsCfg*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::TransitionWithActionsCfg*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatTransitionWithActionsNode_Class_3_822A72D514AE115D_TypeDefinitionIndex)->GetStaticField(0x4C2F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatTransitionWithActionsNode_Class_3_822A72D514AE115D_TypeDefinitionIndex)->GetStaticField(0x4C300);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_CLASS_3_822A72D514AE115D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_CLASS_3_822A72D514AE115D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_CLASS_3_822A72D514AE115D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatTransitionWithActionsNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionWithActionsNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_CLASS_3_822A72D514AE115D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatTransitionWithActionsNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionWithActionsNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_CLASS_3_822A72D514AE115D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
