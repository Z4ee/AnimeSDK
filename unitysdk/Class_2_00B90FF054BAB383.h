#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseContactEventSystem_1.h"

class Class_1_2CDF619C23140440;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;

#define CLASS_2_00B90FF054BAB383_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x186B6370)
#define CLASS_2_00B90FF054BAB383_METHOD_2_4400AC1A080436CF_OFFSET UNITYSDK_OFFSET(0x186B6A50)
#define CLASS_2_00B90FF054BAB383__CTOR_OFFSET UNITYSDK_OFFSET(0x186B62B0)
#define CLASS_2_00B90FF054BAB383__UPDATENEWCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x186B63B0)
#define CLASS_2_00B90FF054BAB383__UPDATEPREVCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x186B6750)

inline static constexpr unsigned int Class_2_00B90FF054BAB383_TypeDefinitionIndex = 72811;

class Class_2_00B90FF054BAB383 : public ::RPG::Client::LittleGame::FiveDim::BaseContactEventSystem_1<::Class_2_56DCA1B58073717B*>
{
public:
	::Class_1_2CDF619C23140440* Field_2_0; // 0x20
	::Class_3_001D9EA49F6215B6* Field_2_1; // 0x28

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_2_00B90FF054BAB383__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00B90FF054BAB383_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _UpdateNewContactPlayerEntities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00B90FF054BAB383__UPDATENEWCONTACTPLAYERENTITIES_OFFSET))(this);
	}

	::System::Void _UpdatePrevContactPlayerEntities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00B90FF054BAB383__UPDATEPREVCONTACTPLAYERENTITIES_OFFSET))(this);
	}

	::System::Void Method_2_4400AC1A080436CF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_00B90FF054BAB383_METHOD_2_4400AC1A080436CF_OFFSET))(this, a1, a2);
	}
};
