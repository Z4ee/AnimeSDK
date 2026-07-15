#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class MockAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_938502E10D11FEA9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D19F00)
#define CLASS_2_938502E10D11FEA9_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x14D19EE0)
#define CLASS_2_938502E10D11FEA9_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x14D19EF0)
#define CLASS_2_938502E10D11FEA9_METHOD_2_1482A97F588F58C1_OFFSET UNITYSDK_OFFSET(0x14D1A390)
#define CLASS_2_938502E10D11FEA9_METHOD_2_BF7707C04361A205_OFFSET UNITYSDK_OFFSET(0x14D1A820)
#define CLASS_2_938502E10D11FEA9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14D1A350)
#define CLASS_2_938502E10D11FEA9_METHOD_2_E9BCC4C7DCC8C682_OFFSET UNITYSDK_OFFSET(0x14D19FB0)
#define CLASS_2_938502E10D11FEA9_TICK_OFFSET UNITYSDK_OFFSET(0x14D19F50)
#define CLASS_2_938502E10D11FEA9__CTOR_OFFSET UNITYSDK_OFFSET(0x14D1A830)
#define CLASS_2_938502E10D11FEA9__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x14D1A2E0)

inline static constexpr unsigned int Class_2_938502E10D11FEA9_TypeDefinitionIndex = 54449;

class Class_2_938502E10D11FEA9 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D27BF54F25500E5F*>* Field_2_0; // 0x18
	::RPG::Client::MockAnimator* Field_2_1; // 0x20
	::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0x28
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x2C

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

	::System::Void Method_2_E9BCC4C7DCC8C682(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9_METHOD_2_E9BCC4C7DCC8C682_OFFSET))(this, a1);
	}

	::RPG::Client::MockAnimator* Method_2_BF7707C04361A205()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_938502E10D11FEA9_METHOD_2_BF7707C04361A205_OFFSET))(this);
	}
};
