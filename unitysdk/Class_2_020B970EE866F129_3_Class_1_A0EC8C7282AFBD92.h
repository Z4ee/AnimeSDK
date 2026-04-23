#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1141;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace RPG::GameCore { class ChimeraDuelLeaveNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_020B970EE866F129_3_CLASS_1_A0EC8C7282AFBD92_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x98E9ED0)
#define CLASS_2_020B970EE866F129_3_CLASS_1_A0EC8C7282AFBD92_METHOD_1_7D2C7213E6B374D8_OFFSET UNITYSDK_OFFSET(0x98E9EF0)
#define CLASS_2_020B970EE866F129_3_CLASS_1_A0EC8C7282AFBD92_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x98E9EE0)
#define CLASS_2_020B970EE866F129_3_CLASS_1_A0EC8C7282AFBD92__CTOR_OFFSET UNITYSDK_OFFSET(0x98E9230)

inline static constexpr unsigned int Class_2_020B970EE866F129_3_Class_1_A0EC8C7282AFBD92_TypeDefinitionIndex = 71744;

class Class_2_020B970EE866F129_3_Class_1_A0EC8C7282AFBD92 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1141* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* Field_1_1; // 0x20
	::RPG::GameCore::ChimeraDuelLeaveNode* Field_1_0; // 0x28
	::System::Boolean _IsFinished_k__BackingField; // 0x30
	::System::Single Field_1_4; // 0x34

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelLeaveNode* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a2, ::Class_0_16E4307DCC419505_1141* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelLeaveNode*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*, ::Class_0_16E4307DCC419505_1141*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_A0EC8C7282AFBD92__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_A0EC8C7282AFBD92_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_A0EC8C7282AFBD92_SET_ISFINISHED_OFFSET))(this, value);
	}

	::System::Void Method_1_7D2C7213E6B374D8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_A0EC8C7282AFBD92_METHOD_1_7D2C7213E6B374D8_OFFSET))(this, a1);
	}
};
