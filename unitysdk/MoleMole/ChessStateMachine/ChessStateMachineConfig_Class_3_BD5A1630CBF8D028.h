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

#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CLASS_3_BD5A1630CBF8D028_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x150E3F80)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CLASS_3_BD5A1630CBF8D028_READMEMBER_OFFSET UNITYSDK_OFFSET(0x150E3F90)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CLASS_3_BD5A1630CBF8D028_WRITE_OFFSET UNITYSDK_OFFSET(0x150E41E0)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CLASS_3_BD5A1630CBF8D028__CCTOR_OFFSET UNITYSDK_OFFSET(0x150E43A0)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CLASS_3_BD5A1630CBF8D028__CTOR_OFFSET UNITYSDK_OFFSET(0x150E4360)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ChessStateMachineConfig_Class_3_BD5A1630CBF8D028_TypeDefinitionIndex = 84140;

	class ChessStateMachineConfig_Class_3_BD5A1630CBF8D028 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ChessStateMachine::ChessStateMachineConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::TransitionConfig*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::TransitionConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChessStateMachineConfig_Class_3_BD5A1630CBF8D028_TypeDefinitionIndex)->GetStaticField(0x39990);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::LayerConfig*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::LayerConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChessStateMachineConfig_Class_3_BD5A1630CBF8D028_TypeDefinitionIndex)->GetStaticField(0x39998);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::StateNodeConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ChessStateMachine::StateNodeConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChessStateMachineConfig_Class_3_BD5A1630CBF8D028_TypeDefinitionIndex)->GetStaticField(0x399A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CLASS_3_BD5A1630CBF8D028__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CLASS_3_BD5A1630CBF8D028__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CLASS_3_BD5A1630CBF8D028_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ChessStateMachine::ChessStateMachineConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CLASS_3_BD5A1630CBF8D028_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ChessStateMachine::ChessStateMachineConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSSTATEMACHINECONFIG_CLASS_3_BD5A1630CBF8D028_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
