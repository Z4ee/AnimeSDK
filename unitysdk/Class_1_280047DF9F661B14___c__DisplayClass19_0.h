#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_1_280047DF9F661B14;
class Class_1_68CF822132788D19;
class Class_1_68CF822132788D19_1;
class Class_1_8C3AC9786B6764EF;
class Class_2_458E5D5F1916A1AE;

#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9641460)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS19_0__STARTFORCLOUDUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x9641470)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS19_0__STARTFORCLOUDUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x9641560)

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass19_0_TypeDefinitionIndex = 54898;

class Class_1_280047DF9F661B14___c__DisplayClass19_0 : public ::System::Object
{
public:
	::Class_2_458E5D5F1916A1AE* luaData; // 0x10
	::Class_1_280047DF9F661B14* __4__this; // 0x18
	::Class_1_68CF822132788D19* archiveDesign; // 0x20
	::Class_1_8C3AC9786B6764EF* queue; // 0x28
	::Class_1_68CF822132788D19_1* archiveData; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForCloudUpdate_b__0(::Class_0_16E4307DCC419505_557* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS19_0__STARTFORCLOUDUPDATE_B__0_OFFSET))(this, progress);
	}

	::System::Void _StartForCloudUpdate_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS19_0__STARTFORCLOUDUPDATE_B__1_OFFSET))(this);
	}
};
