#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class HeliobusSNSQuickPost; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_CCD9932409DC8C95_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164C59B0)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x164C62F0)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x164C63D0)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_891AE2223A8E0EF9_OFFSET UNITYSDK_OFFSET(0x164C6490)
#define CLASS_2_CCD9932409DC8C95_METHOD_2_BFB7535D462E0EB4_OFFSET UNITYSDK_OFFSET(0x164C60B0)
#define CLASS_2_CCD9932409DC8C95_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164C5BB0)
#define CLASS_2_CCD9932409DC8C95_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164C6700)
#define CLASS_2_CCD9932409DC8C95_TICK_OFFSET UNITYSDK_OFFSET(0x164C6750)
#define CLASS_2_CCD9932409DC8C95__CTOR_OFFSET UNITYSDK_OFFSET(0x164C58C0)

inline static constexpr unsigned int Class_2_CCD9932409DC8C95_TypeDefinitionIndex = 53197;

class Class_2_CCD9932409DC8C95 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* AKDEDAOBLEN; // 0x0
	// static const ::System::String* BJPLHPFOEAP; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::HeliobusSNSQuickPost* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::LevelGraphComponent* LIGDIMNGMAA; // 0x28
	::Class_3_07C3C4D2990C49EE* JPEFFCLHJLO; // 0x30
	::Class_3_07C3C4D2990C49EE* DFDEFDBLMJB; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HeliobusSNSQuickPost* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HeliobusSNSQuickPost*))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Boolean Method_2_891AE2223A8E0EF9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_891AE2223A8E0EF9_OFFSET))(this);
	}

	::System::Void Method_2_BFB7535D462E0EB4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_BFB7535D462E0EB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCD9932409DC8C95_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
