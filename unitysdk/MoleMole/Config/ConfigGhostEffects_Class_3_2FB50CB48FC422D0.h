#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigGhostEffect; }
namespace MoleMole::Config { class ConfigGhostEffects; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CLASS_3_2FB50CB48FC422D0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x134FC2F0)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CLASS_3_2FB50CB48FC422D0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x134FC300)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CLASS_3_2FB50CB48FC422D0_WRITE_OFFSET UNITYSDK_OFFSET(0x134FC490)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CLASS_3_2FB50CB48FC422D0__CCTOR_OFFSET UNITYSDK_OFFSET(0x134FC5F0)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CLASS_3_2FB50CB48FC422D0__CTOR_OFFSET UNITYSDK_OFFSET(0x134FC5B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGhostEffects_Class_3_2FB50CB48FC422D0_TypeDefinitionIndex = 63253;

	class ConfigGhostEffects_Class_3_2FB50CB48FC422D0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigGhostEffects*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::CharacterSize, ::MoleMole::Config::ConfigGhostMove*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGhostEffects_Class_3_2FB50CB48FC422D0_TypeDefinitionIndex)->GetStaticField(0x4BEB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigGhostEffect*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGhostEffects_Class_3_2FB50CB48FC422D0_TypeDefinitionIndex)->GetStaticField(0x4BEB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CLASS_3_2FB50CB48FC422D0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CLASS_3_2FB50CB48FC422D0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CLASS_3_2FB50CB48FC422D0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGhostEffects*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CLASS_3_2FB50CB48FC422D0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigGhostEffects*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_CLASS_3_2FB50CB48FC422D0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
