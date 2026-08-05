#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HackObjectType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHack; }
namespace MoleMole::Config { class ConfigHack_HackObjectTipKeyEntry; }
namespace MoleMole::Config { class HackObjectTrait; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_CONFIGHACK_CLASS_3_F7A014DE1F07A7E0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B54C8F0)
#define MOLEMOLE_CONFIG_CONFIGHACK_CLASS_3_F7A014DE1F07A7E0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B54C900)
#define MOLEMOLE_CONFIG_CONFIGHACK_CLASS_3_F7A014DE1F07A7E0_WRITE_OFFSET UNITYSDK_OFFSET(0x1B54CB60)
#define MOLEMOLE_CONFIG_CONFIGHACK_CLASS_3_F7A014DE1F07A7E0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B54CD20)
#define MOLEMOLE_CONFIG_CONFIGHACK_CLASS_3_F7A014DE1F07A7E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54CCE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHack_Class_3_F7A014DE1F07A7E0_TypeDefinitionIndex = 50934;

	class ConfigHack_Class_3_F7A014DE1F07A7E0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHack*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::HackObjectTrait*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::HackObjectTrait*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHack_Class_3_F7A014DE1F07A7E0_TypeDefinitionIndex)->GetStaticField(0x4D3E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HackObjectType, ::MoleMole::Config::ConfigHack_HackObjectTipKeyEntry*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::HackObjectType, ::MoleMole::Config::ConfigHack_HackObjectTipKeyEntry*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHack_Class_3_F7A014DE1F07A7E0_TypeDefinitionIndex)->GetStaticField(0x4D3E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHack_Class_3_F7A014DE1F07A7E0_TypeDefinitionIndex)->GetStaticField(0x4D3F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_CLASS_3_F7A014DE1F07A7E0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_CLASS_3_F7A014DE1F07A7E0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_CLASS_3_F7A014DE1F07A7E0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHack*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHack*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_CLASS_3_F7A014DE1F07A7E0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHack*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHack*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_CLASS_3_F7A014DE1F07A7E0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
