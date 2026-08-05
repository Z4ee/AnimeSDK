#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76B74AA768347996.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_FB3032D60A7487CD_1_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x1274DE60)
#define CLASS_3_FB3032D60A7487CD_1_METHOD_3_71239EEDFA5611BB_OFFSET UNITYSDK_OFFSET(0x1274DC00)
#define CLASS_3_FB3032D60A7487CD_1_METHOD_3_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x1274D890)
#define CLASS_3_FB3032D60A7487CD_1_METHOD_3_C3A221BD93074219_OFFSET UNITYSDK_OFFSET(0x1274DF00)
#define CLASS_3_FB3032D60A7487CD_1_METHOD_3_E4B3C4AAF2EA0017_OFFSET UNITYSDK_OFFSET(0x1274D7F0)
#define CLASS_3_FB3032D60A7487CD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1274D7E0)

inline static constexpr unsigned int Class_3_FB3032D60A7487CD_1_TypeDefinitionIndex = 86773;

class Class_3_FB3032D60A7487CD_1 : public ::Class_2_76B74AA768347996
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_E4B3C4AAF2EA0017(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_1_METHOD_3_E4B3C4AAF2EA0017_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_71239EEDFA5611BB(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_1_METHOD_3_71239EEDFA5611BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_1_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_1_METHOD_3_B1EA412ACAE87C15_OFFSET))(this);
	}

	::System::Void Method_3_C3A221BD93074219(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FB3032D60A7487CD_1_METHOD_3_C3A221BD93074219_OFFSET))(this, a1, a2, a3);
	}
};
