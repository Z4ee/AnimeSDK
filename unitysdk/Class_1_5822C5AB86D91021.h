#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87F855E9737731A7;
class Class_2_99753BCBD4BECE1D;
class MainCityObjectState_ScriptConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5822C5AB86D91021_METHOD_1_33F5F00D73A3D752_OFFSET UNITYSDK_OFFSET(0x15D0F4F0)
#define CLASS_1_5822C5AB86D91021_METHOD_1_61CF8BB17BA6E724_OFFSET UNITYSDK_OFFSET(0x15D0F3F0)
#define CLASS_1_5822C5AB86D91021_METHOD_1_8EB27D281ACA7277_OFFSET UNITYSDK_OFFSET(0x15D0F2A0)
#define CLASS_1_5822C5AB86D91021_METHOD_1_D0D828ED30757AA6_OFFSET UNITYSDK_OFFSET(0x15D0F620)
#define CLASS_1_5822C5AB86D91021__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0EF40)

inline static constexpr unsigned int Class_1_5822C5AB86D91021_TypeDefinitionIndex = 91454;

class Class_1_5822C5AB86D91021 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_87F855E9737731A7*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_99753BCBD4BECE1D*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_99753BCBD4BECE1D*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5822C5AB86D91021__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_87F855E9737731A7* Method_1_8EB27D281ACA7277(::System::Int32 a1)
	{
		return ((::Class_1_87F855E9737731A7*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5822C5AB86D91021_METHOD_1_8EB27D281ACA7277_OFFSET))(this, a1);
	}

	::MainCityObjectState_ScriptConfig* Method_1_61CF8BB17BA6E724(::System::String* a1)
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5822C5AB86D91021_METHOD_1_61CF8BB17BA6E724_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_33F5F00D73A3D752(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5822C5AB86D91021_METHOD_1_33F5F00D73A3D752_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D0D828ED30757AA6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5822C5AB86D91021_METHOD_1_D0D828ED30757AA6_OFFSET))(this);
	}
};
