#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_2_9A82E4A106BA6573;

#define CLASS_2_9A82E4A106BA6573_CLASS_1_D36C72994E7F32C3_METHOD_1_784CAAD208B1C834_OFFSET UNITYSDK_OFFSET(0x139610A0)
#define CLASS_2_9A82E4A106BA6573_CLASS_1_D36C72994E7F32C3_METHOD_1_C73E1643193E5674_OFFSET UNITYSDK_OFFSET(0x13960F60)
#define CLASS_2_9A82E4A106BA6573_CLASS_1_D36C72994E7F32C3__CTOR_OFFSET UNITYSDK_OFFSET(0x13960F50)

inline static constexpr unsigned int Class_2_9A82E4A106BA6573_Class_1_D36C72994E7F32C3_TypeDefinitionIndex = 66882;

class Class_2_9A82E4A106BA6573_Class_1_D36C72994E7F32C3 : public ::System::Object
{
public:
	::Class_2_9A82E4A106BA6573* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A82E4A106BA6573_CLASS_1_D36C72994E7F32C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C73E1643193E5674(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9A82E4A106BA6573_CLASS_1_D36C72994E7F32C3_METHOD_1_C73E1643193E5674_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_784CAAD208B1C834(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A82E4A106BA6573_CLASS_1_D36C72994E7F32C3_METHOD_1_784CAAD208B1C834_OFFSET))(this, a1, a2);
	}
};
