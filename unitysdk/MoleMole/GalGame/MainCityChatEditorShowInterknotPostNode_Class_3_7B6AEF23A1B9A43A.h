#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatEditorShowInterknotPostNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_CLASS_3_7B6AEF23A1B9A43A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149EA880)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_CLASS_3_7B6AEF23A1B9A43A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149EA890)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_CLASS_3_7B6AEF23A1B9A43A_WRITE_OFFSET UNITYSDK_OFFSET(0x149EAAE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_CLASS_3_7B6AEF23A1B9A43A__CCTOR_OFFSET UNITYSDK_OFFSET(0x149EACA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_CLASS_3_7B6AEF23A1B9A43A__CTOR_OFFSET UNITYSDK_OFFSET(0x149EAC60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatEditorShowInterknotPostNode_Class_3_7B6AEF23A1B9A43A_TypeDefinitionIndex = 52789;

	class MainCityChatEditorShowInterknotPostNode_Class_3_7B6AEF23A1B9A43A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatEditorShowInterknotPostNode_Class_3_7B6AEF23A1B9A43A_TypeDefinitionIndex)->GetStaticField(0x326A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatEditorShowInterknotPostNode_Class_3_7B6AEF23A1B9A43A_TypeDefinitionIndex)->GetStaticField(0x326A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatEditorShowInterknotPostNode_Class_3_7B6AEF23A1B9A43A_TypeDefinitionIndex)->GetStaticField(0x326B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_CLASS_3_7B6AEF23A1B9A43A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_CLASS_3_7B6AEF23A1B9A43A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_CLASS_3_7B6AEF23A1B9A43A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_CLASS_3_7B6AEF23A1B9A43A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatEditorShowInterknotPostNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_CLASS_3_7B6AEF23A1B9A43A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
