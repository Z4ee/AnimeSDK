#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPhotoGraphResult; }
namespace System { class Object; }

#define CLASS_2_07679197BCAF6F4B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD12E50)
#define CLASS_2_07679197BCAF6F4B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xBD131C0)
#define CLASS_2_07679197BCAF6F4B_METHOD_2_BD72FB836207A117_OFFSET UNITYSDK_OFFSET(0xBD13460)
#define CLASS_2_07679197BCAF6F4B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD132A0)
#define CLASS_2_07679197BCAF6F4B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD13350)
#define CLASS_2_07679197BCAF6F4B_TICK_OFFSET UNITYSDK_OFFSET(0xBD13040)
#define CLASS_2_07679197BCAF6F4B__CTOR_OFFSET UNITYSDK_OFFSET(0xBD12D60)

inline static constexpr unsigned int Class_2_07679197BCAF6F4B_TypeDefinitionIndex = 53740;

class Class_2_07679197BCAF6F4B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* LNMOCNDILJN; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* CHOOMNGLJHI; // 0x28
	::Class_3_07C3C4D2990C49EE* HPJPJBLFDGA; // 0x30
	::RPG::GameCore::WaitPhotoGraphResult* OFKGLJOAMLD; // 0x38
	::System::Boolean MFGHMLJJNIG; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPhotoGraphResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPhotoGraphResult*))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_BD72FB836207A117(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_METHOD_2_BD72FB836207A117_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07679197BCAF6F4B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
