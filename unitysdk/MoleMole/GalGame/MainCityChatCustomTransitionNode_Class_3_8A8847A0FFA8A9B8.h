#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatCustomTransitionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_CLASS_3_8A8847A0FFA8A9B8_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1383ED40)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_CLASS_3_8A8847A0FFA8A9B8_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1383ED50)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_CLASS_3_8A8847A0FFA8A9B8_WRITE_OFFSET UNITYSDK_OFFSET(0x1383EFA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_CLASS_3_8A8847A0FFA8A9B8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1383F160)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_CLASS_3_8A8847A0FFA8A9B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1383F120)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCustomTransitionNode_Class_3_8A8847A0FFA8A9B8_TypeDefinitionIndex = 71251;

	class MainCityChatCustomTransitionNode_Class_3_8A8847A0FFA8A9B8 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatCustomTransitionNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCustomTransitionNode_Class_3_8A8847A0FFA8A9B8_TypeDefinitionIndex)->GetStaticField(0x3F8C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCustomTransitionNode_Class_3_8A8847A0FFA8A9B8_TypeDefinitionIndex)->GetStaticField(0x3F8C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_CLASS_3_8A8847A0FFA8A9B8__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_CLASS_3_8A8847A0FFA8A9B8__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_CLASS_3_8A8847A0FFA8A9B8_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCustomTransitionNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCustomTransitionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_CLASS_3_8A8847A0FFA8A9B8_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCustomTransitionNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCustomTransitionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_CLASS_3_8A8847A0FFA8A9B8_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
