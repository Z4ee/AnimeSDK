#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBangkovHandInNode; }
namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_CLASS_3_1D1B5A43EEE7B4F0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B18660)
#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_CLASS_3_1D1B5A43EEE7B4F0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B18670)
#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_CLASS_3_1D1B5A43EEE7B4F0_WRITE_OFFSET UNITYSDK_OFFSET(0x19B18A20)
#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_CLASS_3_1D1B5A43EEE7B4F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B18C90)
#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_CLASS_3_1D1B5A43EEE7B4F0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B18C50)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBangkovHandInNode_Class_3_1D1B5A43EEE7B4F0_TypeDefinitionIndex = 53279;

	class MainCityChatBangkovHandInNode_Class_3_1D1B5A43EEE7B4F0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatBangkovHandInNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBangkovHandInNode_Class_3_1D1B5A43EEE7B4F0_TypeDefinitionIndex)->GetStaticField(0x51940);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatBranchItem*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatBranchItem*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBangkovHandInNode_Class_3_1D1B5A43EEE7B4F0_TypeDefinitionIndex)->GetStaticField(0x51948);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBangkovHandInNode_Class_3_1D1B5A43EEE7B4F0_TypeDefinitionIndex)->GetStaticField(0x51950);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBangkovHandInNode_Class_3_1D1B5A43EEE7B4F0_TypeDefinitionIndex)->GetStaticField(0x51958);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_CLASS_3_1D1B5A43EEE7B4F0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_CLASS_3_1D1B5A43EEE7B4F0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_CLASS_3_1D1B5A43EEE7B4F0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatBangkovHandInNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBangkovHandInNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_CLASS_3_1D1B5A43EEE7B4F0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatBangkovHandInNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBangkovHandInNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_CLASS_3_1D1B5A43EEE7B4F0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
