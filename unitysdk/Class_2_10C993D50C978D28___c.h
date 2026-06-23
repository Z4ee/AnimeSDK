#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_10C993D50C978D28___C_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x125E11F0)
#define CLASS_2_10C993D50C978D28___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125E11A0)
#define CLASS_2_10C993D50C978D28___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125E11E0)

inline static constexpr unsigned int Class_2_10C993D50C978D28___c_TypeDefinitionIndex = 41502;

class Class_2_10C993D50C978D28___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__9_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_10C993D50C978D28___c_TypeDefinitionIndex)->GetStaticField(0x33350);
	}
	static ::Class_2_10C993D50C978D28___c** StaticGet___9()
	{
		return (::Class_2_10C993D50C978D28___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_10C993D50C978D28___c_TypeDefinitionIndex)->GetStaticField(0x33358);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_10C993D50C978D28___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10C993D50C978D28___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10C993D50C978D28___C_METHOD_1_289F28027FF47717_OFFSET))(this);
	}
};
