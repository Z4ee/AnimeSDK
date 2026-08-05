#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneCommonSkill; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_732476E359ED13EB_CLASS_1_22A63651B2A22266_METHOD_1_CF8337C64AFADF49_OFFSET UNITYSDK_OFFSET(0x16B0D200)
#define CLASS_1_732476E359ED13EB_CLASS_1_22A63651B2A22266__CTOR_OFFSET UNITYSDK_OFFSET(0x16B0D1F0)

inline static constexpr unsigned int Class_1_732476E359ED13EB_Class_1_22A63651B2A22266_TypeDefinitionIndex = 64211;

class Class_1_732476E359ED13EB_Class_1_22A63651B2A22266 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneCommonSkill*>* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::ConfigBigSceneCommonSkill*>* Field_1_5; // 0x18
	::System::Action* Field_1_6; // 0x20
	::System::Int32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_732476E359ED13EB_CLASS_1_22A63651B2A22266__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF8337C64AFADF49(::MoleMole::ConfigBigSceneCommonSkill* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBigSceneCommonSkill*))((::PBYTE)hIl2Cpp + CLASS_1_732476E359ED13EB_CLASS_1_22A63651B2A22266_METHOD_1_CF8337C64AFADF49_OFFSET))(this, a1);
	}
};
