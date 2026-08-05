#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatChangeActorsNode; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_CLASS_3_3BB68E3402311682_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17378A90)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_CLASS_3_3BB68E3402311682_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17378AA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_CLASS_3_3BB68E3402311682_WRITE_OFFSET UNITYSDK_OFFSET(0x173790D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_CLASS_3_3BB68E3402311682__CCTOR_OFFSET UNITYSDK_OFFSET(0x173794A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_CLASS_3_3BB68E3402311682__CTOR_OFFSET UNITYSDK_OFFSET(0x17379460)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatChangeActorsNode_Class_3_3BB68E3402311682_TypeDefinitionIndex = 48100;

	class MainCityChatChangeActorsNode_Class_3_3BB68E3402311682 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatChangeActorsNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_Class_3_3BB68E3402311682_TypeDefinitionIndex)->GetStaticField(0x44D50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::UInt32>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_Class_3_3BB68E3402311682_TypeDefinitionIndex)->GetStaticField(0x44D58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_Class_3_3BB68E3402311682_TypeDefinitionIndex)->GetStaticField(0x44D60);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_Class_3_3BB68E3402311682_TypeDefinitionIndex)->GetStaticField(0x44D68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_Class_3_3BB68E3402311682_TypeDefinitionIndex)->GetStaticField(0x44D70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_Class_3_3BB68E3402311682_TypeDefinitionIndex)->GetStaticField(0x44D78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_CLASS_3_3BB68E3402311682__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_CLASS_3_3BB68E3402311682__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_CLASS_3_3BB68E3402311682_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatChangeActorsNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatChangeActorsNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_CLASS_3_3BB68E3402311682_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatChangeActorsNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatChangeActorsNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_CLASS_3_3BB68E3402311682_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
