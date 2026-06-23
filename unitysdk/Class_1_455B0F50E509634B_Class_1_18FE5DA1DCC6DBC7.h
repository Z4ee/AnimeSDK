#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimationCurveLibrary; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_455B0F50E509634B_CLASS_1_18FE5DA1DCC6DBC7_METHOD_1_18141DFB7E216A8B_OFFSET UNITYSDK_OFFSET(0x12997E60)
#define CLASS_1_455B0F50E509634B_CLASS_1_18FE5DA1DCC6DBC7__CTOR_OFFSET UNITYSDK_OFFSET(0x12997E50)

inline static constexpr unsigned int Class_1_455B0F50E509634B_Class_1_18FE5DA1DCC6DBC7_TypeDefinitionIndex = 82389;

class Class_1_455B0F50E509634B_Class_1_18FE5DA1DCC6DBC7 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::AnimationCurveLibrary*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::AnimationCurveLibrary*>* Field_1_0; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_CLASS_1_18FE5DA1DCC6DBC7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_18141DFB7E216A8B(::MoleMole::Config::AnimationCurveLibrary* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimationCurveLibrary*))((::PBYTE)hIl2Cpp + CLASS_1_455B0F50E509634B_CLASS_1_18FE5DA1DCC6DBC7_METHOD_1_18141DFB7E216A8B_OFFSET))(this, a1);
	}
};
