#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_A582CC0DF852C4EA_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x13653560)
#define CLASS_1_A582CC0DF852C4EA_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x13653DB0)
#define CLASS_1_A582CC0DF852C4EA_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x13653D50)
#define CLASS_1_A582CC0DF852C4EA_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x13653660)
#define CLASS_1_A582CC0DF852C4EA_METHOD_1_5D582D26566137B5_OFFSET UNITYSDK_OFFSET(0x13653630)
#define CLASS_1_A582CC0DF852C4EA_METHOD_1_A00EAD174EF85E42_1_OFFSET UNITYSDK_OFFSET(0x13653830)
#define CLASS_1_A582CC0DF852C4EA_METHOD_1_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x13653790)
#define CLASS_1_A582CC0DF852C4EA_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x13653580)
#define CLASS_1_A582CC0DF852C4EA_METHOD_1_DD23065964F8FB04_OFFSET UNITYSDK_OFFSET(0x136538D0)
#define CLASS_1_A582CC0DF852C4EA_METHOD_1_F47ECF5C6192F8FD_OFFSET UNITYSDK_OFFSET(0x13653CA0)
#define CLASS_1_A582CC0DF852C4EA_SET_CAMERA_OFFSET UNITYSDK_OFFSET(0x13653570)
#define CLASS_1_A582CC0DF852C4EA__CTOR_OFFSET UNITYSDK_OFFSET(0x13653E00)

inline static constexpr unsigned int Class_1_A582CC0DF852C4EA_TypeDefinitionIndex = 58304;

class Class_1_A582CC0DF852C4EA : public ::System::Object
{
public:
	::UnityEngine::EventSystems::PointerEventData* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* Field_1_1; // 0x18
	::UnityEngine::Camera* _Camera_k__BackingField; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA__CTOR_OFFSET))(this);
	}

	::UnityEngine::Camera* get_Camera()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_GET_CAMERA_OFFSET))(this);
	}

	::System::Void set_Camera(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_SET_CAMERA_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::System::Int32 Method_1_5D582D26566137B5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_METHOD_1_5D582D26566137B5_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}

	::System::Boolean Method_1_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_METHOD_1_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A00EAD174EF85E42_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_METHOD_1_A00EAD174EF85E42_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DD23065964F8FB04(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_METHOD_1_DD23065964F8FB04_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* Method_1_F47ECF5C6192F8FD()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_METHOD_1_F47ECF5C6192F8FD_OFFSET))(this);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A582CC0DF852C4EA_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
