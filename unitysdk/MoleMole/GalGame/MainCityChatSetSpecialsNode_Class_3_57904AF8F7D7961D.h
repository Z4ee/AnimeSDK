#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SpecialKeyValue; }
namespace MoleMole::GalGame { class MainCityChatSetSpecialsNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_CLASS_3_57904AF8F7D7961D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x107E0210)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_CLASS_3_57904AF8F7D7961D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x107E0220)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_CLASS_3_57904AF8F7D7961D_WRITE_OFFSET UNITYSDK_OFFSET(0x107E0470)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_CLASS_3_57904AF8F7D7961D__CCTOR_OFFSET UNITYSDK_OFFSET(0x107E0630)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_CLASS_3_57904AF8F7D7961D__CTOR_OFFSET UNITYSDK_OFFSET(0x107E05F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSetSpecialsNode_Class_3_57904AF8F7D7961D_TypeDefinitionIndex = 66860;

	class MainCityChatSetSpecialsNode_Class_3_57904AF8F7D7961D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatSetSpecialsNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetSpecialsNode_Class_3_57904AF8F7D7961D_TypeDefinitionIndex)->GetStaticField(0x4E940);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetSpecialsNode_Class_3_57904AF8F7D7961D_TypeDefinitionIndex)->GetStaticField(0x4E948);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetSpecialsNode_Class_3_57904AF8F7D7961D_TypeDefinitionIndex)->GetStaticField(0x4E950);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_CLASS_3_57904AF8F7D7961D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_CLASS_3_57904AF8F7D7961D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_CLASS_3_57904AF8F7D7961D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatSetSpecialsNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetSpecialsNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_CLASS_3_57904AF8F7D7961D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatSetSpecialsNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetSpecialsNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_CLASS_3_57904AF8F7D7961D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
