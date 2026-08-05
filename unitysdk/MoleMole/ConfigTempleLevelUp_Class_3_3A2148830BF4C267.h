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

#define MOLEMOLE_CONFIGTEMPLELEVELUP_CLASS_3_3A2148830BF4C267_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19D6C220)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_CLASS_3_3A2148830BF4C267_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19D6C230)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_CLASS_3_3A2148830BF4C267_WRITE_OFFSET UNITYSDK_OFFSET(0x19D6C3C0)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_CLASS_3_3A2148830BF4C267__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D6C520)
#define MOLEMOLE_CONFIGTEMPLELEVELUP_CLASS_3_3A2148830BF4C267__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6C4E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTempleLevelUp_Class_3_3A2148830BF4C267_TypeDefinitionIndex = 74169;

	class ConfigTempleLevelUp_Class_3_3A2148830BF4C267 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigTempleLevelUp*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTempleLevelUp_Class_3_3A2148830BF4C267_TypeDefinitionIndex)->GetStaticField(0x4C180);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigTempleLevelUpSetting*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigTempleLevelUpSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTempleLevelUp_Class_3_3A2148830BF4C267_TypeDefinitionIndex)->GetStaticField(0x4C188);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_CLASS_3_3A2148830BF4C267__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_CLASS_3_3A2148830BF4C267__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_CLASS_3_3A2148830BF4C267_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigTempleLevelUp*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigTempleLevelUp*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_CLASS_3_3A2148830BF4C267_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigTempleLevelUp*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTempleLevelUp*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEMPLELEVELUP_CLASS_3_3A2148830BF4C267_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
