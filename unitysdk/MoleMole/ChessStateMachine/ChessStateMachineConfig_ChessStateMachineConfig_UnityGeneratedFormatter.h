#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::ChessStateMachine { class ChessStateMachineConfig; }
namespace MoleMole::ChessStateMachine { class LayerConfig; }
namespace MoleMole::ChessStateMachine { class StateNodeConfig; }
namespace MoleMole::ChessStateMachine { class TransitionConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CHESSSTATEMACHINECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12C55C00)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CHESSSTATEMACHINECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12C55C10)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CHESSSTATEMACHINECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12C55EB0)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CHESSSTATEMACHINECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C560A0)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CHESSSTATEMACHINECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C56060)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ChessStateMachineConfig_ChessStateMachineConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 63366;

	class ChessStateMachineConfig_ChessStateMachineConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ChessStateMachine::ChessStateMachineConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::LayerConfig*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::LayerConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChessStateMachineConfig_ChessStateMachineConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42AD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::TransitionConfig*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::TransitionConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChessStateMachineConfig_ChessStateMachineConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42AD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::StateNodeConfig*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::StateNodeConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChessStateMachineConfig_ChessStateMachineConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42AE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CHESSSTATEMACHINECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CHESSSTATEMACHINECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CHESSSTATEMACHINECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ChessStateMachine::ChessStateMachineConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CHESSSTATEMACHINECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ChessStateMachine::ChessStateMachineConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CHESSSTATEMACHINECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
