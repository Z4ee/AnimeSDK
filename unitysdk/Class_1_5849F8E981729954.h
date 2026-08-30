#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A4088D9A55CD220E;
namespace RPG::Client { class UIFollow3DTarget; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5849F8E981729954_METHOD_1_34566E7905D6C48F_OFFSET UNITYSDK_OFFSET(0x105D0BF0)
#define CLASS_1_5849F8E981729954_METHOD_1_40B2350F26214398_OFFSET UNITYSDK_OFFSET(0x105D1010)
#define CLASS_1_5849F8E981729954_METHOD_1_4BF7E3CA997D27A1_OFFSET UNITYSDK_OFFSET(0x105D0D30)
#define CLASS_1_5849F8E981729954_METHOD_1_6448565AF11DF07D_OFFSET UNITYSDK_OFFSET(0x105D0E40)
#define CLASS_1_5849F8E981729954_METHOD_1_AF92A0134ABF8B8A_OFFSET UNITYSDK_OFFSET(0x105D0EC0)
#define CLASS_1_5849F8E981729954_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x105D0BA0)
#define CLASS_1_5849F8E981729954__CTOR_OFFSET UNITYSDK_OFFSET(0x105D0B90)

inline static constexpr unsigned int Class_1_5849F8E981729954_TypeDefinitionIndex = 80598;

class Class_1_5849F8E981729954 : public ::System::Object
{
public:
	// static const ::System::Single CJAGFOAKIGD; // 0x0
	::RPG::Client::UIFollow3DTarget* PNODIKHCBGB; // 0x10
	::UnityEngine::Transform* NEGJDPKNJME; // 0x18

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5849F8E981729954__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5849F8E981729954_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_34566E7905D6C48F(::Class_1_A4088D9A55CD220E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4088D9A55CD220E*))((::PBYTE)hIl2Cpp + CLASS_1_5849F8E981729954_METHOD_1_34566E7905D6C48F_OFFSET))(this, a1);
	}

	static ::UnityEngine::Transform* Method_1_6448565AF11DF07D(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5849F8E981729954_METHOD_1_6448565AF11DF07D_OFFSET))(a1);
	}

	::RPG::Client::UIFollow3DTarget* Method_1_4BF7E3CA997D27A1()
	{
		return ((::RPG::Client::UIFollow3DTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5849F8E981729954_METHOD_1_4BF7E3CA997D27A1_OFFSET))(this);
	}

	::System::Void Method_1_AF92A0134ABF8B8A(::RPG::Client::UIFollow3DTarget* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5849F8E981729954_METHOD_1_AF92A0134ABF8B8A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_40B2350F26214398(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5849F8E981729954_METHOD_1_40B2350F26214398_OFFSET))(this, a1, a2);
	}
};
