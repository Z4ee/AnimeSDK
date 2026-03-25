#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_52DF42E136544C98;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_37D655FAABC4D43A_METHOD_2_8D0A2531C88B32B1_OFFSET UNITYSDK_OFFSET(0x1057EC10)
#define CLASS_2_37D655FAABC4D43A__CTOR_OFFSET UNITYSDK_OFFSET(0x1057EE80)
#define CLASS_2_37D655FAABC4D43A__ONBIND_OFFSET UNITYSDK_OFFSET(0x1057EA00)
#define CLASS_2_37D655FAABC4D43A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1057EEB0)

inline static constexpr unsigned int Class_2_37D655FAABC4D43A_TypeDefinitionIndex = 58450;

class Class_2_37D655FAABC4D43A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_3; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_1; // 0x70
	::UnityEngine::UI::Text* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D655FAABC4D43A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D655FAABC4D43A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8D0A2531C88B32B1(::Class_1_52DF42E136544C98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52DF42E136544C98*))((::PBYTE)hIl2Cpp + CLASS_2_37D655FAABC4D43A_METHOD_2_8D0A2531C88B32B1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D655FAABC4D43A___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
