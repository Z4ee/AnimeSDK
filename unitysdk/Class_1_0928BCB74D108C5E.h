#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_1358;
class Class_0_16E4307DCC419505_1359;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_0928BCB74D108C5E_METHOD_1_04C31E3ECC3516CD_OFFSET UNITYSDK_OFFSET(0xBACF4D0)
#define CLASS_1_0928BCB74D108C5E_METHOD_1_2F7ABFC6CDB78093_OFFSET UNITYSDK_OFFSET(0xBACF360)
#define CLASS_1_0928BCB74D108C5E_METHOD_1_33A9EE21D29444CE_OFFSET UNITYSDK_OFFSET(0xBACECB0)
#define CLASS_1_0928BCB74D108C5E_METHOD_1_5E9E9972123BF939_OFFSET UNITYSDK_OFFSET(0xBACE7D0)
#define CLASS_1_0928BCB74D108C5E_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xBACEAE0)
#define CLASS_1_0928BCB74D108C5E_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xBACF2D0)
#define CLASS_1_0928BCB74D108C5E_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBACF0C0)
#define CLASS_1_0928BCB74D108C5E_METHOD_1_BD5A89703D26AEBD_OFFSET UNITYSDK_OFFSET(0xBACF150)
#define CLASS_1_0928BCB74D108C5E__CCTOR_OFFSET UNITYSDK_OFFSET(0xBACF600)
#define CLASS_1_0928BCB74D108C5E__CTOR_OFFSET UNITYSDK_OFFSET(0xBACF5A0)

inline static constexpr unsigned int Class_1_0928BCB74D108C5E_TypeDefinitionIndex = 79373;

class Class_1_0928BCB74D108C5E : public ::System::Object
{
public:
	static ::UnityEngine::Vector2* StaticGet_LJFPBMIPPPK()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0928BCB74D108C5E_TypeDefinitionIndex)->GetStaticField(0x12550);
	}
	::UnityEngine::RectTransform* OIFKLJACCPG; // 0x10
	::Class_0_16E4307DCC419505_1359* NHJIMBADBEN; // 0x18
	::System::Boolean GBPGADIEINF; // 0x20
	::System::Boolean FEECGHPBFKN; // 0x21
	::UnityEngine::Vector2 KFEJGBAKKEF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0928BCB74D108C5E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0928BCB74D108C5E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_5E9E9972123BF939(::Class_0_16E4307DCC419505_1358* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1358*))((::PBYTE)hIl2Cpp + CLASS_1_0928BCB74D108C5E_METHOD_1_5E9E9972123BF939_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0928BCB74D108C5E_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0928BCB74D108C5E_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_BD5A89703D26AEBD(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_0928BCB74D108C5E_METHOD_1_BD5A89703D26AEBD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F7ABFC6CDB78093(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_0928BCB74D108C5E_METHOD_1_2F7ABFC6CDB78093_OFFSET))(this, a1);
	}

	::System::Void Method_1_04C31E3ECC3516CD(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_0928BCB74D108C5E_METHOD_1_04C31E3ECC3516CD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_33A9EE21D29444CE(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0928BCB74D108C5E_METHOD_1_33A9EE21D29444CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0928BCB74D108C5E_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}
};
