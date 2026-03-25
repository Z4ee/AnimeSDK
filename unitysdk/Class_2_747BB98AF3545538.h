#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3ED45B5689DB5816.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_626F93E2306641CC;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_747BB98AF3545538_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x10645240)
#define CLASS_2_747BB98AF3545538_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10645480)
#define CLASS_2_747BB98AF3545538_METHOD_2_6426CAFBEED664F1_OFFSET UNITYSDK_OFFSET(0x10645C20)
#define CLASS_2_747BB98AF3545538_METHOD_2_66E1C580942DFBD4_OFFSET UNITYSDK_OFFSET(0x10645E80)
#define CLASS_2_747BB98AF3545538_METHOD_2_82D94C3037DEF095_OFFSET UNITYSDK_OFFSET(0x10645780)
#define CLASS_2_747BB98AF3545538_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x10645530)
#define CLASS_2_747BB98AF3545538_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10645400)
#define CLASS_2_747BB98AF3545538_METHOD_2_BF80601F74D0ACA8_OFFSET UNITYSDK_OFFSET(0x10645930)
#define CLASS_2_747BB98AF3545538_METHOD_2_CAA3252754167FBB_OFFSET UNITYSDK_OFFSET(0x106454E0)
#define CLASS_2_747BB98AF3545538_METHOD_2_D8075BD7E34511CC_OFFSET UNITYSDK_OFFSET(0x10645610)
#define CLASS_2_747BB98AF3545538_METHOD_2_E5757CCD7E68FDA3_OFFSET UNITYSDK_OFFSET(0x106452B0)
#define CLASS_2_747BB98AF3545538__CTOR_OFFSET UNITYSDK_OFFSET(0x10645250)

inline static constexpr unsigned int Class_2_747BB98AF3545538_TypeDefinitionIndex = 63541;

class Class_2_747BB98AF3545538 : public ::Class_1_3ED45B5689DB5816
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_3; // 0x20
	::RPG::Client::UIPrefabLoader* Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x30

	::System::Void _ctor(::RPG::Client::UIPrefabLoader* a1, ::UnityEngine::Transform* a2, ::Class_3_626F93E2306641CC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_CAA3252754167FBB(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_CAA3252754167FBB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D8075BD7E34511CC(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_D8075BD7E34511CC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_82D94C3037DEF095(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_82D94C3037DEF095_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF80601F74D0ACA8(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_BF80601F74D0ACA8_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_2_E5757CCD7E68FDA3(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_E5757CCD7E68FDA3_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Boolean Method_2_6426CAFBEED664F1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_6426CAFBEED664F1_OFFSET))(this);
	}

	::System::Void Method_2_66E1C580942DFBD4(::UnityEngine::Vector2 P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_747BB98AF3545538_METHOD_2_66E1C580942DFBD4_OFFSET))(this, P0);
	}
};
