#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class MethodCall_2; }

#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS___C__DISPLAYCLASS9_0__CREATECASTCONVERTER_B__0_OFFSET UNITYSDK_OFFSET(0x17AC5BE0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC2690)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ConvertUtils___c__DisplayClass9_0_TypeDefinitionIndex = 8408;

	class ConvertUtils___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* call; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Object* _CreateCastConverter_b__0(::System::Object* o)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS___C__DISPLAYCLASS9_0__CREATECASTCONVERTER_B__0_OFFSET))(this, o);
		}
	};
}
