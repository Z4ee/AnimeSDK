#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_5425922A8B586808_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x19D6B280)
#define CLASS_1_5425922A8B586808_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19D6B260)
#define CLASS_1_5425922A8B586808_METHOD_1_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x19D6B290)
#define CLASS_1_5425922A8B586808_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x19D6B270)
#define CLASS_1_5425922A8B586808_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19D6B2B0)
#define CLASS_1_5425922A8B586808_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19D6B2A0)
#define CLASS_1_5425922A8B586808__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6B250)

inline static constexpr unsigned int Class_1_5425922A8B586808_TypeDefinitionIndex = 9702;

class Class_1_5425922A8B586808 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5425922A8B586808__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5425922A8B586808_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5425922A8B586808_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5425922A8B586808_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5425922A8B586808_METHOD_1_7D201B4343E63821_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5425922A8B586808_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5425922A8B586808_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
