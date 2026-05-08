#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigTempleLevelUp; }
namespace MoleMole { class ConfigTempleLevelUpSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGTEMPLELEVELUP_CONFIGTEMPLELEVELUP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1425FA60)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_CONFIGTEMPLELEVELUP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1425FA70)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_CONFIGTEMPLELEVELUP_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1425FC50)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_CONFIGTEMPLELEVELUP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1425FDF0)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_CONFIGTEMPLELEVELUP_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1425FDB0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTempleLevelUp_ConfigTempleLevelUp_UnityGeneratedFormatter_TypeDefinitionIndex = 60557;

	class ConfigTempleLevelUp_ConfigTempleLevelUp_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigTempleLevelUp*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigTempleLevelUpSetting*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigTempleLevelUpSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTempleLevelUp_ConfigTempleLevelUp_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45890);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTempleLevelUp_ConfigTempleLevelUp_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45898);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_CONFIGTEMPLELEVELUP_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_CONFIGTEMPLELEVELUP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_CONFIGTEMPLELEVELUP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigTempleLevelUp*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigTempleLevelUp*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_CONFIGTEMPLELEVELUP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigTempleLevelUp*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTempleLevelUp*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_CONFIGTEMPLELEVELUP_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
