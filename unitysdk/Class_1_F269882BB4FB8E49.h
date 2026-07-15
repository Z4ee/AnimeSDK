#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E7D29F43FB80184D;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F269882BB4FB8E49_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14B94790)
#define CLASS_1_F269882BB4FB8E49_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x14B94670)
#define CLASS_1_F269882BB4FB8E49_METHOD_1_47D42B95159AE8D1_OFFSET UNITYSDK_OFFSET(0x14B94600)
#define CLASS_1_F269882BB4FB8E49_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14B947F0)
#define CLASS_1_F269882BB4FB8E49__CTOR_OFFSET UNITYSDK_OFFSET(0x14B945E0)

inline static constexpr unsigned int Class_1_F269882BB4FB8E49_TypeDefinitionIndex = 75124;

class Class_1_F269882BB4FB8E49 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x2C

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F269882BB4FB8E49__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_47D42B95159AE8D1(::Class_3_E7D29F43FB80184D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*))((::PBYTE)hIl2Cpp + CLASS_1_F269882BB4FB8E49_METHOD_1_47D42B95159AE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F269882BB4FB8E49_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F269882BB4FB8E49_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F269882BB4FB8E49_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
