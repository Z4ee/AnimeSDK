#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MiniGameRecordNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MINIGAMERECORDNODE_CLASS_3_B769D019577D133A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17900B20)
#define MOLEMOLE_GALGAME_MINIGAMERECORDNODE_CLASS_3_B769D019577D133A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17900B30)
#define MOLEMOLE_GALGAME_MINIGAMERECORDNODE_CLASS_3_B769D019577D133A_WRITE_OFFSET UNITYSDK_OFFSET(0x17900E40)
#define MOLEMOLE_GALGAME_MINIGAMERECORDNODE_CLASS_3_B769D019577D133A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17901060)
#define MOLEMOLE_GALGAME_MINIGAMERECORDNODE_CLASS_3_B769D019577D133A__CTOR_OFFSET UNITYSDK_OFFSET(0x17901020)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MiniGameRecordNode_Class_3_B769D019577D133A_TypeDefinitionIndex = 55035;

	class MiniGameRecordNode_Class_3_B769D019577D133A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MiniGameRecordNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MiniGameRecordNode_Class_3_B769D019577D133A_TypeDefinitionIndex)->GetStaticField(0x426D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MiniGameRecordNode_Class_3_B769D019577D133A_TypeDefinitionIndex)->GetStaticField(0x426D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MiniGameRecordNode_Class_3_B769D019577D133A_TypeDefinitionIndex)->GetStaticField(0x426E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MINIGAMERECORDNODE_CLASS_3_B769D019577D133A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MINIGAMERECORDNODE_CLASS_3_B769D019577D133A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MINIGAMERECORDNODE_CLASS_3_B769D019577D133A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MiniGameRecordNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MiniGameRecordNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MINIGAMERECORDNODE_CLASS_3_B769D019577D133A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MiniGameRecordNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MiniGameRecordNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MINIGAMERECORDNODE_CLASS_3_B769D019577D133A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
