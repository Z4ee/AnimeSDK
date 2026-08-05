#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AniamtorParamsSetting; }
namespace MoleMole::Config { class BaseConfigAnimatorBeHitPriority; }
namespace MoleMole::Config { class ConfigAnimatorBeHitPriorities; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_CLASS_3_50DFC5D4AD9A278A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B5473E0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_CLASS_3_50DFC5D4AD9A278A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B5473F0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_CLASS_3_50DFC5D4AD9A278A_WRITE_OFFSET UNITYSDK_OFFSET(0x1B547580)
#define MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_CLASS_3_50DFC5D4AD9A278A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5476E0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_CLASS_3_50DFC5D4AD9A278A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5476A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorBeHitPriorities_Class_3_50DFC5D4AD9A278A_TypeDefinitionIndex = 48823;

	class ConfigAnimatorBeHitPriorities_Class_3_50DFC5D4AD9A278A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAnimatorBeHitPriorities*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::MoleMole::AniamtorParamsSetting*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimatorBeHitTag, ::MoleMole::AniamtorParamsSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimatorBeHitPriorities_Class_3_50DFC5D4AD9A278A_TypeDefinitionIndex)->GetStaticField(0x4D3C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::BaseConfigAnimatorBeHitPriority*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::BaseConfigAnimatorBeHitPriority*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimatorBeHitPriorities_Class_3_50DFC5D4AD9A278A_TypeDefinitionIndex)->GetStaticField(0x4D3C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_CLASS_3_50DFC5D4AD9A278A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_CLASS_3_50DFC5D4AD9A278A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_CLASS_3_50DFC5D4AD9A278A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAnimatorBeHitPriorities*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorBeHitPriorities*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_CLASS_3_50DFC5D4AD9A278A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigAnimatorBeHitPriorities*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorBeHitPriorities*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_CLASS_3_50DFC5D4AD9A278A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
