#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_TRANSFORMX_ADJUSTLOCALX_OFFSET UNITYSDK_OFFSET(0x1BFECB30)
#define FOUNDATION_TRANSFORMX_ADJUSTLOCALY_OFFSET UNITYSDK_OFFSET(0x1BFECBD0)
#define FOUNDATION_TRANSFORMX_ADJUSTLOCALZ_OFFSET UNITYSDK_OFFSET(0x1BFECC80)
#define FOUNDATION_TRANSFORMX_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1BFED170)
#define FOUNDATION_TRANSFORMX_FLIP_OFFSET UNITYSDK_OFFSET(0x1BFECD20)
#define FOUNDATION_TRANSFORMX_GETINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1BFED2A0)
#define FOUNDATION_TRANSFORMX_GETPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1BFEC610)
#define FOUNDATION_TRANSFORMX_GETPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1BFEC680)
#define FOUNDATION_TRANSFORMX_GETPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x1BFEC6F0)
#define FOUNDATION_TRANSFORMX_RESET_OFFSET UNITYSDK_OFFSET(0x1BFED0C0)
#define FOUNDATION_TRANSFORMX_SETLOCALPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1BFECDE0)
#define FOUNDATION_TRANSFORMX_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1BFEC760)
#define FOUNDATION_TRANSFORMX_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1BFECFC0)
#define FOUNDATION_TRANSFORMX_SETLOCALX_OFFSET UNITYSDK_OFFSET(0x1BFEC940)
#define FOUNDATION_TRANSFORMX_SETLOCALY_OFFSET UNITYSDK_OFFSET(0x1BFEC9E0)
#define FOUNDATION_TRANSFORMX_SETLOCALZ_OFFSET UNITYSDK_OFFSET(0x1BFECA90)
#define FOUNDATION_TRANSFORMX_SETPOSITIONX_1_OFFSET UNITYSDK_OFFSET(0x1BFEC1E0)
#define FOUNDATION_TRANSFORMX_SETPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1BFEC0B0)
#define FOUNDATION_TRANSFORMX_SETPOSITIONY_1_OFFSET UNITYSDK_OFFSET(0x1BFEC3B0)
#define FOUNDATION_TRANSFORMX_SETPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1BFEC270)
#define FOUNDATION_TRANSFORMX_SETPOSITIONZ_1_OFFSET UNITYSDK_OFFSET(0x1BFEC580)
#define FOUNDATION_TRANSFORMX_SETPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x1BFEC450)
#define FOUNDATION_TRANSFORMX_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1BFECED0)

namespace Foundation
{
	inline static constexpr unsigned int TransformX_TypeDefinitionIndex = 8177;

	class TransformX : public ::System::Object
	{
	public:
		static ::System::Void SetPositionX(::UnityEngine::Transform* t, ::System::Single newX)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETPOSITIONX_OFFSET))(t, newX);
		}

		static ::UnityEngine::Vector3 SetPositionX_1(::UnityEngine::Vector3 v3, ::System::Single newX)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETPOSITIONX_1_OFFSET))(v3, newX);
		}

		static ::System::Void SetPositionY(::UnityEngine::Transform* t, ::System::Single newY)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETPOSITIONY_OFFSET))(t, newY);
		}

		static ::UnityEngine::Vector3 SetPositionY_1(::UnityEngine::Vector3 v3, ::System::Single newY)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETPOSITIONY_1_OFFSET))(v3, newY);
		}

		static ::System::Void SetPositionZ(::UnityEngine::Transform* t, ::System::Single newZ)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETPOSITIONZ_OFFSET))(t, newZ);
		}

		static ::UnityEngine::Vector3 SetPositionZ_1(::UnityEngine::Vector3 v3, ::System::Single newZ)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETPOSITIONZ_1_OFFSET))(v3, newZ);
		}

		static ::System::Single GetPositionX(::UnityEngine::Transform* t)
		{
			return ((::System::Single(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_GETPOSITIONX_OFFSET))(t);
		}

		static ::System::Single GetPositionY(::UnityEngine::Transform* t)
		{
			return ((::System::Single(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_GETPOSITIONY_OFFSET))(t);
		}

		static ::System::Single GetPositionZ(::UnityEngine::Transform* t)
		{
			return ((::System::Single(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_GETPOSITIONZ_OFFSET))(t);
		}

		static ::System::Void SetLocalPosition(::UnityEngine::Transform* xform, ::Il2CppArray<::System::Single>* coords)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETLOCALPOSITION_OFFSET))(xform, coords);
		}

		static ::System::Void SetLocalX(::UnityEngine::Transform* xform, ::System::Single x)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETLOCALX_OFFSET))(xform, x);
		}

		static ::System::Void SetLocalY(::UnityEngine::Transform* xform, ::System::Single y)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETLOCALY_OFFSET))(xform, y);
		}

		static ::System::Void SetLocalZ(::UnityEngine::Transform* xform, ::System::Single z)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETLOCALZ_OFFSET))(xform, z);
		}

		static ::System::Void AdjustLocalX(::UnityEngine::Transform* xform, ::System::Single xDelta)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_ADJUSTLOCALX_OFFSET))(xform, xDelta);
		}

		static ::System::Void AdjustLocalY(::UnityEngine::Transform* xform, ::System::Single yDelta)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_ADJUSTLOCALY_OFFSET))(xform, yDelta);
		}

		static ::System::Void AdjustLocalZ(::UnityEngine::Transform* xform, ::System::Single zDelta)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_ADJUSTLOCALZ_OFFSET))(xform, zDelta);
		}

		static ::System::Void Flip(::UnityEngine::Transform* xform, ::System::Boolean isHorizontal)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_FLIP_OFFSET))(xform, isHorizontal);
		}

		static ::System::Void SetLocalPosition_1(::UnityEngine::Transform* xform, ::UnityEngine::Vector3 pos, ::System::Boolean includeZ)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETLOCALPOSITION_1_OFFSET))(xform, pos, includeZ);
		}

		static ::System::Void SetPosition(::UnityEngine::Transform* xform, ::UnityEngine::Vector3 pos, ::System::Boolean includeZ)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETPOSITION_OFFSET))(xform, pos, includeZ);
		}

		static ::System::Void SetLocalScale(::UnityEngine::Transform* xform, ::Il2CppArray<::System::Single>* coords)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_SETLOCALSCALE_OFFSET))(xform, coords);
		}

		static ::System::Void Reset(::UnityEngine::Transform* xform)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_RESET_OFFSET))(xform);
		}

		static ::System::Void CopyFrom(::UnityEngine::Transform* xform, ::UnityEngine::Transform* rhs)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_COPYFROM_OFFSET))(xform, rhs);
		}

		static ::UnityEngine::Transform* GetInChildren(::UnityEngine::Transform* xform, ::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_TRANSFORMX_GETINCHILDREN_OFFSET))(xform, name);
		}
	};
}
