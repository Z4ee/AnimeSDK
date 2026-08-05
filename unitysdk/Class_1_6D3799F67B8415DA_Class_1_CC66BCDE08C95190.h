#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraCutsceneGroups; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6D3799F67B8415DA_CLASS_1_CC66BCDE08C95190_METHOD_1_452A61CA423B73FA_OFFSET UNITYSDK_OFFSET(0x141C6BD0)
#define CLASS_1_6D3799F67B8415DA_CLASS_1_CC66BCDE08C95190__CTOR_OFFSET UNITYSDK_OFFSET(0x141C6BC0)

inline static constexpr unsigned int Class_1_6D3799F67B8415DA_Class_1_CC66BCDE08C95190_TypeDefinitionIndex = 59857;

class Class_1_6D3799F67B8415DA_Class_1_CC66BCDE08C95190 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>* Field_1_5; // 0x18
	::System::Action* Field_1_6; // 0x20
	::System::Int32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_CC66BCDE08C95190__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_452A61CA423B73FA(::MoleMole::Config::ConfigCameraCutsceneGroups* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraCutsceneGroups*))((::PBYTE)hIl2Cpp + CLASS_1_6D3799F67B8415DA_CLASS_1_CC66BCDE08C95190_METHOD_1_452A61CA423B73FA_OFFSET))(this, a1);
	}
};
