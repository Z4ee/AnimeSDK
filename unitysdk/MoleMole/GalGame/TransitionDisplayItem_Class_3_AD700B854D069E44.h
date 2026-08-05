#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/TransitionDisplayItem_ItemType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TransitionDisplayItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_CLASS_3_AD700B854D069E44_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x107E1070)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_CLASS_3_AD700B854D069E44_READMEMBER_OFFSET UNITYSDK_OFFSET(0x107E1080)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_CLASS_3_AD700B854D069E44_WRITE_OFFSET UNITYSDK_OFFSET(0x107E1390)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_CLASS_3_AD700B854D069E44__CCTOR_OFFSET UNITYSDK_OFFSET(0x107E15A0)
#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_CLASS_3_AD700B854D069E44__CTOR_OFFSET UNITYSDK_OFFSET(0x107E1560)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TransitionDisplayItem_Class_3_AD700B854D069E44_TypeDefinitionIndex = 61819;

	class TransitionDisplayItem_Class_3_AD700B854D069E44 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::TransitionDisplayItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TransitionDisplayItem_Class_3_AD700B854D069E44_TypeDefinitionIndex)->GetStaticField(0x4E980);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionDisplayItem_Class_3_AD700B854D069E44_TypeDefinitionIndex)->GetStaticField(0x4E988);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::TransitionDisplayItem_ItemType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::TransitionDisplayItem_ItemType>**)Il2CppClass::FromTypeDefinitionIndex(TransitionDisplayItem_Class_3_AD700B854D069E44_TypeDefinitionIndex)->GetStaticField(0x4E990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_CLASS_3_AD700B854D069E44__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_CLASS_3_AD700B854D069E44__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_CLASS_3_AD700B854D069E44_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TransitionDisplayItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TransitionDisplayItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_CLASS_3_AD700B854D069E44_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::TransitionDisplayItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TransitionDisplayItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM_CLASS_3_AD700B854D069E44_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
