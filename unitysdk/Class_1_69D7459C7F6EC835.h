#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_69D7459C7F6EC835_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x10BAB7D0)
#define CLASS_1_69D7459C7F6EC835_EQUALS_OFFSET UNITYSDK_OFFSET(0x10BAB6E0)
#define CLASS_1_69D7459C7F6EC835_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10BAB850)
#define CLASS_1_69D7459C7F6EC835_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0x10BAB980)
#define CLASS_1_69D7459C7F6EC835_METHOD_1_E85CA50D622B92B5_OFFSET UNITYSDK_OFFSET(0x10BAB900)
#define CLASS_1_69D7459C7F6EC835__CTOR_OFFSET UNITYSDK_OFFSET(0x10BABA00)
#define CLASS_1_69D7459C7F6EC835___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x10BABA10)
#define CLASS_1_69D7459C7F6EC835___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10BABA20)

inline static constexpr unsigned int Class_1_69D7459C7F6EC835_TypeDefinitionIndex = 58617;

class Class_1_69D7459C7F6EC835 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::Vector2 Field_1_1; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_2; // 0x21
	::System::Boolean Field_1_4; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69D7459C7F6EC835__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_69D7459C7F6EC835* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_69D7459C7F6EC835*))((::PBYTE)hIl2Cpp + CLASS_1_69D7459C7F6EC835_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_69D7459C7F6EC835_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69D7459C7F6EC835_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E85CA50D622B92B5(::Class_1_69D7459C7F6EC835* a1, ::Class_1_69D7459C7F6EC835* a2)
	{
		return ((::System::Boolean(*)(::Class_1_69D7459C7F6EC835*, ::Class_1_69D7459C7F6EC835*))((::PBYTE)hIl2Cpp + CLASS_1_69D7459C7F6EC835_METHOD_1_E85CA50D622B92B5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC(::Class_1_69D7459C7F6EC835* a1, ::Class_1_69D7459C7F6EC835* a2)
	{
		return ((::System::Boolean(*)(::Class_1_69D7459C7F6EC835*, ::Class_1_69D7459C7F6EC835*))((::PBYTE)hIl2Cpp + CLASS_1_69D7459C7F6EC835_METHOD_1_09C3DBB624A973FC_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_69D7459C7F6EC835___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69D7459C7F6EC835___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
