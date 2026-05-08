#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_765;
class Class_2_34260C6E999C2AE0;
namespace MoleMole { class NotificationBadgeEx; }

#define CLASS_2_34260C6E999C2AE0_CLASS_1_90D0A6E863146E18_METHOD_1_24BFEB044F39F03B_OFFSET UNITYSDK_OFFSET(0x1328D3A0)
#define CLASS_2_34260C6E999C2AE0_CLASS_1_90D0A6E863146E18__CTOR_OFFSET UNITYSDK_OFFSET(0x1328D390)

inline static constexpr unsigned int Class_2_34260C6E999C2AE0_Class_1_90D0A6E863146E18_TypeDefinitionIndex = 68560;

class Class_2_34260C6E999C2AE0_Class_1_90D0A6E863146E18 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_765* Field_1_0; // 0x10
	::Class_2_34260C6E999C2AE0* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34260C6E999C2AE0_CLASS_1_90D0A6E863146E18__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_24BFEB044F39F03B(::MoleMole::NotificationBadgeEx* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*))((::PBYTE)hIl2Cpp + CLASS_2_34260C6E999C2AE0_CLASS_1_90D0A6E863146E18_METHOD_1_24BFEB044F39F03B_OFFSET))(this, a1);
	}
};
