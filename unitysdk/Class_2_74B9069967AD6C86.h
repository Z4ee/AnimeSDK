#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PressureSwitchBaseSystem_1.h"

class Class_1_2CDF619C23140440;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;

#define CLASS_2_74B9069967AD6C86__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x1686A030)
#define CLASS_2_74B9069967AD6C86__CTOR_OFFSET UNITYSDK_OFFSET(0x16869D90)
#define CLASS_2_74B9069967AD6C86__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1686A260)
#define CLASS_2_74B9069967AD6C86__ONTRIGGEROUT_OFFSET UNITYSDK_OFFSET(0x1686A370)
#define CLASS_2_74B9069967AD6C86__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16869F90)

inline static constexpr unsigned int Class_2_74B9069967AD6C86_TypeDefinitionIndex = 72860;

class Class_2_74B9069967AD6C86 : public ::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1<::Class_2_56DCA1B58073717B*>
{
public:
	::Class_3_001D9EA49F6215B6* Field_2_0; // 0x40
	::Class_1_2CDF619C23140440* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_2_74B9069967AD6C86__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74B9069967AD6C86__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateTrigger(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_74B9069967AD6C86__CREATETRIGGER_OFFSET))(this, a1);
	}

	::Class_2_56DCA1B58073717B* _GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_56DCA1B58073717B*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_74B9069967AD6C86__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void _OnTriggerOut(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_2_74B9069967AD6C86__ONTRIGGEROUT_OFFSET))(this, a1);
	}
};
