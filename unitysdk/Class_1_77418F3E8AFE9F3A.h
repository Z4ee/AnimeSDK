#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_3_C3F0E3B5AB5977AE_29;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_77418F3E8AFE9F3A_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x14400CF0)
#define CLASS_1_77418F3E8AFE9F3A_METHOD_1_195DEF07D7193028_OFFSET UNITYSDK_OFFSET(0x14401160)
#define CLASS_1_77418F3E8AFE9F3A_METHOD_1_21BB1D87992DAE99_OFFSET UNITYSDK_OFFSET(0x14401180)
#define CLASS_1_77418F3E8AFE9F3A_METHOD_1_46D15E576F6BE8A2_OFFSET UNITYSDK_OFFSET(0x14401170)
#define CLASS_1_77418F3E8AFE9F3A_METHOD_1_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x14401150)
#define CLASS_1_77418F3E8AFE9F3A_ONDROP_OFFSET UNITYSDK_OFFSET(0x14401090)
#define CLASS_1_77418F3E8AFE9F3A__CTOR_OFFSET UNITYSDK_OFFSET(0x14400CE0)

inline static constexpr unsigned int Class_1_77418F3E8AFE9F3A_TypeDefinitionIndex = 87421;

class Class_1_77418F3E8AFE9F3A : public ::System::Object
{
public:
	::System::Action_2<::Class_3_C3F0E3B5AB5977AE_29*, ::Class_3_C3F0E3B5AB5977AE_29*>* Field_1_7; // 0x10
	::Class_3_C3F0E3B5AB5977AE_29* Field_1_0; // 0x18
	::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>* Field_1_5; // 0x20
	::System::Nullable_1<::Enum_3_ED790DAC948A65A9_13> Field_1_6; // 0x28

	::System::Void _ctor(::Class_3_C3F0E3B5AB5977AE_29* a1, ::System::Action_2<::Class_3_C3F0E3B5AB5977AE_29*, ::Class_3_C3F0E3B5AB5977AE_29*>* a2, ::System::Nullable_1<::Enum_3_ED790DAC948A65A9_13> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_29*, ::System::Action_2<::Class_3_C3F0E3B5AB5977AE_29*, ::Class_3_C3F0E3B5AB5977AE_29*>*, ::System::Nullable_1<::Enum_3_ED790DAC948A65A9_13>))((::PBYTE)hIl2Cpp + CLASS_1_77418F3E8AFE9F3A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean CanAcceptDrop(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_77418F3E8AFE9F3A_CANACCEPTDROP_OFFSET))(this, a1);
	}

	::System::Void OnDrop(::System::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_77418F3E8AFE9F3A_ONDROP_OFFSET))(this, a1, a2);
	}

	::Class_3_C3F0E3B5AB5977AE_29* Method_1_F239777256F9BA8F()
	{
		return ((::Class_3_C3F0E3B5AB5977AE_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77418F3E8AFE9F3A_METHOD_1_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>* Method_1_195DEF07D7193028()
	{
		return ((::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77418F3E8AFE9F3A_METHOD_1_195DEF07D7193028_OFFSET))(this);
	}

	::System::Nullable_1<::Enum_3_ED790DAC948A65A9_13> Method_1_46D15E576F6BE8A2()
	{
		return ((::System::Nullable_1<::Enum_3_ED790DAC948A65A9_13>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77418F3E8AFE9F3A_METHOD_1_46D15E576F6BE8A2_OFFSET))(this);
	}

	::System::Void Method_1_21BB1D87992DAE99(::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>*))((::PBYTE)hIl2Cpp + CLASS_1_77418F3E8AFE9F3A_METHOD_1_21BB1D87992DAE99_OFFSET))(this, a1);
	}
};
