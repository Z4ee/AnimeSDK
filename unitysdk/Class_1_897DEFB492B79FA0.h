#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0B2EE8871CB57344;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_897DEFB492B79FA0_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x127B2A80)
#define CLASS_1_897DEFB492B79FA0_METHOD_1_74067BAEDA820FD3_OFFSET UNITYSDK_OFFSET(0x127B2D00)
#define CLASS_1_897DEFB492B79FA0_METHOD_1_A29349AFA1B1179C_OFFSET UNITYSDK_OFFSET(0x127B2970)
#define CLASS_1_897DEFB492B79FA0_METHOD_1_AC8A0D0642E6FB6C_OFFSET UNITYSDK_OFFSET(0x127B2CE0)
#define CLASS_1_897DEFB492B79FA0_METHOD_1_C8544A56EE1243CD_OFFSET UNITYSDK_OFFSET(0x127B2690)
#define CLASS_1_897DEFB492B79FA0_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x127B2D10)
#define CLASS_1_897DEFB492B79FA0__CTOR_OFFSET UNITYSDK_OFFSET(0x127B2630)

inline static constexpr unsigned int Class_1_897DEFB492B79FA0_TypeDefinitionIndex = 62139;

class Class_1_897DEFB492B79FA0 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_0B2EE8871CB57344* Field_1_2; // 0x18
	::Foundation::AssetRequestHandle Field_1_1; // 0x20
	::UnityEngine::Transform* Field_1_3; // 0x40
	::UnityEngine::Vector3 Field_1_4; // 0x48
	::UnityEngine::LayerMask Field_1_6; // 0x54
	::UnityEngine::Quaternion Field_1_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_897DEFB492B79FA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C8544A56EE1243CD(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_897DEFB492B79FA0_METHOD_1_C8544A56EE1243CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_897DEFB492B79FA0_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_1_A29349AFA1B1179C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_897DEFB492B79FA0_METHOD_1_A29349AFA1B1179C_OFFSET))(this, a1);
	}

	::Foundation::AssetRequestHandle Method_1_AC8A0D0642E6FB6C()
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_897DEFB492B79FA0_METHOD_1_AC8A0D0642E6FB6C_OFFSET))(this);
	}

	::System::Void Method_1_74067BAEDA820FD3(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_897DEFB492B79FA0_METHOD_1_74067BAEDA820FD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_897DEFB492B79FA0_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
