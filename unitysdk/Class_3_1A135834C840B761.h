#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MorphBallBoosterMiddleware; }
namespace System { class EventArgs; }

#define CLASS_3_1A135834C840B761_METHOD_3_1D9AAFC705A2920A_OFFSET UNITYSDK_OFFSET(0x1A8A6F40)
#define CLASS_3_1A135834C840B761_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1A8A6F30)
#define CLASS_3_1A135834C840B761_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A8A6F20)
#define CLASS_3_1A135834C840B761_METHOD_3_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x1A8A6B90)
#define CLASS_3_1A135834C840B761_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1A8A67C0)
#define CLASS_3_1A135834C840B761_METHOD_3_BECCB392D49F932B_OFFSET UNITYSDK_OFFSET(0x1A8A7110)
#define CLASS_3_1A135834C840B761_METHOD_3_C46DE03DA12C2BD6_OFFSET UNITYSDK_OFFSET(0x1A8A7510)
#define CLASS_3_1A135834C840B761_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1A8A7330)
#define CLASS_3_1A135834C840B761_METHOD_3_F3DED7716E7F3692_OFFSET UNITYSDK_OFFSET(0x1A8A7320)
#define CLASS_3_1A135834C840B761_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A8A6770)
#define CLASS_3_1A135834C840B761_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A8A6940)
#define CLASS_3_1A135834C840B761_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x1A8A6AC0)
#define CLASS_3_1A135834C840B761__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8A6990)
#define CLASS_3_1A135834C840B761__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A6EE0)

inline static constexpr unsigned int Class_3_1A135834C840B761_TypeDefinitionIndex = 49830;

class Class_3_1A135834C840B761 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_1A135834C840B761*>
{
public:
	::MoleMole::MorphBallBoosterMiddleware* Field_3_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_RECEIVEFEATUREEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_METHOD_3_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_1D9AAFC705A2920A(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_METHOD_3_1D9AAFC705A2920A_OFFSET))(this, a1);
	}

	::System::Void Method_3_BECCB392D49F932B(::System::Nullable_1<::UnityEngine::Vector3> a1, ::System::Nullable_1<::System::Single> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_METHOD_3_BECCB392D49F932B_OFFSET))(this, a1, a2);
	}

	::MoleMole::MorphBallBoosterMiddleware* Method_3_F3DED7716E7F3692()
	{
		return ((::MoleMole::MorphBallBoosterMiddleware*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_METHOD_3_F3DED7716E7F3692_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_C46DE03DA12C2BD6(::Foundation::ViewObject::EViewObjectComponentFeatureEvent a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_1A135834C840B761_METHOD_3_C46DE03DA12C2BD6_OFFSET))(this, a1, a2);
	}
};
