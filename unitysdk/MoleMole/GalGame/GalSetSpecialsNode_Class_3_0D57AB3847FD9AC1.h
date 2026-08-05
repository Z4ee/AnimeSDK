#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SpecialKeyValue; }
namespace MoleMole::GalGame { class GalSetSpecialsNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALSETSPECIALSNODE_CLASS_3_0D57AB3847FD9AC1_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B17F70)
#define MOLEMOLE_GALGAME_GALSETSPECIALSNODE_CLASS_3_0D57AB3847FD9AC1_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B17F80)
#define MOLEMOLE_GALGAME_GALSETSPECIALSNODE_CLASS_3_0D57AB3847FD9AC1_WRITE_OFFSET UNITYSDK_OFFSET(0x19B18290)
#define MOLEMOLE_GALGAME_GALSETSPECIALSNODE_CLASS_3_0D57AB3847FD9AC1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B184A0)
#define MOLEMOLE_GALGAME_GALSETSPECIALSNODE_CLASS_3_0D57AB3847FD9AC1__CTOR_OFFSET UNITYSDK_OFFSET(0x19B18460)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSetSpecialsNode_Class_3_0D57AB3847FD9AC1_TypeDefinitionIndex = 86925;

	class GalSetSpecialsNode_Class_3_0D57AB3847FD9AC1 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalSetSpecialsNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalSetSpecialsNode_Class_3_0D57AB3847FD9AC1_TypeDefinitionIndex)->GetStaticField(0x51920);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalSetSpecialsNode_Class_3_0D57AB3847FD9AC1_TypeDefinitionIndex)->GetStaticField(0x51928);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalSetSpecialsNode_Class_3_0D57AB3847FD9AC1_TypeDefinitionIndex)->GetStaticField(0x51930);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSETSPECIALSNODE_CLASS_3_0D57AB3847FD9AC1__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSETSPECIALSNODE_CLASS_3_0D57AB3847FD9AC1__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSETSPECIALSNODE_CLASS_3_0D57AB3847FD9AC1_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSetSpecialsNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSetSpecialsNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSETSPECIALSNODE_CLASS_3_0D57AB3847FD9AC1_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalSetSpecialsNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSetSpecialsNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSETSPECIALSNODE_CLASS_3_0D57AB3847FD9AC1_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
