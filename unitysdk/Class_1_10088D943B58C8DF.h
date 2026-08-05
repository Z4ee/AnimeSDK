#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Code::Logic::Data::ScriptObject::Level { class MoveCoordinate; }

#define CLASS_1_10088D943B58C8DF_METHOD_1_446F8F3EA4F561D7_OFFSET UNITYSDK_OFFSET(0x16EEEA00)
#define CLASS_1_10088D943B58C8DF__CTOR_OFFSET UNITYSDK_OFFSET(0x16EEE910)

inline static constexpr unsigned int Class_1_10088D943B58C8DF_TypeDefinitionIndex = 57487;

class Class_1_10088D943B58C8DF : public ::System::Object
{
public:
	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::MoveCoordinate*>*))((::PBYTE)hIl2Cpp + CLASS_1_10088D943B58C8DF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_446F8F3EA4F561D7(::System::Single a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_10088D943B58C8DF_METHOD_1_446F8F3EA4F561D7_OFFSET))(this, a1);
	}
};
