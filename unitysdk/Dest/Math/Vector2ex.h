#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Vector2ex_Information; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_VECTOR2EX_ANGLEDEG_OFFSET UNITYSDK_OFFSET(0x1BB1C490)
#define DEST_MATH_VECTOR2EX_ANGLERAD_OFFSET UNITYSDK_OFFSET(0x1BB1C6E0)
#define DEST_MATH_VECTOR2EX_DOTPERP_1_OFFSET UNITYSDK_OFFSET(0x1BB1C410)
#define DEST_MATH_VECTOR2EX_DOTPERP_2_OFFSET UNITYSDK_OFFSET(0x1BB1C430)
#define DEST_MATH_VECTOR2EX_DOTPERP_OFFSET UNITYSDK_OFFSET(0x1BB1C3E0)
#define DEST_MATH_VECTOR2EX_DOT_1_OFFSET UNITYSDK_OFFSET(0x1BB1C450)
#define DEST_MATH_VECTOR2EX_DOT_2_OFFSET UNITYSDK_OFFSET(0x1BB1C470)
#define DEST_MATH_VECTOR2EX_DOT_OFFSET UNITYSDK_OFFSET(0x1BB1C360)
#define DEST_MATH_VECTOR2EX_GETINFORMATION_OFFSET UNITYSDK_OFFSET(0x1BB1B7F0)
#define DEST_MATH_VECTOR2EX_GROWLENGTH_OFFSET UNITYSDK_OFFSET(0x1BB1C920)
#define DEST_MATH_VECTOR2EX_LENGTHSQR_OFFSET UNITYSDK_OFFSET(0x1BB1C3C0)
#define DEST_MATH_VECTOR2EX_LENGTH_OFFSET UNITYSDK_OFFSET(0x1BB1C390)
#define DEST_MATH_VECTOR2EX_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1BB1C660)
#define DEST_MATH_VECTOR2EX_PERP_OFFSET UNITYSDK_OFFSET(0x1BB1C350)
#define DEST_MATH_VECTOR2EX_REPLICATE_OFFSET UNITYSDK_OFFSET(0x1BB1C9B0)
#define DEST_MATH_VECTOR2EX_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1BB1C8A0)
#define DEST_MATH_VECTOR2EX_TOSTRINGEX_OFFSET UNITYSDK_OFFSET(0x1BB1CA20)
#define DEST_MATH_VECTOR2EX_TOVECTOR3XY_OFFSET UNITYSDK_OFFSET(0x1BB1C9C0)
#define DEST_MATH_VECTOR2EX_TOVECTOR3XZ_OFFSET UNITYSDK_OFFSET(0x1BB1C9E0)
#define DEST_MATH_VECTOR2EX_TOVECTOR3YZ_OFFSET UNITYSDK_OFFSET(0x1BB1CA00)
#define DEST_MATH_VECTOR2EX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB1CAE0)

namespace Dest::Math
{
	inline static constexpr unsigned int Vector2ex_TypeDefinitionIndex = 33180;

	class Vector2ex : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_NegativeInfinity()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x8010);
		}
		static ::UnityEngine::Vector2* StaticGet_One()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x8018);
		}
		static ::UnityEngine::Vector2* StaticGet_PositiveInfinity()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x8020);
		}
		static ::UnityEngine::Vector2* StaticGet_UnitY()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x8028);
		}
		static ::UnityEngine::Vector2* StaticGet_Zero()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x8030);
		}
		static ::UnityEngine::Vector2* StaticGet_UnitX()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x8038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX__CCTOR_OFFSET))();
		}

		static ::Dest::Math::Vector2ex_Information* GetInformation(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Single epsilon)
		{
			return ((::Dest::Math::Vector2ex_Information*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_GETINFORMATION_OFFSET))(points, epsilon);
		}

		static ::System::Single Length(::UnityEngine::Vector2 vector)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_LENGTH_OFFSET))(vector);
		}

		static ::System::Single LengthSqr(::UnityEngine::Vector2 vector)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_LENGTHSQR_OFFSET))(vector);
		}

		static ::System::Single DotPerp(::UnityEngine::Vector2 vector, ::UnityEngine::Vector2 value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_DOTPERP_OFFSET))(vector, value);
		}

		static ::System::Single DotPerp_1(::UnityEngine::Vector2 vector, ::UnityEngine::Vector2& value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_DOTPERP_1_OFFSET))(vector, value);
		}

		static ::System::Single DotPerp_2(::UnityEngine::Vector2& vector, ::UnityEngine::Vector2& value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_DOTPERP_2_OFFSET))(vector, value);
		}

		static ::System::Single Dot(::UnityEngine::Vector2 vector, ::UnityEngine::Vector2 value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_DOT_OFFSET))(vector, value);
		}

		static ::System::Single Dot_1(::UnityEngine::Vector2 vector, ::UnityEngine::Vector2& value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_DOT_1_OFFSET))(vector, value);
		}

		static ::System::Single Dot_2(::UnityEngine::Vector2& vector, ::UnityEngine::Vector2& value)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_DOT_2_OFFSET))(vector, value);
		}

		static ::UnityEngine::Vector2 Perp(::UnityEngine::Vector2 vector)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_PERP_OFFSET))(vector);
		}

		static ::System::Single AngleDeg(::UnityEngine::Vector2 vector, ::UnityEngine::Vector2 target)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_ANGLEDEG_OFFSET))(vector, target);
		}

		static ::System::Single AngleRad(::UnityEngine::Vector2 vector, ::UnityEngine::Vector2 target)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_ANGLERAD_OFFSET))(vector, target);
		}

		static ::System::Single Normalize(::UnityEngine::Vector2& vector, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_NORMALIZE_OFFSET))(vector, epsilon);
		}

		static ::System::Single SetLength(::UnityEngine::Vector2& vector, ::System::Single lengthValue, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_SETLENGTH_OFFSET))(vector, lengthValue, epsilon);
		}

		static ::System::Single GrowLength(::UnityEngine::Vector2& vector, ::System::Single lengthDelta, ::System::Single epsilon)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_GROWLENGTH_OFFSET))(vector, lengthDelta, epsilon);
		}

		static ::UnityEngine::Vector2 Replicate(::System::Single value)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_REPLICATE_OFFSET))(value);
		}

		static ::UnityEngine::Vector3 ToVector3XY(::UnityEngine::Vector2 vector)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_TOVECTOR3XY_OFFSET))(vector);
		}

		static ::UnityEngine::Vector3 ToVector3XZ(::UnityEngine::Vector2 vector)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_TOVECTOR3XZ_OFFSET))(vector);
		}

		static ::UnityEngine::Vector3 ToVector3YZ(::UnityEngine::Vector2 vector)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_TOVECTOR3YZ_OFFSET))(vector);
		}

		static ::System::String* ToStringEx(::UnityEngine::Vector2 vector)
		{
			return ((::System::String*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_TOSTRINGEX_OFFSET))(vector);
		}
	};
}
