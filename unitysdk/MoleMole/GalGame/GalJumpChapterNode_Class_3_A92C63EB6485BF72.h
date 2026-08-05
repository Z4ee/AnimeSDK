#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalJumpChapterNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_CLASS_3_A92C63EB6485BF72_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13A90480)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_CLASS_3_A92C63EB6485BF72_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13A90490)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_CLASS_3_A92C63EB6485BF72_WRITE_OFFSET UNITYSDK_OFFSET(0x13A90840)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_CLASS_3_A92C63EB6485BF72__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A90AB0)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_CLASS_3_A92C63EB6485BF72__CTOR_OFFSET UNITYSDK_OFFSET(0x13A90A70)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalJumpChapterNode_Class_3_A92C63EB6485BF72_TypeDefinitionIndex = 42038;

	class GalJumpChapterNode_Class_3_A92C63EB6485BF72 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalJumpChapterNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalJumpChapterNode_Class_3_A92C63EB6485BF72_TypeDefinitionIndex)->GetStaticField(0x46D40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalJumpChapterNode_Class_3_A92C63EB6485BF72_TypeDefinitionIndex)->GetStaticField(0x46D48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_CLASS_3_A92C63EB6485BF72__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_CLASS_3_A92C63EB6485BF72__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_CLASS_3_A92C63EB6485BF72_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalJumpChapterNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalJumpChapterNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_CLASS_3_A92C63EB6485BF72_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalJumpChapterNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalJumpChapterNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_CLASS_3_A92C63EB6485BF72_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
