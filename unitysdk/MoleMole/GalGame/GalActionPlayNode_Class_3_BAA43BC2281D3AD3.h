#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalActionPlayNode; }
namespace MoleMole::GalGame { class GalGameActionBase; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALACTIONPLAYNODE_CLASS_3_BAA43BC2281D3AD3_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x118C6220)
#define MOLEMOLE_GALGAME_GALACTIONPLAYNODE_CLASS_3_BAA43BC2281D3AD3_READMEMBER_OFFSET UNITYSDK_OFFSET(0x118C6230)
#define MOLEMOLE_GALGAME_GALACTIONPLAYNODE_CLASS_3_BAA43BC2281D3AD3_WRITE_OFFSET UNITYSDK_OFFSET(0x118C6540)
#define MOLEMOLE_GALGAME_GALACTIONPLAYNODE_CLASS_3_BAA43BC2281D3AD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x118C6750)
#define MOLEMOLE_GALGAME_GALACTIONPLAYNODE_CLASS_3_BAA43BC2281D3AD3__CTOR_OFFSET UNITYSDK_OFFSET(0x118C6710)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalActionPlayNode_Class_3_BAA43BC2281D3AD3_TypeDefinitionIndex = 72828;

	class GalActionPlayNode_Class_3_BAA43BC2281D3AD3 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalActionPlayNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalActionPlayNode_Class_3_BAA43BC2281D3AD3_TypeDefinitionIndex)->GetStaticField(0x3CB00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalActionPlayNode_Class_3_BAA43BC2281D3AD3_TypeDefinitionIndex)->GetStaticField(0x3CB08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalGameActionBase*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalGameActionBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalActionPlayNode_Class_3_BAA43BC2281D3AD3_TypeDefinitionIndex)->GetStaticField(0x3CB10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALACTIONPLAYNODE_CLASS_3_BAA43BC2281D3AD3__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALACTIONPLAYNODE_CLASS_3_BAA43BC2281D3AD3__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALACTIONPLAYNODE_CLASS_3_BAA43BC2281D3AD3_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalActionPlayNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalActionPlayNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALACTIONPLAYNODE_CLASS_3_BAA43BC2281D3AD3_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalActionPlayNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalActionPlayNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALACTIONPLAYNODE_CLASS_3_BAA43BC2281D3AD3_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
