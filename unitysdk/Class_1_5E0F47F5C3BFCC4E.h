#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_402DBB6FAC12574C;
namespace MoleMole { class MonoLayoutTween; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_2A74484E06FA28B1_OFFSET UNITYSDK_OFFSET(0xE8A5AE0)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xE8A5210)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_3F5962F94C41A5EA_OFFSET UNITYSDK_OFFSET(0xE8A5630)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0xE8A57B0)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0xE8A5960)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_D60A4A8DA6FC3404_OFFSET UNITYSDK_OFFSET(0xE8A5490)
#define CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_F8D4E8CA878FB172_OFFSET UNITYSDK_OFFSET(0xE8A52D0)
#define CLASS_1_5E0F47F5C3BFCC4E__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A5270)

inline static constexpr unsigned int Class_1_5E0F47F5C3BFCC4E_TypeDefinitionIndex = 69664;

class Class_1_5E0F47F5C3BFCC4E : public ::System::Object
{
public:
	::MoleMole::MonoLayoutTween* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::MonoLayoutTween* a1, ::Class_1_402DBB6FAC12574C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLayoutTween*, ::Class_1_402DBB6FAC12574C*))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void Method_1_F8D4E8CA878FB172(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_F8D4E8CA878FB172_OFFSET))(this, a1);
	}

	::System::Void Method_1_D60A4A8DA6FC3404(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_D60A4A8DA6FC3404_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F5962F94C41A5EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_3F5962F94C41A5EA_OFFSET))(this);
	}

	::System::Void Method_1_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_49AA86D9F19FB057_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9809C99861C91775()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_9809C99861C91775_OFFSET))(this);
	}

	::System::Boolean Method_1_2A74484E06FA28B1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0F47F5C3BFCC4E_METHOD_1_2A74484E06FA28B1_OFFSET))(this);
	}
};
