#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D63DE2EC2835DB62_Class_1_B0E9C51B6798124B;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_2_5668A5419A7BEAB2_CLASS_1_FA9AA54083BE415C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14FC8B40)
#define CLASS_2_5668A5419A7BEAB2_CLASS_1_FA9AA54083BE415C_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x14FCC060)
#define CLASS_2_5668A5419A7BEAB2_CLASS_1_FA9AA54083BE415C_METHOD_1_B3725C8DD86BB06D_OFFSET UNITYSDK_OFFSET(0x14FC96C0)
#define CLASS_2_5668A5419A7BEAB2_CLASS_1_FA9AA54083BE415C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14FCDD90)
#define CLASS_2_5668A5419A7BEAB2_CLASS_1_FA9AA54083BE415C__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCC190)

inline static constexpr unsigned int Class_2_5668A5419A7BEAB2_Class_1_FA9AA54083BE415C_TypeDefinitionIndex = 57595;

class Class_2_5668A5419A7BEAB2_Class_1_FA9AA54083BE415C : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::Class_1_D63DE2EC2835DB62_Class_1_B0E9C51B6798124B* Field_1_2; // 0x10
	::UnityEngine::Material* Field_1_3; // 0x18
	::System::Boolean Field_1_4; // 0x20

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_CLASS_1_FA9AA54083BE415C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_CLASS_1_FA9AA54083BE415C_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_CLASS_1_FA9AA54083BE415C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_CLASS_1_FA9AA54083BE415C_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_B3725C8DD86BB06D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5668A5419A7BEAB2_CLASS_1_FA9AA54083BE415C_METHOD_1_B3725C8DD86BB06D_OFFSET))(this, a1);
	}
};
