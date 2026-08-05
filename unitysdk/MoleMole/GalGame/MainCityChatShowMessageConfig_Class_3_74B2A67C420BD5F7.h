#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShowMessageConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_CLASS_3_74B2A67C420BD5F7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1383F960)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_CLASS_3_74B2A67C420BD5F7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1383F970)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_CLASS_3_74B2A67C420BD5F7_WRITE_OFFSET UNITYSDK_OFFSET(0x138402D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_CLASS_3_74B2A67C420BD5F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x13840870)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_CLASS_3_74B2A67C420BD5F7__CTOR_OFFSET UNITYSDK_OFFSET(0x13840830)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowMessageConfig_Class_3_74B2A67C420BD5F7_TypeDefinitionIndex = 85916;

	class MainCityChatShowMessageConfig_Class_3_74B2A67C420BD5F7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowMessageConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowMessageConfig_Class_3_74B2A67C420BD5F7_TypeDefinitionIndex)->GetStaticField(0x3F8E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowMessageConfig_Class_3_74B2A67C420BD5F7_TypeDefinitionIndex)->GetStaticField(0x3F8E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowMessageConfig_Class_3_74B2A67C420BD5F7_TypeDefinitionIndex)->GetStaticField(0x3F8F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowMessageConfig_Class_3_74B2A67C420BD5F7_TypeDefinitionIndex)->GetStaticField(0x3F8F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_CLASS_3_74B2A67C420BD5F7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_CLASS_3_74B2A67C420BD5F7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_CLASS_3_74B2A67C420BD5F7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowMessageConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowMessageConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_CLASS_3_74B2A67C420BD5F7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowMessageConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowMessageConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_CLASS_3_74B2A67C420BD5F7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
