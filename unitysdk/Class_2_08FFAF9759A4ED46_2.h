#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCCD4DFEA016B7F9.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define CLASS_2_08FFAF9759A4ED46_2_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x12F12B80)
#define CLASS_2_08FFAF9759A4ED46_2_METHOD_2_CDC866873C69EAE5_OFFSET UNITYSDK_OFFSET(0x12F12690)
#define CLASS_2_08FFAF9759A4ED46_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12F12680)

inline static constexpr unsigned int Class_2_08FFAF9759A4ED46_2_TypeDefinitionIndex = 47287;

class Class_2_08FFAF9759A4ED46_2 : public ::Class_1_BCCD4DFEA016B7F9
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_08FFAF9759A4ED46_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CDC866873C69EAE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_08FFAF9759A4ED46_2_METHOD_2_CDC866873C69EAE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_08FFAF9759A4ED46_2_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
