#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CUSTOMRP_AABB_CONTAIN_OFFSET UNITYSDK_OFFSET(0x3849490)
#define RPG_CUSTOMRP_AABB_CREATE_1_OFFSET UNITYSDK_OFFSET(0x18EA1BD0)
#define RPG_CUSTOMRP_AABB_CREATE_OFFSET UNITYSDK_OFFSET(0x18EA1B60)
#define RPG_CUSTOMRP_AABB_ENCAPSULATE_1_OFFSET UNITYSDK_OFFSET(0x38491F0)
#define RPG_CUSTOMRP_AABB_ENCAPSULATE_2_OFFSET UNITYSDK_OFFSET(0x3849200)
#define RPG_CUSTOMRP_AABB_ENCAPSULATE_OFFSET UNITYSDK_OFFSET(0x3849110)
#define RPG_CUSTOMRP_AABB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3849600)
#define RPG_CUSTOMRP_AABB_GET_CENTERX_OFFSET UNITYSDK_OFFSET(0x3849020)
#define RPG_CUSTOMRP_AABB_GET_CENTERY_OFFSET UNITYSDK_OFFSET(0x3849040)
#define RPG_CUSTOMRP_AABB_GET_CENTERZ_OFFSET UNITYSDK_OFFSET(0x3849060)
#define RPG_CUSTOMRP_AABB_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x3848FE0)
#define RPG_CUSTOMRP_AABB_GET_SIZEX_OFFSET UNITYSDK_OFFSET(0x3848FA0)
#define RPG_CUSTOMRP_AABB_GET_SIZEY_OFFSET UNITYSDK_OFFSET(0x3848FB0)
#define RPG_CUSTOMRP_AABB_GET_SIZEZ_OFFSET UNITYSDK_OFFSET(0x3848FC0)
#define RPG_CUSTOMRP_AABB_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x3849080)
#define RPG_CUSTOMRP_AABB_GET_VALID_OFFSET UNITYSDK_OFFSET(0x3848FD0)
#define RPG_CUSTOMRP_AABB_INIT_1_OFFSET UNITYSDK_OFFSET(0x3849250)
#define RPG_CUSTOMRP_AABB_INIT_2_OFFSET UNITYSDK_OFFSET(0x3849270)
#define RPG_CUSTOMRP_AABB_INIT_3_OFFSET UNITYSDK_OFFSET(0x3849370)
#define RPG_CUSTOMRP_AABB_INIT_OFFSET UNITYSDK_OFFSET(0x3849210)
#define RPG_CUSTOMRP_AABB_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x38490B0)
#define RPG_CUSTOMRP_AABB_SCALE_OFFSET UNITYSDK_OFFSET(0x38495C0)
#define RPG_CUSTOMRP_AABB_SET_OFFSET UNITYSDK_OFFSET(0x38493D0)
#define RPG_CUSTOMRP_AABB_TOUNITYAABB_1_OFFSET UNITYSDK_OFFSET(0x3849530)
#define RPG_CUSTOMRP_AABB_TOUNITYAABB_OFFSET UNITYSDK_OFFSET(0x38494E0)
#define RPG_CUSTOMRP_AABB_TRANSFORMZ_OFFSET UNITYSDK_OFFSET(0x38495B0)
#define RPG_CUSTOMRP_AABB_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x3849580)
#define RPG_CUSTOMRP_AABB__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EA1CF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AABB_TypeDefinitionIndex = 35559;

	struct alignas(4) AABB
	{
		static ::RPG::CustomRP::AABB* StaticGet_zero()
		{
			return (::RPG::CustomRP::AABB*)Il2CppClass::FromTypeDefinitionIndex(AABB_TypeDefinitionIndex)->GetStaticField(0x12620);
		}
		::UnityEngine::Vector3 min; // 0x10
		::UnityEngine::Vector3 max; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB__CCTOR_OFFSET))();
		}

		::System::Single get_sizeX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_GET_SIZEX_OFFSET))(this);
		}

		::System::Single get_sizeY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_GET_SIZEY_OFFSET))(this);
		}

		::System::Single get_sizeZ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_GET_SIZEZ_OFFSET))(this);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_GET_VALID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_GET_CENTER_OFFSET))(this);
		}

		::System::Single get_centerX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_GET_CENTERX_OFFSET))(this);
		}

		::System::Single get_centerY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_GET_CENTERY_OFFSET))(this);
		}

		::System::Single get_centerZ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_GET_CENTERZ_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_GET_SIZE_OFFSET))(this);
		}

		::System::Boolean Intersects(::RPG::CustomRP::AABB& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_INTERSECTS_OFFSET))(this, a1);
		}

		::System::Void Encapsulate(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_ENCAPSULATE_OFFSET))(this, a1);
		}

		/*
		::System::Void Encapsulate_1(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_ENCAPSULATE_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Encapsulate_2(::RPG::CustomRP::AABB& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_ENCAPSULATE_2_OFFSET))(this, a1);
		}

		/*
		::System::Void Init(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_INIT_OFFSET))(this, a1);
		}
		*/

		::System::Void Init_1(::RPG::CustomRP::AABB& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_INIT_1_OFFSET))(this, a1);
		}

		::System::Void Init_2(::RPG::CustomRP::AABB& a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::AABB&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_INIT_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Init_3(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_INIT_3_OFFSET))(this, a1, a2);
		}

		::System::Void Set(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_SET_OFFSET))(this, a1);
		}

		::System::Boolean Contain(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_CONTAIN_OFFSET))(this, a1);
		}

		/*
		::System::Void ToUnityAABB(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_TOUNITYAABB_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Bounds ToUnityAABB_1()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_TOUNITYAABB_1_OFFSET))(this);
		}
		*/

		/*
		static ::RPG::CustomRP::AABB Create(::UnityEngine::Bounds& a1)
		{
			return ((::RPG::CustomRP::AABB(*)(::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_CREATE_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void Create_1(::UnityEngine::Bounds& a1, ::RPG::CustomRP::AABB& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds&, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_CREATE_1_OFFSET))(a1, a2);
		}
		*/

		::System::Void Transform(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_TRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TransformZ(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_TRANSFORMZ_OFFSET))(this, a1, a2);
		}

		::System::Void Scale(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_SCALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Equals(::RPG::CustomRP::AABB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AABB))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_EQUALS_OFFSET))(this, a1);
		}
	};
}
