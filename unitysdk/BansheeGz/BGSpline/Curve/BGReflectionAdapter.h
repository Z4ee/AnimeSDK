#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F00D1D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x1F00D270)
#define BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1F00D300)
#define BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x1F00D320)
#define BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1F00D3C0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGReflectionAdapter_TypeDefinitionIndex = 35344;

	class BGReflectionAdapter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_GETCUSTOMATTRIBUTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsAbstract(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISABSTRACT_OFFSET))(a1);
		}

		static ::System::Boolean IsClass(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISCLASS_OFFSET))(a1);
		}

		static ::System::Boolean IsSubclassOf(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISSUBCLASSOF_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsValueType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISVALUETYPE_OFFSET))(a1);
		}
	};
}
