#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigUISimpleParkourGame; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourLevelConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CLASS_3_642C003C1338CE7A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4B8CE0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CLASS_3_642C003C1338CE7A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B8CF0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CLASS_3_642C003C1338CE7A_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4B8F40)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CLASS_3_642C003C1338CE7A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B9100)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CLASS_3_642C003C1338CE7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B90C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_Class_3_642C003C1338CE7A_TypeDefinitionIndex = 73972;

	class ConfigUISimpleParkourGame_Class_3_642C003C1338CE7A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigUISimpleParkourGame*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_Class_3_642C003C1338CE7A_TypeDefinitionIndex)->GetStaticField(0x3C960);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_Class_3_642C003C1338CE7A_TypeDefinitionIndex)->GetStaticField(0x3C968);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_Class_3_642C003C1338CE7A_TypeDefinitionIndex)->GetStaticField(0x3C970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CLASS_3_642C003C1338CE7A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CLASS_3_642C003C1338CE7A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CLASS_3_642C003C1338CE7A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUISimpleParkourGame*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CLASS_3_642C003C1338CE7A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigUISimpleParkourGame*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CLASS_3_642C003C1338CE7A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
