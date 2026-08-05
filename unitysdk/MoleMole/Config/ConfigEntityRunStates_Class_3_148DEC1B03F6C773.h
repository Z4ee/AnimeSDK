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

#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CLASS_3_148DEC1B03F6C773_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12EFFAD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CLASS_3_148DEC1B03F6C773_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12EFFAE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CLASS_3_148DEC1B03F6C773_WRITE_OFFSET UNITYSDK_OFFSET(0x12EFFC70)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CLASS_3_148DEC1B03F6C773__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EFFDD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CLASS_3_148DEC1B03F6C773__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFFD90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityRunStates_Class_3_148DEC1B03F6C773_TypeDefinitionIndex = 77289;

	class ConfigEntityRunStates_Class_3_148DEC1B03F6C773 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigEntityRunStates*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityRunStates_Class_3_148DEC1B03F6C773_TypeDefinitionIndex)->GetStaticField(0x4E680);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRunState*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRunState*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigEntityRunStates_Class_3_148DEC1B03F6C773_TypeDefinitionIndex)->GetStaticField(0x4E688);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CLASS_3_148DEC1B03F6C773__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CLASS_3_148DEC1B03F6C773__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CLASS_3_148DEC1B03F6C773_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityRunStates*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunStates*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CLASS_3_148DEC1B03F6C773_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityRunStates*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunStates*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_CLASS_3_148DEC1B03F6C773_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
