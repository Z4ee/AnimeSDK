#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatSetExitChatTransitionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_CLASS_3_851603BB494C362C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x178FFF80)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_CLASS_3_851603BB494C362C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x178FFF90)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_CLASS_3_851603BB494C362C_WRITE_OFFSET UNITYSDK_OFFSET(0x179001E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_CLASS_3_851603BB494C362C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179003A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_CLASS_3_851603BB494C362C__CTOR_OFFSET UNITYSDK_OFFSET(0x17900360)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSetExitChatTransitionNode_Class_3_851603BB494C362C_TypeDefinitionIndex = 84757;

	class MainCityChatSetExitChatTransitionNode_Class_3_851603BB494C362C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetExitChatTransitionNode_Class_3_851603BB494C362C_TypeDefinitionIndex)->GetStaticField(0x42690);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetExitChatTransitionNode_Class_3_851603BB494C362C_TypeDefinitionIndex)->GetStaticField(0x42698);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetExitChatTransitionNode_Class_3_851603BB494C362C_TypeDefinitionIndex)->GetStaticField(0x426A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_CLASS_3_851603BB494C362C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_CLASS_3_851603BB494C362C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_CLASS_3_851603BB494C362C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_CLASS_3_851603BB494C362C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_CLASS_3_851603BB494C362C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
