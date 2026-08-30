#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_255;
class Class_4_F441CE80F00840D2;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D3FF619E4EE06A5B_3_METHOD_3_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x1527D780)
#define CLASS_3_D3FF619E4EE06A5B_3_METHOD_3_BF3A345573CDA643_OFFSET UNITYSDK_OFFSET(0x1527DDE0)
#define CLASS_3_D3FF619E4EE06A5B_3_METHOD_3_C38F03C1E988B48E_OFFSET UNITYSDK_OFFSET(0x1527DC30)
#define CLASS_3_D3FF619E4EE06A5B_3_METHOD_3_FC1E1C20DEDA8C3B_OFFSET UNITYSDK_OFFSET(0x1527E0A0)
#define CLASS_3_D3FF619E4EE06A5B_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1527D730)
#define CLASS_3_D3FF619E4EE06A5B_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1527D700)

inline static constexpr unsigned int Class_3_D3FF619E4EE06A5B_3_TypeDefinitionIndex = 58347;

class Class_3_D3FF619E4EE06A5B_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_F441CE80F00840D2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_F441CE80F00840D2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_F441CE80F00840D2*))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_3_METHOD_3_B877181B6123B7F6_OFFSET))(this);
	}

	::System::String* Method_3_FC1E1C20DEDA8C3B(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_3_METHOD_3_FC1E1C20DEDA8C3B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_3_C38F03C1E988B48E(::Class_0_16E4307DCC419505_255* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_3_METHOD_3_C38F03C1E988B48E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Entitas::IEntity*>* Method_3_BF3A345573CDA643(::Class_0_16E4307DCC419505_255* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Entitas::IEntity*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_3_METHOD_3_BF3A345573CDA643_OFFSET))(this, a1, a2);
	}
};
