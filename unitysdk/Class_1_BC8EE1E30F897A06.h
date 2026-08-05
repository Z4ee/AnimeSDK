#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_BC8EE1E30F897A06_METHOD_1_0C38638EE155D233_OFFSET UNITYSDK_OFFSET(0x1A898610)
#define CLASS_1_BC8EE1E30F897A06_METHOD_1_5646E97A3177E885_OFFSET UNITYSDK_OFFSET(0x1A8989A0)
#define CLASS_1_BC8EE1E30F897A06_METHOD_1_A8D19485AA054B2A_OFFSET UNITYSDK_OFFSET(0x1A898510)
#define CLASS_1_BC8EE1E30F897A06__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A898500)
#define CLASS_1_BC8EE1E30F897A06__CTOR_OFFSET UNITYSDK_OFFSET(0x1A898470)

inline static constexpr unsigned int Class_1_BC8EE1E30F897A06_TypeDefinitionIndex = 69364;

class Class_1_BC8EE1E30F897A06 : public ::System::Object
{
public:
	static ::Class_1_BC8EE1E30F897A06** StaticGet_Field_1_2()
	{
		return (::Class_1_BC8EE1E30F897A06**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC8EE1E30F897A06_TypeDefinitionIndex)->GetStaticField(0x499C0);
	}
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>*>* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC8EE1E30F897A06__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC8EE1E30F897A06__CCTOR_OFFSET))();
	}

	static ::Class_1_BC8EE1E30F897A06* Method_1_A8D19485AA054B2A()
	{
		return ((::Class_1_BC8EE1E30F897A06*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC8EE1E30F897A06_METHOD_1_A8D19485AA054B2A_OFFSET))();
	}

	::System::Void Method_1_0C38638EE155D233(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BC8EE1E30F897A06_METHOD_1_0C38638EE155D233_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5646E97A3177E885(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BC8EE1E30F897A06_METHOD_1_5646E97A3177E885_OFFSET))(this, a1);
	}
};
