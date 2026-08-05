#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneStoreLight; }
namespace System { class Action; }

#define CLASS_1_310EFBF09AA4BEF5_CLASS_1_CBE75393F30D40DA_METHOD_1_2707495680849817_OFFSET UNITYSDK_OFFSET(0x141B15C0)
#define CLASS_1_310EFBF09AA4BEF5_CLASS_1_CBE75393F30D40DA__CTOR_OFFSET UNITYSDK_OFFSET(0x141B15B0)

inline static constexpr unsigned int Class_1_310EFBF09AA4BEF5_Class_1_CBE75393F30D40DA_TypeDefinitionIndex = 84201;

class Class_1_310EFBF09AA4BEF5_Class_1_CBE75393F30D40DA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_310EFBF09AA4BEF5_CLASS_1_CBE75393F30D40DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2707495680849817(::MoleMole::ConfigBigSceneStoreLight* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBigSceneStoreLight*))((::PBYTE)hIl2Cpp + CLASS_1_310EFBF09AA4BEF5_CLASS_1_CBE75393F30D40DA_METHOD_1_2707495680849817_OFFSET))(this, a1);
	}
};
