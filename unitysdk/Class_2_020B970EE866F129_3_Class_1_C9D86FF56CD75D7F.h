#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1307;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace RPG::GameCore { class ChimeraDuelLeaveNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC43C4D0)
#define CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F_METHOD_1_F3056E6B09294016_OFFSET UNITYSDK_OFFSET(0xC43C4F0)
#define CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC43C4E0)
#define CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F__CTOR_OFFSET UNITYSDK_OFFSET(0xC43C280)

inline static constexpr unsigned int Class_2_020B970EE866F129_3_Class_1_C9D86FF56CD75D7F_TypeDefinitionIndex = 77777;

class Class_2_020B970EE866F129_3_Class_1_C9D86FF56CD75D7F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1307* EEFMDEHLLFI; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* HGCNLFIMDKL; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KHOPAIPODLM; // 0x20
	::RPG::GameCore::ChimeraDuelLeaveNode* JKLBAAHFJDJ; // 0x28
	::System::Boolean _IsFinished_k__BackingField; // 0x30
	::System::Single FOMCKBAHCFM; // 0x34

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelLeaveNode* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a2, ::Class_0_16E4307DCC419505_1307* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelLeaveNode*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*, ::Class_0_16E4307DCC419505_1307*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_3_CLASS_1_C9D86FF56CD75D7F__CTOR_OFFSET))(this, a1, a2, a3);
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
