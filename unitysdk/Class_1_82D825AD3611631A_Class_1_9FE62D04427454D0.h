#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHitDatas; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82D825AD3611631A_CLASS_1_9FE62D04427454D0__CTOR_OFFSET UNITYSDK_OFFSET(0x15569C90)

inline static constexpr unsigned int Class_1_82D825AD3611631A_Class_1_9FE62D04427454D0_TypeDefinitionIndex = 40453;

class Class_1_82D825AD3611631A_Class_1_9FE62D04427454D0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHitDatas*>* Field_1_2; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82D825AD3611631A_CLASS_1_9FE62D04427454D0__CTOR_OFFSET))(this);
	}
};
