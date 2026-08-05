#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterDamageDecalType.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitWall; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CLASS_3_F6113D6E9213B3CE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19AC91D0)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CLASS_3_F6113D6E9213B3CE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19AC91E0)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CLASS_3_F6113D6E9213B3CE_WRITE_OFFSET UNITYSDK_OFFSET(0x19AC9370)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CLASS_3_F6113D6E9213B3CE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AC94D0)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CLASS_3_F6113D6E9213B3CE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC9490)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSpecialEffectHitWall_Class_3_F6113D6E9213B3CE_TypeDefinitionIndex = 76746;

	class ConfigSpecialEffectHitWall_Class_3_F6113D6E9213B3CE : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSpecialEffectHitWall*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DamageDecalData>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DamageDecalData>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSpecialEffectHitWall_Class_3_F6113D6E9213B3CE_TypeDefinitionIndex)->GetStaticField(0x51830);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CharacterDamageDecalType>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CharacterDamageDecalType>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSpecialEffectHitWall_Class_3_F6113D6E9213B3CE_TypeDefinitionIndex)->GetStaticField(0x51838);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CLASS_3_F6113D6E9213B3CE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CLASS_3_F6113D6E9213B3CE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CLASS_3_F6113D6E9213B3CE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSpecialEffectHitWall*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitWall*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CLASS_3_F6113D6E9213B3CE_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSpecialEffectHitWall*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitWall*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_CLASS_3_F6113D6E9213B3CE_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
