#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C678BB712AF79DB;

#define CLASS_1_0C678BB712AF79DB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA9EC00)
#define CLASS_1_0C678BB712AF79DB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9EC40)
#define CLASS_1_0C678BB712AF79DB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DA9EC50)

inline static constexpr unsigned int Class_1_0C678BB712AF79DB___c_TypeDefinitionIndex = 31108;

class Class_1_0C678BB712AF79DB___c : public ::System::Object
{
public:
	static ::Class_1_0C678BB712AF79DB___c** StaticGet___9()
	{
		return (::Class_1_0C678BB712AF79DB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C678BB712AF79DB___c_TypeDefinitionIndex)->GetStaticField(0x299D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C678BB712AF79DB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C678BB712AF79DB___C__CTOR_OFFSET))(this);
	}

	::Class_1_0C678BB712AF79DB* __cctor_b__38_0()
	{
		return ((::Class_1_0C678BB712AF79DB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C678BB712AF79DB___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
