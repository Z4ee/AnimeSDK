#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_76B74AA768347996.h"

namespace MoleMole { class SystemSettingContextBase; }
namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_CA202B59F196C2D1_1_METHOD_3_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x144548F0)
#define CLASS_3_CA202B59F196C2D1_1_METHOD_3_37902608E072B994_OFFSET UNITYSDK_OFFSET(0x144539B0)
#define CLASS_3_CA202B59F196C2D1_1_METHOD_3_6001ED1983AD0FC0_OFFSET UNITYSDK_OFFSET(0x14454850)
#define CLASS_3_CA202B59F196C2D1_1_METHOD_3_DED213D141D47C4F_OFFSET UNITYSDK_OFFSET(0x14454690)
#define CLASS_3_CA202B59F196C2D1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x144539A0)

inline static constexpr unsigned int Class_3_CA202B59F196C2D1_1_TypeDefinitionIndex = 64345;

class Class_3_CA202B59F196C2D1_1 : public ::Class_2_76B74AA768347996
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_CA202B59F196C2D1_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_37902608E072B994(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CA202B59F196C2D1_1_METHOD_3_37902608E072B994_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DED213D141D47C4F(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_CA202B59F196C2D1_1_METHOD_3_DED213D141D47C4F_OFFSET))(this, a1);
	}

	::System::Void Method_3_6001ED1983AD0FC0(::MoleMole::SystemSettingContextBase* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CA202B59F196C2D1_1_METHOD_3_6001ED1983AD0FC0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_04DE4FBB293DFBD6(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_CA202B59F196C2D1_1_METHOD_3_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}
};
