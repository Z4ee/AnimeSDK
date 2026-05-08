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

#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CONFIGHITEFFECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x183BBFB0)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CONFIGHITEFFECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x183BBFC0)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CONFIGHITEFFECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x183BC700)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CONFIGHITEFFECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183BCB60)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_CONFIGHITEFFECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x183BCB20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitEffect_ConfigHitEffect_UnityGeneratedFormatter_TypeDefinitionIndex = 65333;

	class ConfigHitEffect_ConfigHitEffect_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHitEffect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitInhalationEffect*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHitInhalationEffect*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_ConfigHitEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x432A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_ConfigHitEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x432A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorGroundHitType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorGroundHitType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_ConfigHitEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x432B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorAirHitType>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorAirHitType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_ConfigHitEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x432B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorHitEffect>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorHitEffect>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitEffect_ConfigHitEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x432C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CONFIGHITEFFECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CONFIGHITEFFECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CONFIGHITEFFECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHitEffect*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHitEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CONFIGHITEFFECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHitEffect*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_CONFIGHITEFFECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
