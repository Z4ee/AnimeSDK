#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1197;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace RPG::GameCore { class ChimeraDuelLeaveNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xAFDCC90)
#define CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F_METHOD_1_F3056E6B09294016_OFFSET UNITYSDK_OFFSET(0xAFDCCB0)
#define CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xAFDCCA0)
#define CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F__CTOR_OFFSET UNITYSDK_OFFSET(0xAFDC980)

inline static constexpr unsigned int Class_2_020B970EE866F129_3_Class_1_C9D86FF56CD75D7F_TypeDefinitionIndex = 72766;

class Class_2_020B970EE866F129_3_Class_1_C9D86FF56CD75D7F : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelLeaveNode* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1197* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_3; // 0x28
	::System::Boolean _IsFinished_k__BackingField; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelLeaveNode* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a2, ::Class_0_16E4307DCC419505_1197* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelLeaveNode*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*, ::Class_0_16E4307DCC419505_1197*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F_SET_ISFINISHED_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3056E6B09294016(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F_METHOD_1_F3056E6B09294016_OFFSET))(this, a1);
	}
};
