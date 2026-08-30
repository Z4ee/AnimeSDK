#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TakenMazePuzzleChallenge; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E6B84C379AA50A02_DISPOSE_OFFSET UNITYSDK_OFFSET(0x122258F0)
#define CLASS_2_E6B84C379AA50A02_METHOD_2_39845204DD04FC33_1_OFFSET UNITYSDK_OFFSET(0x12225FC0)
#define CLASS_2_E6B84C379AA50A02_METHOD_2_39845204DD04FC33_OFFSET UNITYSDK_OFFSET(0x12225E80)
#define CLASS_2_E6B84C379AA50A02_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x12226090)
#define CLASS_2_E6B84C379AA50A02_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x12225F00)
#define CLASS_2_E6B84C379AA50A02_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x12226040)
#define CLASS_2_E6B84C379AA50A02_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12225A50)
#define CLASS_2_E6B84C379AA50A02_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12225DD0)
#define CLASS_2_E6B84C379AA50A02_TICK_OFFSET UNITYSDK_OFFSET(0x12225E20)
#define CLASS_2_E6B84C379AA50A02__CTOR_OFFSET UNITYSDK_OFFSET(0x122257D0)

inline static constexpr unsigned int Class_2_E6B84C379AA50A02_TypeDefinitionIndex = 53585;

class Class_2_E6B84C379AA50A02 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TakenMazePuzzleChallenge* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* HBLGHOCOHAL; // 0x28
	::Class_3_07C3C4D2990C49EE* FGFFJBEKHBO; // 0x30
	::Class_3_07C3C4D2990C49EE* BKCCFPHPIHM; // 0x38
	::Class_3_07C3C4D2990C49EE* BHHFAIMDPCJ; // 0x40
	::RPG::GameCore::PropComponent* GBLNDEKFNNJ; // 0x48
	::Class_3_07C3C4D2990C49EE* LNMOCNDILJN; // 0x50
	::System::UInt32 DNCPEJNPCBC; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TakenMazePuzzleChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TakenMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_39845204DD04FC33(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_METHOD_2_39845204DD04FC33_OFFSET))(this, a1);
	}

	::System::Void Method_2_39845204DD04FC33_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_METHOD_2_39845204DD04FC33_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}
};
