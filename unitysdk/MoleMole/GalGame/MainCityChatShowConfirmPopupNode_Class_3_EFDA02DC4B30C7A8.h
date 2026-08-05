#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace MoleMole::GalGame { class MainCityChatShowConfirmPopupNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_CLASS_3_EFDA02DC4B30C7A8_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BF0790)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_CLASS_3_EFDA02DC4B30C7A8_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BF07A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_CLASS_3_EFDA02DC4B30C7A8_WRITE_OFFSET UNITYSDK_OFFSET(0x19BF0D30)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_CLASS_3_EFDA02DC4B30C7A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BF10B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_CLASS_3_EFDA02DC4B30C7A8__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF1070)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowConfirmPopupNode_Class_3_EFDA02DC4B30C7A8_TypeDefinitionIndex = 91574;

	class MainCityChatShowConfirmPopupNode_Class_3_EFDA02DC4B30C7A8 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatBranchItem*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatBranchItem*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowConfirmPopupNode_Class_3_EFDA02DC4B30C7A8_TypeDefinitionIndex)->GetStaticField(0x48D70);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowConfirmPopupNode_Class_3_EFDA02DC4B30C7A8_TypeDefinitionIndex)->GetStaticField(0x48D78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowConfirmPopupNode_Class_3_EFDA02DC4B30C7A8_TypeDefinitionIndex)->GetStaticField(0x48D80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowConfirmPopupNode_Class_3_EFDA02DC4B30C7A8_TypeDefinitionIndex)->GetStaticField(0x48D88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_CLASS_3_EFDA02DC4B30C7A8__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_CLASS_3_EFDA02DC4B30C7A8__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_CLASS_3_EFDA02DC4B30C7A8_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_CLASS_3_EFDA02DC4B30C7A8_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_CLASS_3_EFDA02DC4B30C7A8_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
