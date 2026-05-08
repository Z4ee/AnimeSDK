#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
class Class_3_1C975C28117B22CA;
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_E747E44B29DEF889_METHOD_2_BB4F9CE38883FF81_OFFSET UNITYSDK_OFFSET(0x1069F5D0)
#define CLASS_2_E747E44B29DEF889_METHOD_2_D1FE51D66C7905A2_OFFSET UNITYSDK_OFFSET(0x1069F8A0)
#define CLASS_2_E747E44B29DEF889_METHOD_2_D20AEC8A501BD1C9_1_OFFSET UNITYSDK_OFFSET(0x1069FD20)
#define CLASS_2_E747E44B29DEF889_METHOD_2_D20AEC8A501BD1C9_OFFSET UNITYSDK_OFFSET(0x1069F850)
#define CLASS_2_E747E44B29DEF889__CTOR_OFFSET UNITYSDK_OFFSET(0x1069F800)

inline static constexpr unsigned int Class_2_E747E44B29DEF889_TypeDefinitionIndex = 57117;

class Class_2_E747E44B29DEF889 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_3_1C975C28117B22CA* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E747E44B29DEF889__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BB4F9CE38883FF81(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_E747E44B29DEF889_METHOD_2_BB4F9CE38883FF81_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Events::UnityAction* Method_2_D20AEC8A501BD1C9()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E747E44B29DEF889_METHOD_2_D20AEC8A501BD1C9_OFFSET))(this);
	}

	::System::Void Method_2_D1FE51D66C7905A2(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E747E44B29DEF889_METHOD_2_D1FE51D66C7905A2_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Events::UnityAction* Method_2_D20AEC8A501BD1C9_1()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E747E44B29DEF889_METHOD_2_D20AEC8A501BD1C9_1_OFFSET))(this);
	}
};
