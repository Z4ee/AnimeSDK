#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatChangeNpcNameNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_CLASS_3_3421928A2B87053F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149EA050)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_CLASS_3_3421928A2B87053F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149EA060)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_CLASS_3_3421928A2B87053F_WRITE_OFFSET UNITYSDK_OFFSET(0x149EA370)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_CLASS_3_3421928A2B87053F__CCTOR_OFFSET UNITYSDK_OFFSET(0x149EA590)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_CLASS_3_3421928A2B87053F__CTOR_OFFSET UNITYSDK_OFFSET(0x149EA550)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatChangeNpcNameNode_Class_3_3421928A2B87053F_TypeDefinitionIndex = 50297;

	class MainCityChatChangeNpcNameNode_Class_3_3421928A2B87053F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatChangeNpcNameNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeNpcNameNode_Class_3_3421928A2B87053F_TypeDefinitionIndex)->GetStaticField(0x32680);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeNpcNameNode_Class_3_3421928A2B87053F_TypeDefinitionIndex)->GetStaticField(0x32688);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeNpcNameNode_Class_3_3421928A2B87053F_TypeDefinitionIndex)->GetStaticField(0x32690);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeNpcNameNode_Class_3_3421928A2B87053F_TypeDefinitionIndex)->GetStaticField(0x32698);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_CLASS_3_3421928A2B87053F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_CLASS_3_3421928A2B87053F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_CLASS_3_3421928A2B87053F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatChangeNpcNameNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatChangeNpcNameNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_CLASS_3_3421928A2B87053F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatChangeNpcNameNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatChangeNpcNameNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_CLASS_3_3421928A2B87053F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
