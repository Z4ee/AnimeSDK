#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define CLASS_1_BCCD4DFEA016B7F9_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xF63D800)
#define CLASS_1_BCCD4DFEA016B7F9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF63D850)
#define CLASS_1_BCCD4DFEA016B7F9__CTOR_OFFSET UNITYSDK_OFFSET(0xF63D7F0)

inline static constexpr unsigned int Class_1_BCCD4DFEA016B7F9_TypeDefinitionIndex = 79537;

class Class_1_BCCD4DFEA016B7F9 : public ::System::Object
{
public:
	::MoleMole::PerformanceSettingPostProcessProfileBase* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + CLASS_1_BCCD4DFEA016B7F9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BCCD4DFEA016B7F9_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCCD4DFEA016B7F9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
