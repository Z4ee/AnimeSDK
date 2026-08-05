#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CLASS_3_3A6EBF1EE854F710_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BF1D60)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CLASS_3_3A6EBF1EE854F710_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BF1D70)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CLASS_3_3A6EBF1EE854F710_WRITE_OFFSET UNITYSDK_OFFSET(0x19BF2120)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CLASS_3_3A6EBF1EE854F710__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BF2390)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CLASS_3_3A6EBF1EE854F710__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF2350)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionDisplayItem_Class_3_3A6EBF1EE854F710_TypeDefinitionIndex = 85023;

	class MainCityChatTransitionDisplayItem_Class_3_3A6EBF1EE854F710 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatTransitionDisplayItem_Class_3_3A6EBF1EE854F710_TypeDefinitionIndex)->GetStaticField(0x48D90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatTransitionDisplayItem_Class_3_3A6EBF1EE854F710_TypeDefinitionIndex)->GetStaticField(0x48D98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CLASS_3_3A6EBF1EE854F710__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CLASS_3_3A6EBF1EE854F710__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CLASS_3_3A6EBF1EE854F710_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatTransitionDisplayItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CLASS_3_3A6EBF1EE854F710_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatTransitionDisplayItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM_CLASS_3_3A6EBF1EE854F710_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
