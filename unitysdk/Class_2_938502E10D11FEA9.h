#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_5DF5F62C68EF718F;
namespace RPG::Client { class MockAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_938502E10D11FEA9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEEE250)
#define CLASS_2_938502E10D11FEA9_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xBEEE230)
#define CLASS_2_938502E10D11FEA9_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEEE240)
#define CLASS_2_938502E10D11FEA9_METHOD_2_1482A97F588F58C1_OFFSET UNITYSDK_OFFSET(0xBEEE640)
#define CLASS_2_938502E10D11FEA9_METHOD_2_438300467EDE6B0B_OFFSET UNITYSDK_OFFSET(0xBEEE300)
#define CLASS_2_938502E10D11FEA9_METHOD_2_BF7707C04361A205_OFFSET UNITYSDK_OFFSET(0xBEEEB60)
#define CLASS_2_938502E10D11FEA9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBEEE600)
#define CLASS_2_938502E10D11FEA9_TICK_OFFSET UNITYSDK_OFFSET(0xBEEE2A0)
#define CLASS_2_938502E10D11FEA9__CTOR_OFFSET UNITYSDK_OFFSET(0xBEEEB70)
#define CLASS_2_938502E10D11FEA9__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xBEEE590)

inline static constexpr unsigned int Class_2_938502E10D11FEA9_TypeDefinitionIndex = 57003;

class Class_2_938502E10D11FEA9 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::MockAnimator* NAHOHKAHBPK; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_5DF5F62C68EF718F*>* INMNMAPFKFJ; // 0x20
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x28
	::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9__CTOR_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1482A97F588F58C1(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9_METHOD_2_1482A97F588F58C1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_438300467EDE6B0B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9_METHOD_2_438300467EDE6B0B_OFFSET))(this, a1);
	}

	::RPG::Client::MockAnimator* Method_2_BF7707C04361A205()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9_METHOD_2_BF7707C04361A205_OFFSET))(this);
	}
};
