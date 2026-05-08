#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_C037AA4D012AB8FD_METHOD_2_1EA0C3C861855A26_OFFSET UNITYSDK_OFFSET(0x12BB1CE0)
#define CLASS_2_C037AA4D012AB8FD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12BB1A10)
#define CLASS_2_C037AA4D012AB8FD_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x12BB1B20)
#define CLASS_2_C037AA4D012AB8FD_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12BB1C40)
#define CLASS_2_C037AA4D012AB8FD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12BB1BB0)
#define CLASS_2_C037AA4D012AB8FD__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB1AA0)
#define CLASS_2_C037AA4D012AB8FD__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB1B10)

inline static constexpr unsigned int Class_2_C037AA4D012AB8FD_TypeDefinitionIndex = 42213;

class Class_2_C037AA4D012AB8FD : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x5B; // 0x0
	::System::Boolean Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C037AA4D012AB8FD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C037AA4D012AB8FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C037AA4D012AB8FD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C037AA4D012AB8FD_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C037AA4D012AB8FD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C037AA4D012AB8FD_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_1EA0C3C861855A26(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C037AA4D012AB8FD_METHOD_2_1EA0C3C861855A26_OFFSET))(this, a1, a2);
	}
};
