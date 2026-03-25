#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_017642E048A94394_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AF4CE0)
#define CLASS_1_017642E048A94394_METHOD_1_2AD068E235F471F9_OFFSET UNITYSDK_OFFSET(0x10AF50D0)
#define CLASS_1_017642E048A94394_METHOD_1_3E17DE187D6B8091_OFFSET UNITYSDK_OFFSET(0x10AF54C0)
#define CLASS_1_017642E048A94394_METHOD_1_4E97364C1E26D1A8_OFFSET UNITYSDK_OFFSET(0x10AF5060)
#define CLASS_1_017642E048A94394_METHOD_1_692BBC3418AA9D21_OFFSET UNITYSDK_OFFSET(0x10AF4D90)
#define CLASS_1_017642E048A94394_METHOD_1_884CFBAB50289709_OFFSET UNITYSDK_OFFSET(0x10AF5650)
#define CLASS_1_017642E048A94394__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF4C80)

inline static constexpr unsigned int Class_1_017642E048A94394_TypeDefinitionIndex = 56460;

class Class_1_017642E048A94394 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* Field_1_3; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_692BBC3418AA9D21(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_METHOD_1_692BBC3418AA9D21_OFFSET))(this, a1);
	}

	::System::Void Method_1_2AD068E235F471F9(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::RectTransform* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_METHOD_1_2AD068E235F471F9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3E17DE187D6B8091(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_METHOD_1_3E17DE187D6B8091_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E97364C1E26D1A8(::UnityEngine::UI::Image* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_METHOD_1_4E97364C1E26D1A8_OFFSET))(this, a1, a2);
	}

	::UnityEngine::UI::Image* Method_1_884CFBAB50289709(::UnityEngine::RectTransform* a1)
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_METHOD_1_884CFBAB50289709_OFFSET))(this, a1);
	}
};
