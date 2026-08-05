#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5B9C6A6280E9B7AE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_21EBB9E70F3CB0AC_1_METHOD_3_9D6D79858C2D1AA4_OFFSET UNITYSDK_OFFSET(0x1554B350)
#define CLASS_3_21EBB9E70F3CB0AC_1_METHOD_3_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x1554B4B0)
#define CLASS_3_21EBB9E70F3CB0AC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1554B2A0)

inline static constexpr unsigned int Class_3_21EBB9E70F3CB0AC_1_TypeDefinitionIndex = 84860;

class Class_3_21EBB9E70F3CB0AC_1 : public ::Class_2_5B9C6A6280E9B7AE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_21EBB9E70F3CB0AC_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_9D6D79858C2D1AA4(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_21EBB9E70F3CB0AC_1_METHOD_3_9D6D79858C2D1AA4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_21EBB9E70F3CB0AC_1_METHOD_3_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}
};
