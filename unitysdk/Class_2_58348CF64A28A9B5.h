#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class MockAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_58348CF64A28A9B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FDC720)
#define CLASS_2_58348CF64A28A9B5_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x8FDC700)
#define CLASS_2_58348CF64A28A9B5_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8FDC710)
#define CLASS_2_58348CF64A28A9B5_METHOD_2_5082EC8D5166F17C_OFFSET UNITYSDK_OFFSET(0x8FDCBB0)
#define CLASS_2_58348CF64A28A9B5_METHOD_2_741837A0FB99F394_OFFSET UNITYSDK_OFFSET(0x8FDC7D0)
#define CLASS_2_58348CF64A28A9B5_METHOD_2_BF7707C04361A205_OFFSET UNITYSDK_OFFSET(0x8FDD020)
#define CLASS_2_58348CF64A28A9B5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8FDCB70)
#define CLASS_2_58348CF64A28A9B5_TICK_OFFSET UNITYSDK_OFFSET(0x8FDC770)
#define CLASS_2_58348CF64A28A9B5__CTOR_OFFSET UNITYSDK_OFFSET(0x8FDD030)
#define CLASS_2_58348CF64A28A9B5__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x8FDCB00)
#define CLASS_2_58348CF64A28A9B5___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8FDD040)
#define CLASS_2_58348CF64A28A9B5___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x8FDD050)

inline static constexpr unsigned int Class_2_58348CF64A28A9B5_TypeDefinitionIndex = 52534;

class Class_2_58348CF64A28A9B5 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_D27BF54F25500E5F*>* Field_2_3; // 0x18
	::RPG::Client::MockAnimator* Field_2_2; // 0x20
	::System::Boolean _EnableAnimatorMoveCallback_k__BackingField; // 0x28
	::System::Int32 _AnimatorMoveCallbackOrder_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5__CTOR_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5082EC8D5166F17C(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5_METHOD_2_5082EC8D5166F17C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_741837A0FB99F394(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5_METHOD_2_741837A0FB99F394_OFFSET))(this, a1);
	}

	::RPG::Client::MockAnimator* Method_2_BF7707C04361A205()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5_METHOD_2_BF7707C04361A205_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58348CF64A28A9B5___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
