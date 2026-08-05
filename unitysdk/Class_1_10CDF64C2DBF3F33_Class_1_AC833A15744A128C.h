#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicObjectRegistry; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_10CDF64C2DBF3F33_CLASS_1_AC833A15744A128C_METHOD_1_4F41CA8A6C4BD49C_OFFSET UNITYSDK_OFFSET(0x14ED6920)
#define CLASS_1_10CDF64C2DBF3F33_CLASS_1_AC833A15744A128C__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED6910)

inline static constexpr unsigned int Class_1_10CDF64C2DBF3F33_Class_1_AC833A15744A128C_TypeDefinitionIndex = 73169;

class Class_1_10CDF64C2DBF3F33_Class_1_AC833A15744A128C : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigDynamicObjectRegistry*>* Field_1_7; // 0x10
	::System::Action* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicObjectRegistry*>* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10CDF64C2DBF3F33_CLASS_1_AC833A15744A128C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4F41CA8A6C4BD49C(::MoleMole::Config::ConfigDynamicObjectRegistry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicObjectRegistry*))((::PBYTE)hIl2Cpp + CLASS_1_10CDF64C2DBF3F33_CLASS_1_AC833A15744A128C_METHOD_1_4F41CA8A6C4BD49C_OFFSET))(this, a1);
	}
};
