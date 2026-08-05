#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShowPostConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_CLASS_3_1B3D7EFA4E569C2E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1737A0F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_CLASS_3_1B3D7EFA4E569C2E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1737A100)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_CLASS_3_1B3D7EFA4E569C2E_WRITE_OFFSET UNITYSDK_OFFSET(0x1737A920)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_CLASS_3_1B3D7EFA4E569C2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1737AE00)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_CLASS_3_1B3D7EFA4E569C2E__CTOR_OFFSET UNITYSDK_OFFSET(0x1737ADC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowPostConfig_Class_3_1B3D7EFA4E569C2E_TypeDefinitionIndex = 67265;

	class MainCityChatShowPostConfig_Class_3_1B3D7EFA4E569C2E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowPostConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowPostConfig_Class_3_1B3D7EFA4E569C2E_TypeDefinitionIndex)->GetStaticField(0x44D80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowPostConfig_Class_3_1B3D7EFA4E569C2E_TypeDefinitionIndex)->GetStaticField(0x44D88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowPostConfig_Class_3_1B3D7EFA4E569C2E_TypeDefinitionIndex)->GetStaticField(0x44D90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowPostConfig_Class_3_1B3D7EFA4E569C2E_TypeDefinitionIndex)->GetStaticField(0x44D98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_CLASS_3_1B3D7EFA4E569C2E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_CLASS_3_1B3D7EFA4E569C2E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_CLASS_3_1B3D7EFA4E569C2E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowPostConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowPostConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_CLASS_3_1B3D7EFA4E569C2E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowPostConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowPostConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_CLASS_3_1B3D7EFA4E569C2E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
