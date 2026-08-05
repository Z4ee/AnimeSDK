#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/InLevelChatEntitySlot.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::GalGame { class MainCityChatInLevelPlayStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_CLASS_3_C09646DDD66446CE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BEFA70)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_CLASS_3_C09646DDD66446CE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BEFA80)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_CLASS_3_C09646DDD66446CE_WRITE_OFFSET UNITYSDK_OFFSET(0x19BF0150)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_CLASS_3_C09646DDD66446CE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BF0580)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_CLASS_3_C09646DDD66446CE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF0540)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatInLevelPlayStoryNode_Class_3_C09646DDD66446CE_TypeDefinitionIndex = 55249;

	class MainCityChatInLevelPlayStoryNode_Class_3_C09646DDD66446CE : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_Class_3_C09646DDD66446CE_TypeDefinitionIndex)->GetStaticField(0x48D30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_Class_3_C09646DDD66446CE_TypeDefinitionIndex)->GetStaticField(0x48D38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_Class_3_C09646DDD66446CE_TypeDefinitionIndex)->GetStaticField(0x48D40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::InLevelChatEntitySlot>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::InLevelChatEntitySlot>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_Class_3_C09646DDD66446CE_TypeDefinitionIndex)->GetStaticField(0x48D48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_Class_3_C09646DDD66446CE_TypeDefinitionIndex)->GetStaticField(0x48D50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_Class_3_C09646DDD66446CE_TypeDefinitionIndex)->GetStaticField(0x48D58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_Class_3_C09646DDD66446CE_TypeDefinitionIndex)->GetStaticField(0x48D60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_CLASS_3_C09646DDD66446CE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_CLASS_3_C09646DDD66446CE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_CLASS_3_C09646DDD66446CE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_CLASS_3_C09646DDD66446CE_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_CLASS_3_C09646DDD66446CE_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
