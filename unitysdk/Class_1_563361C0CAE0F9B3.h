#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4C71EF04B2D31519;
class Class_1_920E995B355E8493;
class Class_1_A3AC0B6B344CF5CC;
namespace Code::Logic::Data::ScriptObject::Level { class Layer; }
namespace Code::Logic::Data::ScriptObject::Level { class PatternTimeline; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_563361C0CAE0F9B3_METHOD_1_B42F6F894D86620E_OFFSET UNITYSDK_OFFSET(0x140DEEA0)
#define CLASS_1_563361C0CAE0F9B3__CTOR_OFFSET UNITYSDK_OFFSET(0x140DEC70)

inline static constexpr unsigned int Class_1_563361C0CAE0F9B3_TypeDefinitionIndex = 45664;

class Class_1_563361C0CAE0F9B3 : public ::System::Object
{
public:
	::Class_1_A3AC0B6B344CF5CC* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_920E995B355E8493*>* Field_1_1; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_2; // 0x20
	::Il2CppArray<::Class_1_4C71EF04B2D31519*>* Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_A3AC0B6B344CF5CC* a1, ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::Layer*>* a2, ::Il2CppArray<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3AC0B6B344CF5CC*, ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::Layer*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_563361C0CAE0F9B3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B42F6F894D86620E(::Code::Logic::Data::ScriptObject::Level::PatternTimeline* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::PatternTimeline*))((::PBYTE)hIl2Cpp + CLASS_1_563361C0CAE0F9B3_METHOD_1_B42F6F894D86620E_OFFSET))(this, a1);
	}
};
