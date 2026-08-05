#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatIKType.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatLookIKNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_CLASS_3_A1A5AF60D25B5443_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149EAEE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_CLASS_3_A1A5AF60D25B5443_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149EAEF0)
#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_CLASS_3_A1A5AF60D25B5443_WRITE_OFFSET UNITYSDK_OFFSET(0x149EB480)
#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_CLASS_3_A1A5AF60D25B5443__CCTOR_OFFSET UNITYSDK_OFFSET(0x149EB800)
#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_CLASS_3_A1A5AF60D25B5443__CTOR_OFFSET UNITYSDK_OFFSET(0x149EB7C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatLookIKNode_Class_3_A1A5AF60D25B5443_TypeDefinitionIndex = 84339;

	class MainCityChatLookIKNode_Class_3_A1A5AF60D25B5443 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatLookIKNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatLookIKNode_Class_3_A1A5AF60D25B5443_TypeDefinitionIndex)->GetStaticField(0x326C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatLookIKNode_Class_3_A1A5AF60D25B5443_TypeDefinitionIndex)->GetStaticField(0x326C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatLookIKNode_Class_3_A1A5AF60D25B5443_TypeDefinitionIndex)->GetStaticField(0x326D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatLookIKNode_Class_3_A1A5AF60D25B5443_TypeDefinitionIndex)->GetStaticField(0x326D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatIKType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatIKType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatLookIKNode_Class_3_A1A5AF60D25B5443_TypeDefinitionIndex)->GetStaticField(0x326E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_CLASS_3_A1A5AF60D25B5443__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_CLASS_3_A1A5AF60D25B5443__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_CLASS_3_A1A5AF60D25B5443_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatLookIKNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatLookIKNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_CLASS_3_A1A5AF60D25B5443_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatLookIKNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatLookIKNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_CLASS_3_A1A5AF60D25B5443_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
