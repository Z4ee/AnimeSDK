#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_627DD5F5AE4F9157;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_627DD5F5AE4F9157_CLASS_1_81099EFECC2F2A3F__CTOR_OFFSET UNITYSDK_OFFSET(0xA9D5020)

inline static constexpr unsigned int Class_2_627DD5F5AE4F9157_Class_1_81099EFECC2F2A3F_TypeDefinitionIndex = 59003;

class Class_2_627DD5F5AE4F9157_Class_1_81099EFECC2F2A3F : public ::System::Object
{
public:
	::System::Action_1<::Class_2_627DD5F5AE4F9157*>* Field_1_1; // 0x10
	::System::Func_1<::System::Boolean>* Field_1_0; // 0x18

	::System::Void _ctor(::System::Func_1<::System::Boolean>* a1, ::System::Action_1<::Class_2_627DD5F5AE4F9157*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::Class_2_627DD5F5AE4F9157*>*))((::PBYTE)hIl2Cpp + CLASS_2_627DD5F5AE4F9157_CLASS_1_81099EFECC2F2A3F__CTOR_OFFSET))(this, a1, a2);
	}
};
