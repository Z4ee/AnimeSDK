#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3C323C92D149BEA3_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x10C8BDE0)
#define CLASS_1_3C323C92D149BEA3_METHOD_1_36E9BAC1A53462F7_OFFSET UNITYSDK_OFFSET(0x10C8B840)
#define CLASS_1_3C323C92D149BEA3_METHOD_1_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x10C8B680)
#define CLASS_1_3C323C92D149BEA3_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x10C8BC40)
#define CLASS_1_3C323C92D149BEA3_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x10C8BB40)
#define CLASS_1_3C323C92D149BEA3_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x10C8BDF0)
#define CLASS_1_3C323C92D149BEA3__CTOR_OFFSET UNITYSDK_OFFSET(0x10C8B400)

inline static constexpr unsigned int Class_1_3C323C92D149BEA3_TypeDefinitionIndex = 72962;

class Class_1_3C323C92D149BEA3 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_1; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x20
	::System::Action* Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34
	::System::Boolean _IsFinished_k__BackingField; // 0x38

	::System::Void _ctor(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Action* a2, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Action*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3C323C92D149BEA3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_36E9BAC1A53462F7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3C323C92D149BEA3_METHOD_1_36E9BAC1A53462F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C323C92D149BEA3_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C323C92D149BEA3_METHOD_1_A44A18C9451109E4_OFFSET))(this);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C323C92D149BEA3_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C323C92D149BEA3_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C323C92D149BEA3_SET_ISFINISHED_OFFSET))(this, a1);
	}
};
