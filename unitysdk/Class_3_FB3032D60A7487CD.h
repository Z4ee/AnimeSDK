#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB0C166B76D82BF6.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_FB3032D60A7487CD_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x12CC09B0)
#define CLASS_3_FB3032D60A7487CD_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x12CC03F0)
#define CLASS_3_FB3032D60A7487CD_METHOD_3_C3A221BD93074219_OFFSET UNITYSDK_OFFSET(0x12CC0A50)
#define CLASS_3_FB3032D60A7487CD_METHOD_3_D795593F5E5DC1C8_OFFSET UNITYSDK_OFFSET(0x12CC0760)
#define CLASS_3_FB3032D60A7487CD_METHOD_3_E4B3C4AAF2EA0017_OFFSET UNITYSDK_OFFSET(0x12CC0350)
#define CLASS_3_FB3032D60A7487CD__CTOR_OFFSET UNITYSDK_OFFSET(0x12CC0340)

inline static constexpr unsigned int Class_3_FB3032D60A7487CD_TypeDefinitionIndex = 43507;

class Class_3_FB3032D60A7487CD : public ::Class_2_AB0C166B76D82BF6
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_E4B3C4AAF2EA0017(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_METHOD_3_E4B3C4AAF2EA0017_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_D795593F5E5DC1C8(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_METHOD_3_D795593F5E5DC1C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Method_3_C3A221BD93074219(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_METHOD_3_C3A221BD93074219_OFFSET))(this, a1, a2, a3);
	}
};
