#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_468A4FBF2E9F527C;
class Class_3_025FF4981524A424_164;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_468A4FBF2E9F527C_CLASS_1_D0E40DEE8332487E_METHOD_1_60221B76A3FF42E1_OFFSET UNITYSDK_OFFSET(0x11E7F440)
#define CLASS_2_468A4FBF2E9F527C_CLASS_1_D0E40DEE8332487E__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7F430)

inline static constexpr unsigned int Class_2_468A4FBF2E9F527C_Class_1_D0E40DEE8332487E_TypeDefinitionIndex = 66483;

class Class_2_468A4FBF2E9F527C_Class_1_D0E40DEE8332487E : public ::System::Object
{
public:
	::Class_2_468A4FBF2E9F527C* Field_1_1; // 0x10
	::System::Action_1<::System::Boolean>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_468A4FBF2E9F527C_CLASS_1_D0E40DEE8332487E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60221B76A3FF42E1(::System::Boolean a1, ::Class_3_025FF4981524A424_164* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_164*))((::PBYTE)hIl2Cpp + CLASS_2_468A4FBF2E9F527C_CLASS_1_D0E40DEE8332487E_METHOD_1_60221B76A3FF42E1_OFFSET))(this, a1, a2);
	}
};
