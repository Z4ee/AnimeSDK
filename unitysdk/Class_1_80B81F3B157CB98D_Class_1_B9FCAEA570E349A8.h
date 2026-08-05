#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneGroupEntityPriority; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_80B81F3B157CB98D_CLASS_1_B9FCAEA570E349A8_METHOD_1_53C0AB13264F6CD7_OFFSET UNITYSDK_OFFSET(0x12BBAB90)
#define CLASS_1_80B81F3B157CB98D_CLASS_1_B9FCAEA570E349A8__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBAB80)

inline static constexpr unsigned int Class_1_80B81F3B157CB98D_Class_1_B9FCAEA570E349A8_TypeDefinitionIndex = 70050;

class Class_1_80B81F3B157CB98D_Class_1_B9FCAEA570E349A8 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Action_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>* Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80B81F3B157CB98D_CLASS_1_B9FCAEA570E349A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_53C0AB13264F6CD7(::MoleMole::ConfigBigSceneGroupEntityPriority* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBigSceneGroupEntityPriority*))((::PBYTE)hIl2Cpp + CLASS_1_80B81F3B157CB98D_CLASS_1_B9FCAEA570E349A8_METHOD_1_53C0AB13264F6CD7_OFFSET))(this, a1);
	}
};
