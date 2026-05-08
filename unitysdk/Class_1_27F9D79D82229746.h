#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_27F9D79D82229746_METHOD_1_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x13153760)
#define CLASS_1_27F9D79D82229746_METHOD_1_6FBD043A86C5A8DC_OFFSET UNITYSDK_OFFSET(0x13153670)
#define CLASS_1_27F9D79D82229746_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13153620)
#define CLASS_1_27F9D79D82229746_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x131536F0)
#define CLASS_1_27F9D79D82229746__CTOR_OFFSET UNITYSDK_OFFSET(0x13153610)

inline static constexpr unsigned int Class_1_27F9D79D82229746_TypeDefinitionIndex = 74245;

class Class_1_27F9D79D82229746 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27F9D79D82229746__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27F9D79D82229746_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6FBD043A86C5A8DC(::UnityEngine::GameObject* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_27F9D79D82229746_METHOD_1_6FBD043A86C5A8DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_27F9D79D82229746_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27F9D79D82229746_METHOD_1_4487776BEE04D471_OFFSET))(this);
	}
};
