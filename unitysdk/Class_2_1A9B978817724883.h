#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
class Class_3_1C975C28117B22CA;
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_1A9B978817724883_METHOD_2_31842571CD7FBD3D_OFFSET UNITYSDK_OFFSET(0x16069C20)
#define CLASS_2_1A9B978817724883_METHOD_2_BB4F9CE38883FF81_OFFSET UNITYSDK_OFFSET(0x16069900)
#define CLASS_2_1A9B978817724883_METHOD_2_D20AEC8A501BD1C9_1_OFFSET UNITYSDK_OFFSET(0x16069BC0)
#define CLASS_2_1A9B978817724883_METHOD_2_D20AEC8A501BD1C9_OFFSET UNITYSDK_OFFSET(0x16069B60)
#define CLASS_2_1A9B978817724883__CTOR_OFFSET UNITYSDK_OFFSET(0x16069B10)

inline static constexpr unsigned int Class_2_1A9B978817724883_TypeDefinitionIndex = 42326;

class Class_2_1A9B978817724883 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_3_1C975C28117B22CA* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A9B978817724883__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BB4F9CE38883FF81(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_1A9B978817724883_METHOD_2_BB4F9CE38883FF81_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Events::UnityAction* Method_2_D20AEC8A501BD1C9()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A9B978817724883_METHOD_2_D20AEC8A501BD1C9_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* Method_2_D20AEC8A501BD1C9_1()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A9B978817724883_METHOD_2_D20AEC8A501BD1C9_1_OFFSET))(this);
	}

	::System::Void Method_2_31842571CD7FBD3D(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A9B978817724883_METHOD_2_31842571CD7FBD3D_OFFSET))(this, a1, a2);
	}
};
