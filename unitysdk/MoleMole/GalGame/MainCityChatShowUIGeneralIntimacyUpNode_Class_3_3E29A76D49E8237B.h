#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/MoleMole/UIGeneralIntimacyUpPopWindowController_Context_Type.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::GalGame { class MainCityChatShowUIGeneralIntimacyUpNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_CLASS_3_3E29A76D49E8237B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A69D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_CLASS_3_3E29A76D49E8237B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A69E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_CLASS_3_3E29A76D49E8237B_WRITE_OFFSET UNITYSDK_OFFSET(0x136A6E30)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_CLASS_3_3E29A76D49E8237B__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A7100)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_CLASS_3_3E29A76D49E8237B__CTOR_OFFSET UNITYSDK_OFFSET(0x136A70C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUIGeneralIntimacyUpNode_Class_3_3E29A76D49E8237B_TypeDefinitionIndex = 79510;

	class MainCityChatShowUIGeneralIntimacyUpNode_Class_3_3E29A76D49E8237B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_Class_3_3E29A76D49E8237B_TypeDefinitionIndex)->GetStaticField(0x4D660);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_Class_3_3E29A76D49E8237B_TypeDefinitionIndex)->GetStaticField(0x4D668);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::System::Int32>>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_Class_3_3E29A76D49E8237B_TypeDefinitionIndex)->GetStaticField(0x4D670);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_Class_3_3E29A76D49E8237B_TypeDefinitionIndex)->GetStaticField(0x4D678);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUIGeneralIntimacyUpNode_Class_3_3E29A76D49E8237B_TypeDefinitionIndex)->GetStaticField(0x4D680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_CLASS_3_3E29A76D49E8237B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_CLASS_3_3E29A76D49E8237B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_CLASS_3_3E29A76D49E8237B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_CLASS_3_3E29A76D49E8237B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUIGeneralIntimacyUpNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUIGENERALINTIMACYUPNODE_CLASS_3_3E29A76D49E8237B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
