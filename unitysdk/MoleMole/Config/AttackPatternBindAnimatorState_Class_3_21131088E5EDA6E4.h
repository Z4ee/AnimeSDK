#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_CLASS_3_21131088E5EDA6E4_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF1317E0)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_CLASS_3_21131088E5EDA6E4_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF1317F0)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_CLASS_3_21131088E5EDA6E4_WRITE_OFFSET UNITYSDK_OFFSET(0xF131C40)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_CLASS_3_21131088E5EDA6E4__CCTOR_OFFSET UNITYSDK_OFFSET(0xF131F10)
#define MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_CLASS_3_21131088E5EDA6E4__CTOR_OFFSET UNITYSDK_OFFSET(0xF131ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackPatternBindAnimatorState_Class_3_21131088E5EDA6E4_TypeDefinitionIndex = 76401;

	class AttackPatternBindAnimatorState_Class_3_21131088E5EDA6E4 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AttackPatternBindAnimatorState*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AttackPatternBindAnimatorState_Class_3_21131088E5EDA6E4_TypeDefinitionIndex)->GetStaticField(0x51780);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AttackPatternBindAnimatorState_Class_3_21131088E5EDA6E4_TypeDefinitionIndex)->GetStaticField(0x51788);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AttackPatternBindAnimatorState_Class_3_21131088E5EDA6E4_TypeDefinitionIndex)->GetStaticField(0x51790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_CLASS_3_21131088E5EDA6E4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_CLASS_3_21131088E5EDA6E4__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_CLASS_3_21131088E5EDA6E4_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AttackPatternBindAnimatorState*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AttackPatternBindAnimatorState*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_CLASS_3_21131088E5EDA6E4_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AttackPatternBindAnimatorState*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AttackPatternBindAnimatorState*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPATTERNBINDANIMATORSTATE_CLASS_3_21131088E5EDA6E4_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
