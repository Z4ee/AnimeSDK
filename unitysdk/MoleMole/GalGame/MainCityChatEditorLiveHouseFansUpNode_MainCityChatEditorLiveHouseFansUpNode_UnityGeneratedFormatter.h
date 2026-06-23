#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatEditorLiveHouseFansUpNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19129C70)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19129C80)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x19129F20)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1912A110)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1912A0D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatEditorLiveHouseFansUpNode_MainCityChatEditorLiveHouseFansUpNode_UnityGeneratedFormatter_TypeDefinitionIndex = 80090;

	class MainCityChatEditorLiveHouseFansUpNode_MainCityChatEditorLiveHouseFansUpNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatEditorLiveHouseFansUpNode_MainCityChatEditorLiveHouseFansUpNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CC90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatEditorLiveHouseFansUpNode_MainCityChatEditorLiveHouseFansUpNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CC98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatEditorLiveHouseFansUpNode_MainCityChatEditorLiveHouseFansUpNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CCA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
