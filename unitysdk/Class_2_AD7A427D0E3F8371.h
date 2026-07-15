#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseLeverSwitchSystem_1.h"

class Class_1_2CDF619C23140440;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace System { class String; }

#define CLASS_2_AD7A427D0E3F8371_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17D860E0)
#define CLASS_2_AD7A427D0E3F8371__CREATEINTERACTTRIGGER_OFFSET UNITYSDK_OFFSET(0x17D86180)
#define CLASS_2_AD7A427D0E3F8371__CREATEPROPMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x17D86320)
#define CLASS_2_AD7A427D0E3F8371__CTOR_OFFSET UNITYSDK_OFFSET(0x17D85EE0)
#define CLASS_2_AD7A427D0E3F8371__ONLEVELVARCHANGE_OFFSET UNITYSDK_OFFSET(0x17D86370)
#define CLASS_2_AD7A427D0E3F8371__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x17D86120)
#define CLASS_2_AD7A427D0E3F8371___CREATEINTERACTTRIGGER_B__3_0_OFFSET UNITYSDK_OFFSET(0x17D86540)

inline static constexpr unsigned int Class_2_AD7A427D0E3F8371_TypeDefinitionIndex = 72837;

class Class_2_AD7A427D0E3F8371 : public ::RPG::Client::LittleGame::FiveDim::BaseLeverSwitchSystem_1<::Class_2_56DCA1B58073717B*>
{
public:
	::Class_3_001D9EA49F6215B6* Field_2_0; // 0x40
	::Class_1_2CDF619C23140440* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_2_AD7A427D0E3F8371__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7A427D0E3F8371_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7A427D0E3F8371__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateInteractTrigger(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_AD7A427D0E3F8371__CREATEINTERACTTRIGGER_OFFSET))(this, a1);
	}

	::System::Void _CreatePropMoveTrigger(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_AD7A427D0E3F8371__CREATEPROPMOVETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _OnLevelVarChange(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AD7A427D0E3F8371__ONLEVELVARCHANGE_OFFSET))(this, a1, a2);
	}

	::System::Void __CreateInteractTrigger_b__3_0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_AD7A427D0E3F8371___CREATEINTERACTTRIGGER_B__3_0_OFFSET))(this, a1);
	}
};
