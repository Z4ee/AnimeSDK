#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageSkinShow; }
namespace System { class Action; }

#define CLASS_1_1F2CAFBB91A16416_CLASS_1_8CF6CDC336582CEC_METHOD_1_EDB32348D2745488_OFFSET UNITYSDK_OFFSET(0x15695FA0)
#define CLASS_1_1F2CAFBB91A16416_CLASS_1_8CF6CDC336582CEC__CTOR_OFFSET UNITYSDK_OFFSET(0x15695F90)

inline static constexpr unsigned int Class_1_1F2CAFBB91A16416_Class_1_8CF6CDC336582CEC_TypeDefinitionIndex = 70895;

class Class_1_1F2CAFBB91A16416_Class_1_8CF6CDC336582CEC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2CAFBB91A16416_CLASS_1_8CF6CDC336582CEC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDB32348D2745488(::MoleMole::ConfigUIMainPageSkinShow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageSkinShow*))((::PBYTE)hIl2Cpp + CLASS_1_1F2CAFBB91A16416_CLASS_1_8CF6CDC336582CEC_METHOD_1_EDB32348D2745488_OFFSET))(this, a1);
	}
};
