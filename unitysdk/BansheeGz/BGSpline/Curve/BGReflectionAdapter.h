#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17BC3A20)
#define BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x17BC3A50)
#define BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISCLASS_OFFSET UNITYSDK_OFFSET(0x17BC3A80)
#define BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x17BC3AD0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x17BC3B00)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGReflectionAdapter_TypeDefinitionIndex = 33830;

	class BGReflectionAdapter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* type, ::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_GETCUSTOMATTRIBUTES_OFFSET))(type, attributeType, inherit);
		}

		static ::System::Boolean IsAbstract(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISABSTRACT_OFFSET))(type);
		}

		static ::System::Boolean IsClass(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISCLASS_OFFSET))(type);
		}

		static ::System::Boolean IsSubclassOf(::System::Type* type, ::System::Type* typeToCheck)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISSUBCLASSOF_OFFSET))(type, typeToCheck);
		}

		static ::System::Boolean IsValueType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGREFLECTIONADAPTER_ISVALUETYPE_OFFSET))(type);
		}
	};
}
