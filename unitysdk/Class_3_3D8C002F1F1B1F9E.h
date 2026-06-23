#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5B9C6A6280E9B7AE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_3D8C002F1F1B1F9E_METHOD_3_66D1CC6071325C2F_OFFSET UNITYSDK_OFFSET(0x15565B00)
#define CLASS_3_3D8C002F1F1B1F9E_METHOD_3_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x15565CF0)
#define CLASS_3_3D8C002F1F1B1F9E__CTOR_OFFSET UNITYSDK_OFFSET(0x15565A50)

inline static constexpr unsigned int Class_3_3D8C002F1F1B1F9E_TypeDefinitionIndex = 46195;

class Class_3_3D8C002F1F1B1F9E : public ::Class_2_5B9C6A6280E9B7AE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_3D8C002F1F1B1F9E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_66D1CC6071325C2F(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3D8C002F1F1B1F9E_METHOD_3_66D1CC6071325C2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3D8C002F1F1B1F9E_METHOD_3_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}
};
