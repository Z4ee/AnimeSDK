#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ATTACKPATTERNBINDANIMATORSTATE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x122FE200)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ATTACKPATTERNBINDANIMATORSTATE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x122FE210)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ATTACKPATTERNBINDANIMATORSTATE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x122FE6B0)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ATTACKPATTERNBINDANIMATORSTATE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x122FE9B0)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ATTACKPATTERNBINDANIMATORSTATE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x122FE970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackPatternBindAnimatorState_AttackPatternBindAnimatorState_UnityGeneratedFormatter_TypeDefinitionIndex = 82884;

	class AttackPatternBindAnimatorState_AttackPatternBindAnimatorState_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AttackPatternBindAnimatorState*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AttackPatternBindAnimatorState_AttackPatternBindAnimatorState_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C300);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AttackPatternBindAnimatorState_AttackPatternBindAnimatorState_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C308);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AttackPatternBindAnimatorState_AttackPatternBindAnimatorState_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ATTACKPATTERNBINDANIMATORSTATE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ATTACKPATTERNBINDANIMATORSTATE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ATTACKPATTERNBINDANIMATORSTATE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AttackPatternBindAnimatorState*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AttackPatternBindAnimatorState*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ATTACKPATTERNBINDANIMATORSTATE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AttackPatternBindAnimatorState*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AttackPatternBindAnimatorState*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_ATTACKPATTERNBINDANIMATORSTATE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
