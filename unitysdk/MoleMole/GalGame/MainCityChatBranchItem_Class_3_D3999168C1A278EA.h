#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_CLASS_3_D3999168C1A278EA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x129A4720)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_CLASS_3_D3999168C1A278EA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x129A4730)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_CLASS_3_D3999168C1A278EA_WRITE_OFFSET UNITYSDK_OFFSET(0x129A48C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_CLASS_3_D3999168C1A278EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x129A4A20)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_CLASS_3_D3999168C1A278EA__CTOR_OFFSET UNITYSDK_OFFSET(0x129A49E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBranchItem_Class_3_D3999168C1A278EA_TypeDefinitionIndex = 64390;

	class MainCityChatBranchItem_Class_3_D3999168C1A278EA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatBranchItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBranchItem_Class_3_D3999168C1A278EA_TypeDefinitionIndex)->GetStaticField(0x50E90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_CLASS_3_D3999168C1A278EA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_CLASS_3_D3999168C1A278EA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_CLASS_3_D3999168C1A278EA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatBranchItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_CLASS_3_D3999168C1A278EA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatBranchItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_CLASS_3_D3999168C1A278EA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
