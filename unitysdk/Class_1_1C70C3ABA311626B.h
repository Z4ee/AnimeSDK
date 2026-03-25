#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9DB62E0B1DD0ABEE;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1C70C3ABA311626B_METHOD_1_15AF35577CF1DC14_OFFSET UNITYSDK_OFFSET(0x111955C0)
#define CLASS_1_1C70C3ABA311626B_METHOD_1_2988687DA022D0E4_OFFSET UNITYSDK_OFFSET(0x11195410)
#define CLASS_1_1C70C3ABA311626B_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x111958B0)
#define CLASS_1_1C70C3ABA311626B_METHOD_1_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x111959F0)
#define CLASS_1_1C70C3ABA311626B_METHOD_1_A9C355BD643DDEBB_OFFSET UNITYSDK_OFFSET(0x11195A70)
#define CLASS_1_1C70C3ABA311626B_METHOD_1_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x11195640)
#define CLASS_1_1C70C3ABA311626B_METHOD_1_B8DDB8B6AA8ACDA5_OFFSET UNITYSDK_OFFSET(0x11195C80)
#define CLASS_1_1C70C3ABA311626B__CTOR_OFFSET UNITYSDK_OFFSET(0x11195D90)

inline static constexpr unsigned int Class_1_1C70C3ABA311626B_TypeDefinitionIndex = 59622;

class Class_1_1C70C3ABA311626B : public ::System::Object
{
public:
	::RPG::Client::UIFollow3DTarget* Field_1_6; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_7; // 0x20
	::System::String* Field_1_5; // 0x28
	::RPG::Client::IAssetOperation* Field_1_3; // 0x30
	::System::String* Field_1_4; // 0x38
	::Class_2_9DB62E0B1DD0ABEE* Field_1_0; // 0x40
	::System::Boolean Field_1_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C70C3ABA311626B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2988687DA022D0E4(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1C70C3ABA311626B_METHOD_1_2988687DA022D0E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_15AF35577CF1DC14(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C70C3ABA311626B_METHOD_1_15AF35577CF1DC14_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C70C3ABA311626B_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C70C3ABA311626B_METHOD_1_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9C355BD643DDEBB(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_1C70C3ABA311626B_METHOD_1_A9C355BD643DDEBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B8DDB8B6AA8ACDA5(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1C70C3ABA311626B_METHOD_1_B8DDB8B6AA8ACDA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C70C3ABA311626B_METHOD_1_AE828D899505A3B4_OFFSET))(this);
	}
};
