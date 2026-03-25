#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CUSTOMRP_AABB_CONTAIN_OFFSET UNITYSDK_OFFSET(0x20E6D00)
#define RPG_CUSTOMRP_AABB_CREATE_1_OFFSET UNITYSDK_OFFSET(0x16A5BB30)
#define RPG_CUSTOMRP_AABB_CREATE_OFFSET UNITYSDK_OFFSET(0x16A5BAC0)
#define RPG_CUSTOMRP_AABB_ENCAPSULATE_1_OFFSET UNITYSDK_OFFSET(0x20E6A60)
#define RPG_CUSTOMRP_AABB_ENCAPSULATE_2_OFFSET UNITYSDK_OFFSET(0x20E6A70)
#define RPG_CUSTOMRP_AABB_ENCAPSULATE_OFFSET UNITYSDK_OFFSET(0x20E6980)
#define RPG_CUSTOMRP_AABB_EQUALS_OFFSET UNITYSDK_OFFSET(0x20E6E70)
#define RPG_CUSTOMRP_AABB_GET_CENTERX_OFFSET UNITYSDK_OFFSET(0x20E6890)
#define RPG_CUSTOMRP_AABB_GET_CENTERY_OFFSET UNITYSDK_OFFSET(0x20E68B0)
#define RPG_CUSTOMRP_AABB_GET_CENTERZ_OFFSET UNITYSDK_OFFSET(0x20E68D0)
#define RPG_CUSTOMRP_AABB_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x20E6850)
#define RPG_CUSTOMRP_AABB_GET_SIZEX_OFFSET UNITYSDK_OFFSET(0x20E6810)
#define RPG_CUSTOMRP_AABB_GET_SIZEY_OFFSET UNITYSDK_OFFSET(0x20E6820)
#define RPG_CUSTOMRP_AABB_GET_SIZEZ_OFFSET UNITYSDK_OFFSET(0x20E6830)
#define RPG_CUSTOMRP_AABB_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x20E68F0)
#define RPG_CUSTOMRP_AABB_GET_VALID_OFFSET UNITYSDK_OFFSET(0x20E6840)
#define RPG_CUSTOMRP_AABB_INIT_1_OFFSET UNITYSDK_OFFSET(0x20E6AC0)
#define RPG_CUSTOMRP_AABB_INIT_2_OFFSET UNITYSDK_OFFSET(0x20E6AE0)
#define RPG_CUSTOMRP_AABB_INIT_3_OFFSET UNITYSDK_OFFSET(0x20E6BE0)
#define RPG_CUSTOMRP_AABB_INIT_OFFSET UNITYSDK_OFFSET(0x20E6A80)
#define RPG_CUSTOMRP_AABB_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x20E6920)
#define RPG_CUSTOMRP_AABB_SCALE_OFFSET UNITYSDK_OFFSET(0x20E6E30)
#define RPG_CUSTOMRP_AABB_SET_OFFSET UNITYSDK_OFFSET(0x20E6C40)
#define RPG_CUSTOMRP_AABB_TOUNITYAABB_1_OFFSET UNITYSDK_OFFSET(0x20E6DA0)
#define RPG_CUSTOMRP_AABB_TOUNITYAABB_OFFSET UNITYSDK_OFFSET(0x20E6D50)
#define RPG_CUSTOMRP_AABB_TRANSFORMZ_OFFSET UNITYSDK_OFFSET(0x20E6E20)
#define RPG_CUSTOMRP_AABB_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x20E6DF0)
#define RPG_CUSTOMRP_AABB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A5BC50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AABB_TypeDefinitionIndex = 29492;

	struct alignas(4) AABB
	{
		static ::RPG::CustomRP::AABB* StaticGet_zero()
		{
			return (::RPG::CustomRP::AABB*)Il2CppClass::FromTypeDefinitionIndex(AABB_TypeDefinitionIndex)->GetStaticField(0xF9A0);
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
