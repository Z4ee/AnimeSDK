#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DB9CAAB5758BEDF0.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_621B98AC6BA4F364_METHOD_3_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xCB54E40)
#define CLASS_3_621B98AC6BA4F364_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xCB54F00)
#define CLASS_3_621B98AC6BA4F364__CTOR_OFFSET UNITYSDK_OFFSET(0xCB54EC0)
#define CLASS_3_621B98AC6BA4F364__ONBIND_OFFSET UNITYSDK_OFFSET(0xCB54D90)
#define CLASS_3_621B98AC6BA4F364___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xCB54EF0)

inline static constexpr unsigned int Class_3_621B98AC6BA4F364_TypeDefinitionIndex = 58812;

class Class_3_621B98AC6BA4F364 : public ::Class_2_DB9CAAB5758BEDF0
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	::UnityEngine::Animation* Field_3_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621B98AC6BA4F364__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621B98AC6BA4F364__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621B98AC6BA4F364_METHOD_3_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621B98AC6BA4F364___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621B98AC6BA4F364_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}
};
