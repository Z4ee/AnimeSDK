#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_478;
class Class_0_16E4307DCC419505_480;
class Class_1_280047DF9F661B14;
class Class_2_4F354829EBADAFFE;
class Class_2_7419679A7698613D;

#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8A4CC50)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS15_0___MAKEPREDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x8A5CAD0)

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass15_0_TypeDefinitionIndex = 48150;

class Class_1_280047DF9F661B14___c__DisplayClass15_0 : public ::System::Object
{
public:
	::Class_2_4F354829EBADAFFE* audioHPatch; // 0x10
	::Class_2_7419679A7698613D* blockHPatch; // 0x18
	::Class_1_280047DF9F661B14* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakePreDownload_b__0(::Class_0_16E4307DCC419505_478* patch, ::Class_0_16E4307DCC419505_480* data, ::System::Object* obj, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_478*, ::Class_0_16E4307DCC419505_480*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS15_0___MAKEPREDOWNLOAD_B__0_OFFSET))(this, patch, data, obj, code);
	}
};
