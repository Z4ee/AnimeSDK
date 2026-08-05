#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityGraphNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_CLASS_3_179F6C648C717172_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A73B0)
#define MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_CLASS_3_179F6C648C717172_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A73C0)
#define MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_CLASS_3_179F6C648C717172_WRITE_OFFSET UNITYSDK_OFFSET(0x136A76D0)
#define MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_CLASS_3_179F6C648C717172__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A78F0)
#define MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_CLASS_3_179F6C648C717172__CTOR_OFFSET UNITYSDK_OFFSET(0x136A78B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityGraphNode_Class_3_179F6C648C717172_TypeDefinitionIndex = 86017;

	class MainCityGraphNode_Class_3_179F6C648C717172 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityGraphNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityGraphNode_Class_3_179F6C648C717172_TypeDefinitionIndex)->GetStaticField(0x4D690);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityGraphNode_Class_3_179F6C648C717172_TypeDefinitionIndex)->GetStaticField(0x4D698);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityGraphNode_Class_3_179F6C648C717172_TypeDefinitionIndex)->GetStaticField(0x4D6A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_CLASS_3_179F6C648C717172__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_CLASS_3_179F6C648C717172__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_CLASS_3_179F6C648C717172_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityGraphNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityGraphNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_CLASS_3_179F6C648C717172_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityGraphNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityGraphNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYGRAPHNODE_CLASS_3_179F6C648C717172_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
