#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CUSTOMRP_AABB_CONTAIN_OFFSET UNITYSDK_OFFSET(0x22B87C0)
#define RPG_CUSTOMRP_AABB_CREATE_1_OFFSET UNITYSDK_OFFSET(0x180FEC70)
#define RPG_CUSTOMRP_AABB_CREATE_OFFSET UNITYSDK_OFFSET(0x180FEC00)
#define RPG_CUSTOMRP_AABB_ENCAPSULATE_1_OFFSET UNITYSDK_OFFSET(0x22B8520)
#define RPG_CUSTOMRP_AABB_ENCAPSULATE_2_OFFSET UNITYSDK_OFFSET(0x22B8530)
#define RPG_CUSTOMRP_AABB_ENCAPSULATE_OFFSET UNITYSDK_OFFSET(0x22B8440)
#define RPG_CUSTOMRP_AABB_EQUALS_OFFSET UNITYSDK_OFFSET(0x22B8930)
#define RPG_CUSTOMRP_AABB_GET_CENTERX_OFFSET UNITYSDK_OFFSET(0x22B8350)
#define RPG_CUSTOMRP_AABB_GET_CENTERY_OFFSET UNITYSDK_OFFSET(0x22B8370)
#define RPG_CUSTOMRP_AABB_GET_CENTERZ_OFFSET UNITYSDK_OFFSET(0x22B8390)
#define RPG_CUSTOMRP_AABB_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x22B8310)
#define RPG_CUSTOMRP_AABB_GET_SIZEX_OFFSET UNITYSDK_OFFSET(0x22B82D0)
#define RPG_CUSTOMRP_AABB_GET_SIZEY_OFFSET UNITYSDK_OFFSET(0x22B82E0)
#define RPG_CUSTOMRP_AABB_GET_SIZEZ_OFFSET UNITYSDK_OFFSET(0x22B82F0)
#define RPG_CUSTOMRP_AABB_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x22B83B0)
#define RPG_CUSTOMRP_AABB_GET_VALID_OFFSET UNITYSDK_OFFSET(0x22B8300)
#define RPG_CUSTOMRP_AABB_INIT_1_OFFSET UNITYSDK_OFFSET(0x22B8580)
#define RPG_CUSTOMRP_AABB_INIT_2_OFFSET UNITYSDK_OFFSET(0x22B85A0)
#define RPG_CUSTOMRP_AABB_INIT_3_OFFSET UNITYSDK_OFFSET(0x22B86A0)
#define RPG_CUSTOMRP_AABB_INIT_OFFSET UNITYSDK_OFFSET(0x22B8540)
#define RPG_CUSTOMRP_AABB_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x22B83E0)
#define RPG_CUSTOMRP_AABB_SCALE_OFFSET UNITYSDK_OFFSET(0x22B88F0)
#define RPG_CUSTOMRP_AABB_SET_OFFSET UNITYSDK_OFFSET(0x22B8700)
#define RPG_CUSTOMRP_AABB_TOUNITYAABB_1_OFFSET UNITYSDK_OFFSET(0x22B8860)
#define RPG_CUSTOMRP_AABB_TOUNITYAABB_OFFSET UNITYSDK_OFFSET(0x22B8810)
#define RPG_CUSTOMRP_AABB_TRANSFORMZ_OFFSET UNITYSDK_OFFSET(0x22B88E0)
#define RPG_CUSTOMRP_AABB_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x22B88B0)
#define RPG_CUSTOMRP_AABB__CCTOR_OFFSET UNITYSDK_OFFSET(0x180FED90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AABB_TypeDefinitionIndex = 35259;

	struct alignas(4) AABB
	{
		static ::RPG::CustomRP::AABB* StaticGet_zero()
		{
			return (::RPG::CustomRP::AABB*)Il2CppClass::FromTypeDefinitionIndex(AABB_TypeDefinitionIndex)->GetStaticField(0x109A0);
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

		::System::Boolean Intersects(::RPG::CustomRP::AABB& aabb)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_INTERSECTS_OFFSET))(this, aabb);
		}

		::System::Void Encapsulate(::UnityEngine::Vector3& point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_ENCAPSULATE_OFFSET))(this, point);
		}

		/*
		::System::Void Encapsulate_1(::UnityEngine::Bounds& aabb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_ENCAPSULATE_1_OFFSET))(this, aabb);
		}
		*/

		::System::Void Encapsulate_2(::RPG::CustomRP::AABB& aabb)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_ENCAPSULATE_2_OFFSET))(this, aabb);
		}

		/*
		::System::Void Init(::UnityEngine::Bounds& aabb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_INIT_OFFSET))(this, aabb);
		}
		*/

		::System::Void Init_1(::RPG::CustomRP::AABB& aabb)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_INIT_1_OFFSET))(this, aabb);
		}

		::System::Void Init_2(::RPG::CustomRP::AABB& aabb, ::System::Single sizeX, ::System::Single sizeY, ::System::Single sizeZ)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::AABB&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_INIT_2_OFFSET))(this, aabb, sizeX, sizeY, sizeZ);
		}

		::System::Void Init_3(::UnityEngine::Vector3& c, ::UnityEngine::Vector3& s)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_INIT_3_OFFSET))(this, c, s);
		}

		::System::Void Set(::UnityEngine::Vector3& c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_SET_OFFSET))(this, c);
		}

		::System::Boolean Contain(::UnityEngine::Vector3& pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_CONTAIN_OFFSET))(this, pos);
		}

		/*
		::System::Void ToUnityAABB(::UnityEngine::Bounds& aabb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_TOUNITYAABB_OFFSET))(this, aabb);
		}
		*/

		/*
		::UnityEngine::Bounds ToUnityAABB_1()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_TOUNITYAABB_1_OFFSET))(this);
		}
		*/

		/*
		static ::RPG::CustomRP::AABB Create(::UnityEngine::Bounds& aabb)
		{
			return ((::RPG::CustomRP::AABB(*)(::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_CREATE_OFFSET))(aabb);
		}
		*/

		/*
		static ::System::Void Create_1(::UnityEngine::Bounds& aabb, ::RPG::CustomRP::AABB& newAABB)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds&, ::RPG::CustomRP::AABB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_CREATE_1_OFFSET))(aabb, newAABB);
		}
		*/

		::System::Void Transform(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_TRANSFORM_OFFSET))(this, x, y, z);
		}

		::System::Void TransformZ(::System::Single zmin, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_TRANSFORMZ_OFFSET))(this, zmin, size);
		}

		::System::Void Scale(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_SCALE_OFFSET))(this, x, y, z);
		}

		::System::Boolean Equals(::RPG::CustomRP::AABB other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AABB))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AABB_EQUALS_OFFSET))(this, other);
		}
	};
}
