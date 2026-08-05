#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHitEffect; }
namespace MoleMole::Config { class ConfigHitInhalationEffect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLASS_3_060AA365E1E085F5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4B1600)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLASS_3_060AA365E1E085F5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B1610)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLASS_3_060AA365E1E085F5_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4B1CE0)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLASS_3_060AA365E1E085F5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B2110)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLASS_3_060AA365E1E085F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B20D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitEffect_Class_3_060AA365E1E085F5_TypeDefinitionIndex = 60769;

	class ConfigHitEffect_Class_3_060AA365E1E085F5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHitEffect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorAirHitType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorAirHitType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_Class_3_060AA365E1E085F5_TypeDefinitionIndex)->GetStaticField(0x3C860);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_Class_3_060AA365E1E085F5_TypeDefinitionIndex)->GetStaticField(0x3C868);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorHitEffect>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorHitEffect>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_Class_3_060AA365E1E085F5_TypeDefinitionIndex)->GetStaticField(0x3C870);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitInhalationEffect*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitInhalationEffect*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_Class_3_060AA365E1E085F5_TypeDefinitionIndex)->GetStaticField(0x3C878);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorGroundHitType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorGroundHitType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_Class_3_060AA365E1E085F5_TypeDefinitionIndex)->GetStaticField(0x3C880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLASS_3_060AA365E1E085F5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLASS_3_060AA365E1E085F5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLASS_3_060AA365E1E085F5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHitEffect*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHitEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLASS_3_060AA365E1E085F5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHitEffect*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CLASS_3_060AA365E1E085F5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
