#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class ShowFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2DE9210B5B7767DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179D25B0)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x179D2600)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179D2660)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x179D2C40)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x179D2DC0)
#define CLASS_2_2DE9210B5B7767DF_METHOD_2_BDE0CD92877F4B0D_OFFSET UNITYSDK_OFFSET(0x179D28A0)
#define CLASS_2_2DE9210B5B7767DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179D2710)
#define CLASS_2_2DE9210B5B7767DF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x179D2CF0)
#define CLASS_2_2DE9210B5B7767DF_TICK_OFFSET UNITYSDK_OFFSET(0x179D2D40)
#define CLASS_2_2DE9210B5B7767DF__CTOR_OFFSET UNITYSDK_OFFSET(0x179D25A0)

inline static constexpr unsigned int Class_2_2DE9210B5B7767DF_TypeDefinitionIndex = 53527;

class Class_2_2DE9210B5B7767DF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowFuncBtn* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::NotifyShowFuncBtnParam* MELBABBNCIL; // 0x28
	::System::Boolean DOCIDMKAAGA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFuncBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_2_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::RPG::GameCore::NotifyShowFuncBtnParam* Method_2_BDE0CD92877F4B0D()
	{
		return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DE9210B5B7767DF_METHOD_2_BDE0CD92877F4B0D_OFFSET))(this);
	}
};
