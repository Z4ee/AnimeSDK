#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_017642E048A94394_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160A3DA0)
#define CLASS_1_017642E048A94394_METHOD_1_1DE357EB37CCCA0C_OFFSET UNITYSDK_OFFSET(0x160A4610)
#define CLASS_1_017642E048A94394_METHOD_1_2AD068E235F471F9_OFFSET UNITYSDK_OFFSET(0x160A4160)
#define CLASS_1_017642E048A94394_METHOD_1_6283669E7D0223EF_OFFSET UNITYSDK_OFFSET(0x160A3E50)
#define CLASS_1_017642E048A94394_METHOD_1_7300202C9DB2C080_OFFSET UNITYSDK_OFFSET(0x160A4800)
#define CLASS_1_017642E048A94394_METHOD_1_E63E3362B08F9C98_OFFSET UNITYSDK_OFFSET(0x160A40F0)
#define CLASS_1_017642E048A94394__CTOR_OFFSET UNITYSDK_OFFSET(0x160A3D40)

inline static constexpr unsigned int Class_1_017642E048A94394_TypeDefinitionIndex = 69065;

class Class_1_017642E048A94394 : public ::System::Object
{
public:
	::UnityEngine::Transform* PNHDMLKLONE; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* OPOECLNGMAB; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* MGNJFJDHPAN; // 0x20
	::UnityEngine::GameObject* BBFICHMOMOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6283669E7D0223EF(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_METHOD_1_6283669E7D0223EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_2AD068E235F471F9(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::RectTransform* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_METHOD_1_2AD068E235F471F9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1DE357EB37CCCA0C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_METHOD_1_1DE357EB37CCCA0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E63E3362B08F9C98(::UnityEngine::UI::Image* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_METHOD_1_E63E3362B08F9C98_OFFSET))(this, a1, a2);
	}

	::UnityEngine::UI::Image* Method_1_7300202C9DB2C080(::UnityEngine::RectTransform* a1)
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_017642E048A94394_METHOD_1_7300202C9DB2C080_OFFSET))(this, a1);
	}
};
