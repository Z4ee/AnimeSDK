#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6F28ACCECAB7E5E9;
class Class_1_920E995B355E8493;
class Class_1_D1CAFFBA0949BB65;
namespace Code::Logic::Data::ScriptObject::Level { class Layer; }
namespace Code::Logic::Data::ScriptObject::Level { class PatternTimeline; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_25401CD0A2727B80_METHOD_1_B42F6F894D86620E_OFFSET UNITYSDK_OFFSET(0x16491C80)
#define CLASS_1_25401CD0A2727B80__CTOR_OFFSET UNITYSDK_OFFSET(0x16491A60)

inline static constexpr unsigned int Class_1_25401CD0A2727B80_TypeDefinitionIndex = 48307;

class Class_1_25401CD0A2727B80 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_920E995B355E8493*>* Field_1_0; // 0x18
	::Il2CppArray<::Class_1_D1CAFFBA0949BB65*>* Field_1_6; // 0x20
	::Class_1_6F28ACCECAB7E5E9* Field_1_1; // 0x28

	::System::Void _ctor(::Class_1_6F28ACCECAB7E5E9* a1, ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::Layer*>* a2, ::Il2CppArray<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6F28ACCECAB7E5E9*, ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::Layer*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_25401CD0A2727B80__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B42F6F894D86620E(::Code::Logic::Data::ScriptObject::Level::PatternTimeline* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::PatternTimeline*))((::PBYTE)hIl2Cpp + CLASS_1_25401CD0A2727B80_METHOD_1_B42F6F894D86620E_OFFSET))(this, a1);
	}
};
