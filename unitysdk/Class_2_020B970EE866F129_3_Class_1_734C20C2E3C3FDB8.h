#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace RPG::GameCore { class ChimeraDuelLeaveNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x98E9830)
#define CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8_METHOD_1_2E97E23AE47B7431_OFFSET UNITYSDK_OFFSET(0x98E9850)
#define CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8_METHOD_1_73667856B2713747_OFFSET UNITYSDK_OFFSET(0x98E9510)
#define CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8_METHOD_1_F3056E6B09294016_OFFSET UNITYSDK_OFFSET(0x98E98D0)
#define CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x98E9840)
#define CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8__CTOR_OFFSET UNITYSDK_OFFSET(0x98E89F0)

inline static constexpr unsigned int Class_2_020B970EE866F129_3_Class_1_734C20C2E3C3FDB8_TypeDefinitionIndex = 71743;

class Class_2_020B970EE866F129_3_Class_1_734C20C2E3C3FDB8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_4; // 0x28
	::RPG::GameCore::ChimeraDuelLeaveNode* Field_1_0; // 0x30
	::System::Boolean _IsFinished_k__BackingField; // 0x38
	::System::Single Field_1_5; // 0x3C

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelLeaveNode* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelLeaveNode*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_73667856B2713747(::RPG::Client::Prop::DuelChimeraProxy* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::DuelChimeraProxy*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8_METHOD_1_73667856B2713747_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8_SET_ISFINISHED_OFFSET))(this, value);
	}

	::System::Single Method_1_2E97E23AE47B7431(::RPG::Client::Prop::DuelChimeraProxy* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::Prop::DuelChimeraProxy*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8_METHOD_1_2E97E23AE47B7431_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3056E6B09294016(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_734C20C2E3C3FDB8_METHOD_1_F3056E6B09294016_OFFSET))(this, a1);
	}
};
