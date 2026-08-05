#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Vector2ex_Information; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_VECTOR2EX_ANGLEDEG_OFFSET UNITYSDK_OFFSET(0x1F2B2BF0)
#define DEST_MATH_VECTOR2EX_ANGLERAD_OFFSET UNITYSDK_OFFSET(0x1F2B2D60)
#define DEST_MATH_VECTOR2EX_DOTPERP_1_OFFSET UNITYSDK_OFFSET(0x1F2B2B70)
#define DEST_MATH_VECTOR2EX_DOTPERP_2_OFFSET UNITYSDK_OFFSET(0x1F2B2B90)
#define DEST_MATH_VECTOR2EX_DOTPERP_OFFSET UNITYSDK_OFFSET(0x1F2B2B40)
#define DEST_MATH_VECTOR2EX_DOT_1_OFFSET UNITYSDK_OFFSET(0x1F2B2BB0)
#define DEST_MATH_VECTOR2EX_DOT_2_OFFSET UNITYSDK_OFFSET(0x1F2B2BD0)
#define DEST_MATH_VECTOR2EX_DOT_OFFSET UNITYSDK_OFFSET(0x1F2B2AD0)
#define DEST_MATH_VECTOR2EX_GETINFORMATION_OFFSET UNITYSDK_OFFSET(0x1F2B1F80)
#define DEST_MATH_VECTOR2EX_GROWLENGTH_OFFSET UNITYSDK_OFFSET(0x1F2B2ED0)
#define DEST_MATH_VECTOR2EX_LENGTHSQR_OFFSET UNITYSDK_OFFSET(0x1F2B2B20)
#define DEST_MATH_VECTOR2EX_LENGTH_OFFSET UNITYSDK_OFFSET(0x1F2B2B00)
#define DEST_MATH_VECTOR2EX_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1F2B2D00)
#define DEST_MATH_VECTOR2EX_PERP_OFFSET UNITYSDK_OFFSET(0x1F2B2AC0)
#define DEST_MATH_VECTOR2EX_REPLICATE_OFFSET UNITYSDK_OFFSET(0x1F2B2F30)
#define DEST_MATH_VECTOR2EX_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1F2B2E70)
#define DEST_MATH_VECTOR2EX_TOSTRINGEX_OFFSET UNITYSDK_OFFSET(0x1F2B2FA0)
#define DEST_MATH_VECTOR2EX_TOVECTOR3XY_OFFSET UNITYSDK_OFFSET(0x1F2B2F40)
#define DEST_MATH_VECTOR2EX_TOVECTOR3XZ_OFFSET UNITYSDK_OFFSET(0x1F2B2F60)
#define DEST_MATH_VECTOR2EX_TOVECTOR3YZ_OFFSET UNITYSDK_OFFSET(0x1F2B2F80)
#define DEST_MATH_VECTOR2EX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2B3060)

namespace Dest::Math
{
	inline static constexpr unsigned int Vector2ex_TypeDefinitionIndex = 35402;

	class Vector2ex : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_UnitY()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x8590);
		}
		static ::UnityEngine::Vector2* StaticGet_NegativeInfinity()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x8598);
		}
		static ::UnityEngine::Vector2* StaticGet_One()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x85A0);
		}
		static ::UnityEngine::Vector2* StaticGet_Zero()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x85A8);
		}
		static ::UnityEngine::Vector2* StaticGet_PositiveInfinity()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x85B0);
		}
		static ::UnityEngine::Vector2* StaticGet_UnitX()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2ex_TypeDefinitionIndex)->GetStaticField(0x85B8);
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
