#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Query.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DEST_MATH_QUERY3_DET3_OFFSET UNITYSDK_OFFSET(0x1FBBC050)
#define DEST_MATH_QUERY3_DET4_OFFSET UNITYSDK_OFFSET(0x1FBBC820)
#define DEST_MATH_QUERY3_DOT_OFFSET UNITYSDK_OFFSET(0x1FBBCA30)
#define DEST_MATH_QUERY3_TOCIRCUMSPHERE_1_OFFSET UNITYSDK_OFFSET(0x1FBBC310)
#define DEST_MATH_QUERY3_TOCIRCUMSPHERE_OFFSET UNITYSDK_OFFSET(0x1FBBC2D0)
#define DEST_MATH_QUERY3_TOPLANE_1_OFFSET UNITYSDK_OFFSET(0x1FBBBEA0)
#define DEST_MATH_QUERY3_TOPLANE_OFFSET UNITYSDK_OFFSET(0x1FBBBE60)
#define DEST_MATH_QUERY3_TOTETRAHEDRON_1_OFFSET UNITYSDK_OFFSET(0x1FBBC1F0)
#define DEST_MATH_QUERY3_TOTETRAHEDRON_OFFSET UNITYSDK_OFFSET(0x1FBBC0D0)
#define DEST_MATH_QUERY3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBBCA50)
#define DEST_MATH_QUERY3__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBBE50)

namespace Dest::Math
{
	inline static constexpr unsigned int Query3_TypeDefinitionIndex = 35446;

	class Query3 : public ::Dest::Math::Query
	{
	public:
		static ::System::Single* StaticGet_Zero()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Query3_TypeDefinitionIndex)->GetStaticField(0x86A0);
		}
		::Il2CppArray<::UnityEngine::Vector3>* _vertices; // 0x10

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector3>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3__CTOR_OFFSET))(this, vertices);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3__CCTOR_OFFSET))();
		}

		::System::Int32 ToPlane(::System::Int32 i, ::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3_TOPLANE_OFFSET))(this, i, v0, v1, v2);
		}

		::System::Int32 ToPlane_1(::UnityEngine::Vector3& test, ::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3_TOPLANE_1_OFFSET))(this, test, v0, v1, v2);
		}

		::System::Int32 ToTetrahedron(::System::Int32 i, ::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2, ::System::Int32 v3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3_TOTETRAHEDRON_OFFSET))(this, i, v0, v1, v2, v3);
		}

		::System::Int32 ToTetrahedron_1(::UnityEngine::Vector3& test, ::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2, ::System::Int32 v3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3_TOTETRAHEDRON_1_OFFSET))(this, test, v0, v1, v2, v3);
		}

		::System::Int32 ToCircumsphere(::System::Int32 i, ::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2, ::System::Int32 v3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3_TOCIRCUMSPHERE_OFFSET))(this, i, v0, v1, v2, v3);
		}

		::System::Int32 ToCircumsphere_1(::UnityEngine::Vector3& test, ::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2, ::System::Int32 v3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3_TOCIRCUMSPHERE_1_OFFSET))(this, test, v0, v1, v2, v3);
		}

		::System::Single Dot(::System::Single x0, ::System::Single y0, ::System::Single z0, ::System::Single x1, ::System::Single y1, ::System::Single z1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3_DOT_OFFSET))(this, x0, y0, z0, x1, y1, z1);
		}

		::System::Single Det3(::System::Single x0, ::System::Single y0, ::System::Single z0, ::System::Single x1, ::System::Single y1, ::System::Single z1, ::System::Single x2, ::System::Single y2, ::System::Single z2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3_DET3_OFFSET))(this, x0, y0, z0, x1, y1, z1, x2, y2, z2);
		}

		::System::Single Det4(::System::Single x0, ::System::Single y0, ::System::Single z0, ::System::Single w0, ::System::Single x1, ::System::Single y1, ::System::Single z1, ::System::Single w1, ::System::Single x2, ::System::Single y2, ::System::Single z2, ::System::Single w2, ::System::Single x3, ::System::Single y3, ::System::Single z3, ::System::Single w3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY3_DET4_OFFSET))(this, x0, y0, z0, w0, x1, y1, z1, w1, x2, y2, z2, w2, x3, y3, z3, w3);
		}
	};
}
