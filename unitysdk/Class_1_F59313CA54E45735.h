#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F59313CA54E45735_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13755A40)
#define CLASS_1_F59313CA54E45735_METHOD_1_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0x13755AA0)
#define CLASS_1_F59313CA54E45735_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13755AF0)
#define CLASS_1_F59313CA54E45735_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13755A90)
#define CLASS_1_F59313CA54E45735__CTOR_OFFSET UNITYSDK_OFFSET(0x13755A80)

inline static constexpr unsigned int Class_1_F59313CA54E45735_TypeDefinitionIndex = 47253;

class Class_1_F59313CA54E45735 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F59313CA54E45735__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F59313CA54E45735_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F59313CA54E45735_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::Boolean Method_1_B34C1EF5D195AA30(::Class_1_F59313CA54E45735* a1)
	{
		return ((::System::Boolean(*)(::Class_1_F59313CA54E45735*))((::PBYTE)hIl2Cpp + CLASS_1_F59313CA54E45735_METHOD_1_B34C1EF5D195AA30_OFFSET))(a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F59313CA54E45735_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
