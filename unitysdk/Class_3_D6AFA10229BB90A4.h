#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5B9C6A6280E9B7AE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_D6AFA10229BB90A4_METHOD_3_2F809989C4EE835D_OFFSET UNITYSDK_OFFSET(0x10FDC750)
#define CLASS_3_D6AFA10229BB90A4_METHOD_3_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x10FDC8F0)
#define CLASS_3_D6AFA10229BB90A4__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDC6A0)

inline static constexpr unsigned int Class_3_D6AFA10229BB90A4_TypeDefinitionIndex = 38045;

class Class_3_D6AFA10229BB90A4 : public ::Class_2_5B9C6A6280E9B7AE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_D6AFA10229BB90A4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_2F809989C4EE835D(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D6AFA10229BB90A4_METHOD_3_2F809989C4EE835D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D6AFA10229BB90A4_METHOD_3_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}
};
