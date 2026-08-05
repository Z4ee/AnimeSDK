#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E88275273EFBFE5C;
class Class_1_F37ACBD40C173304;
class Class_2_095670C69DA9DCE4;
class Class_2_DF73794ED874FFFB;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_F8AB682D4111BB8F__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF92B0)

inline static constexpr unsigned int Class_1_F8AB682D4111BB8F_TypeDefinitionIndex = 80351;

class Class_1_F8AB682D4111BB8F : public ::System::Object
{
public:
	::Class_2_DF73794ED874FFFB* Field_1_6; // 0x10
	::Class_1_E88275273EFBFE5C* Field_1_0; // 0x18
	::System::Action_2<::System::Int32, ::System::Action*>* Field_1_7; // 0x20
	::Class_1_F37ACBD40C173304* Field_1_1; // 0x28
	::Class_2_095670C69DA9DCE4* Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8AB682D4111BB8F__CTOR_OFFSET))(this);
	}
};
