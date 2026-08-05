#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GeneralGraphicQualityProfile; }
namespace System { class String; }

#define CLASS_1_913CED533E60A070_METHOD_1_62167C28EC14CC63_1_OFFSET UNITYSDK_OFFSET(0x1751DB50)
#define CLASS_1_913CED533E60A070_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x1751D740)
#define CLASS_1_913CED533E60A070_METHOD_1_7638E0D3BEE2CDBA_OFFSET UNITYSDK_OFFSET(0x1751DAC0)
#define CLASS_1_913CED533E60A070_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1751D700)
#define CLASS_1_913CED533E60A070_METHOD_1_E6B2DE601AD972A2_OFFSET UNITYSDK_OFFSET(0x1751D9E0)
#define CLASS_1_913CED533E60A070__CTOR_OFFSET UNITYSDK_OFFSET(0x1751D6F0)

inline static constexpr unsigned int Class_1_913CED533E60A070_TypeDefinitionIndex = 64796;

class Class_1_913CED533E60A070 : public ::System::Object
{
public:
	::MoleMole::GeneralGraphicQualityProfile* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::GeneralGraphicQualityProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GeneralGraphicQualityProfile*))((::PBYTE)hIl2Cpp + CLASS_1_913CED533E60A070__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_913CED533E60A070_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_913CED533E60A070_METHOD_1_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_1_E6B2DE601AD972A2(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_913CED533E60A070_METHOD_1_E6B2DE601AD972A2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_62167C28EC14CC63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_913CED533E60A070_METHOD_1_62167C28EC14CC63_1_OFFSET))(this);
	}

	::System::Void Method_1_7638E0D3BEE2CDBA(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_913CED533E60A070_METHOD_1_7638E0D3BEE2CDBA_OFFSET))(this, a1, a2, a3);
	}
};
