#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDynamicCheckTree; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C9DE16E8B48292AA_CLASS_1_48B7DBA90F63721F_METHOD_1_182DD50090D6CB62_OFFSET UNITYSDK_OFFSET(0xE921BE0)
#define CLASS_1_C9DE16E8B48292AA_CLASS_1_48B7DBA90F63721F__CTOR_OFFSET UNITYSDK_OFFSET(0xE921BD0)

inline static constexpr unsigned int Class_1_C9DE16E8B48292AA_Class_1_48B7DBA90F63721F_TypeDefinitionIndex = 77568;

class Class_1_C9DE16E8B48292AA_Class_1_48B7DBA90F63721F : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>* Field_1_0; // 0x18
	::System::Action_1<::MoleMole::ConfigDynamicCheckTree*>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA_CLASS_1_48B7DBA90F63721F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_182DD50090D6CB62(::MoleMole::ConfigDynamicCheckTree* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDynamicCheckTree*))((::PBYTE)hIl2Cpp + CLASS_1_C9DE16E8B48292AA_CLASS_1_48B7DBA90F63721F_METHOD_1_182DD50090D6CB62_OFFSET))(this, a1);
	}
};
