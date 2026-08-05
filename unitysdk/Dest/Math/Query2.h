#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Query.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DEST_MATH_QUERY2_DET2_OFFSET UNITYSDK_OFFSET(0x1FBBB9E0)
#define DEST_MATH_QUERY2_DET3_OFFSET UNITYSDK_OFFSET(0x1FBBBDA0)
#define DEST_MATH_QUERY2_DOT_OFFSET UNITYSDK_OFFSET(0x1FBBBE20)
#define DEST_MATH_QUERY2_TOCIRCUMCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1FBBBBB0)
#define DEST_MATH_QUERY2_TOCIRCUMCIRCLE_OFFSET UNITYSDK_OFFSET(0x1FBBBB70)
#define DEST_MATH_QUERY2_TOLINE_1_OFFSET UNITYSDK_OFFSET(0x1FBBB930)
#define DEST_MATH_QUERY2_TOLINE_OFFSET UNITYSDK_OFFSET(0x1FBBB8F0)
#define DEST_MATH_QUERY2_TOTRIANGLE_1_OFFSET UNITYSDK_OFFSET(0x1FBBBAD0)
#define DEST_MATH_QUERY2_TOTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1FBBBA00)
#define DEST_MATH_QUERY2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBBBE40)
#define DEST_MATH_QUERY2__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBB8E0)

namespace Dest::Math
{
	inline static constexpr unsigned int Query2_TypeDefinitionIndex = 35445;

	class Query2 : public ::Dest::Math::Query
	{
	public:
		static ::System::Single* StaticGet_Zero()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Query2_TypeDefinitionIndex)->GetStaticField(0x8690);
		}
		::Il2CppArray<::UnityEngine::Vector2>* _vertices; // 0x10

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector2>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2__CTOR_OFFSET))(this, vertices);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2__CCTOR_OFFSET))();
		}

		::System::Int32 ToLine(::System::Int32 i, ::System::Int32 v0, ::System::Int32 v1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2_TOLINE_OFFSET))(this, i, v0, v1);
		}

		::System::Int32 ToLine_1(::UnityEngine::Vector2& test, ::System::Int32 v0, ::System::Int32 v1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2_TOLINE_1_OFFSET))(this, test, v0, v1);
		}

		::System::Int32 ToTriangle(::System::Int32 i, ::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2_TOTRIANGLE_OFFSET))(this, i, v0, v1, v2);
		}

		::System::Int32 ToTriangle_1(::UnityEngine::Vector2& test, ::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2_TOTRIANGLE_1_OFFSET))(this, test, v0, v1, v2);
		}

		::System::Int32 ToCircumcircle(::System::Int32 i, ::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2_TOCIRCUMCIRCLE_OFFSET))(this, i, v0, v1, v2);
		}

		::System::Int32 ToCircumcircle_1(::UnityEngine::Vector2& test, ::System::Int32 v0, ::System::Int32 v1, ::System::Int32 v2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2_TOCIRCUMCIRCLE_1_OFFSET))(this, test, v0, v1, v2);
		}

		::System::Single Dot(::System::Single x0, ::System::Single y0, ::System::Single x1, ::System::Single y1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2_DOT_OFFSET))(this, x0, y0, x1, y1);
		}

		::System::Single Det2(::System::Single x0, ::System::Single y0, ::System::Single x1, ::System::Single y1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2_DET2_OFFSET))(this, x0, y0, x1, y1);
		}

		::System::Single Det3(::System::Single x0, ::System::Single y0, ::System::Single z0, ::System::Single x1, ::System::Single y1, ::System::Single z1, ::System::Single x2, ::System::Single y2, ::System::Single z2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_QUERY2_DET3_OFFSET))(this, x0, y0, z0, x1, y1, z1, x2, y2, z2);
		}
	};
}
