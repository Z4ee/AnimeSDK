#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityRunState; }
namespace MoleMole::Config { class ConfigEntityRunStates; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CONFIGENTITYRUNSTATES_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFB03780)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CONFIGENTITYRUNSTATES_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFB03790)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CONFIGENTITYRUNSTATES_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xFB03970)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CONFIGENTITYRUNSTATES_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB03B10)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CONFIGENTITYRUNSTATES_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xFB03AD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityRunStates_ConfigEntityRunStates_UnityGeneratedFormatter_TypeDefinitionIndex = 40062;

	class ConfigEntityRunStates_ConfigEntityRunStates_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityRunStates*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityRunStates_ConfigEntityRunStates_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x445B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRunState*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRunState*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityRunStates_ConfigEntityRunStates_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x445B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CONFIGENTITYRUNSTATES_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CONFIGENTITYRUNSTATES_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CONFIGENTITYRUNSTATES_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityRunStates*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunStates*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CONFIGENTITYRUNSTATES_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityRunStates*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunStates*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CONFIGENTITYRUNSTATES_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
