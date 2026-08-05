#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatDelayNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_CLASS_3_B5411D1C78664C19_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19DBE3C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_CLASS_3_B5411D1C78664C19_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19DBE3D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_CLASS_3_B5411D1C78664C19_WRITE_OFFSET UNITYSDK_OFFSET(0x19DBE620)
#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_CLASS_3_B5411D1C78664C19__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DBE7E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_CLASS_3_B5411D1C78664C19__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBE7A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatDelayNode_Class_3_B5411D1C78664C19_TypeDefinitionIndex = 50939;

	class MainCityChatDelayNode_Class_3_B5411D1C78664C19 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatDelayNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatDelayNode_Class_3_B5411D1C78664C19_TypeDefinitionIndex)->GetStaticField(0x4C2D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatDelayNode_Class_3_B5411D1C78664C19_TypeDefinitionIndex)->GetStaticField(0x4C2D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatDelayNode_Class_3_B5411D1C78664C19_TypeDefinitionIndex)->GetStaticField(0x4C2E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_CLASS_3_B5411D1C78664C19__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_CLASS_3_B5411D1C78664C19__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_CLASS_3_B5411D1C78664C19_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatDelayNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatDelayNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_CLASS_3_B5411D1C78664C19_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatDelayNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatDelayNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_CLASS_3_B5411D1C78664C19_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
