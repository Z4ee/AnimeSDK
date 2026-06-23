#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSurfGameItemData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A66999A870925AC7_CLASS_1_04794DFE8854D8C2_METHOD_1_BE6236F612198154_OFFSET UNITYSDK_OFFSET(0xA636C00)
#define CLASS_1_A66999A870925AC7_CLASS_1_04794DFE8854D8C2__CTOR_OFFSET UNITYSDK_OFFSET(0xA636BF0)

inline static constexpr unsigned int Class_1_A66999A870925AC7_Class_1_04794DFE8854D8C2_TypeDefinitionIndex = 40752;

class Class_1_A66999A870925AC7_Class_1_04794DFE8854D8C2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Action_1<::MoleMole::Config::ConfigSurfGameItemData*>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_CLASS_1_04794DFE8854D8C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE6236F612198154(::MoleMole::Config::ConfigSurfGameItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSurfGameItemData*))((::PBYTE)hIl2Cpp + CLASS_1_A66999A870925AC7_CLASS_1_04794DFE8854D8C2_METHOD_1_BE6236F612198154_OFFSET))(this, a1);
	}
};
