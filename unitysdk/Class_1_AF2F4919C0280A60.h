#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F780812A1FAD31A;
namespace UnityEngine { class Transform; }

#define CLASS_1_AF2F4919C0280A60_METHOD_1_10FFF5D129383396_OFFSET UNITYSDK_OFFSET(0x151AAA40)
#define CLASS_1_AF2F4919C0280A60_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x151AA530)
#define CLASS_1_AF2F4919C0280A60_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x151AA730)
#define CLASS_1_AF2F4919C0280A60_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x151AAA50)
#define CLASS_1_AF2F4919C0280A60_METHOD_1_A5DC8E804A140E69_OFFSET UNITYSDK_OFFSET(0x151AA650)
#define CLASS_1_AF2F4919C0280A60_METHOD_1_BFB8A9EC107A5B24_OFFSET UNITYSDK_OFFSET(0x151AA640)
#define CLASS_1_AF2F4919C0280A60_METHOD_1_CD65C7CF395177BF_OFFSET UNITYSDK_OFFSET(0x151AA540)
#define CLASS_1_AF2F4919C0280A60_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x151AA740)
#define CLASS_1_AF2F4919C0280A60__CTOR_OFFSET UNITYSDK_OFFSET(0x151AA4E0)

inline static constexpr unsigned int Class_1_AF2F4919C0280A60_TypeDefinitionIndex = 56526;

class Class_1_AF2F4919C0280A60 : public ::System::Object
{
public:
	::Class_1_5F780812A1FAD31A* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::UnityEngine::Quaternion Field_1_1; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF2F4919C0280A60__CTOR_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF2F4919C0280A60_METHOD_1_413F493333BF3391_OFFSET))(this);
	}

	::Foundation::SpaceType Method_1_CD65C7CF395177BF()
	{
		return ((::Foundation::SpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF2F4919C0280A60_METHOD_1_CD65C7CF395177BF_OFFSET))(this);
	}

	::System::Void Method_1_BFB8A9EC107A5B24(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_AF2F4919C0280A60_METHOD_1_BFB8A9EC107A5B24_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5DC8E804A140E69(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_AF2F4919C0280A60_METHOD_1_A5DC8E804A140E69_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF2F4919C0280A60_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::System::Void Method_1_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF2F4919C0280A60_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_1_10FFF5D129383396(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_AF2F4919C0280A60_METHOD_1_10FFF5D129383396_OFFSET))(this, a1);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF2F4919C0280A60_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}
};
