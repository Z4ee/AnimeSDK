#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class DronesPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_ACF6D468822B8D7F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C35EB0)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_77E4508564C6D7D6_OFFSET UNITYSDK_OFFSET(0x14C36720)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_9E5E9518D01FCB25_OFFSET UNITYSDK_OFFSET(0x14C36920)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_DD724269AA49742B_1_OFFSET UNITYSDK_OFFSET(0x14C36430)
#define CLASS_2_ACF6D468822B8D7F_METHOD_2_DD724269AA49742B_OFFSET UNITYSDK_OFFSET(0x14C361E0)
#define CLASS_2_ACF6D468822B8D7F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14C35AF0)
#define CLASS_2_ACF6D468822B8D7F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14C35D00)
#define CLASS_2_ACF6D468822B8D7F_TICK_OFFSET UNITYSDK_OFFSET(0x14C36C20)
#define CLASS_2_ACF6D468822B8D7F__CTOR_OFFSET UNITYSDK_OFFSET(0x14C358B0)

inline static constexpr unsigned int Class_2_ACF6D468822B8D7F_TypeDefinitionIndex = 58243;

class Class_2_ACF6D468822B8D7F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* BCAHIEKECBN; // 0x18
	::Class_3_07C3C4D2990C49EE* MGFEGFCANBP; // 0x20
	::Class_3_07C3C4D2990C49EE* NDAOBOMHGDA; // 0x28
	::Class_3_07C3C4D2990C49EE* BKCCIMBLMHN; // 0x30
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
	::RPG::GameCore::DronesPuzzleEventListener* IGHAHBNLIJA; // 0x40
	::Class_3_07C3C4D2990C49EE* NLGPHOKCGAC; // 0x48
	::System::Boolean JGLBOEPDEOB; // 0x50
	::System::Boolean APMJOKCHJID; // 0x51
	::System::Boolean IPLEKIHBLHE; // 0x52
	::System::Boolean NPNCKMIKGAK; // 0x53

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DronesPuzzleEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DronesPuzzleEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DD724269AA49742B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_DD724269AA49742B_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD724269AA49742B_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_DD724269AA49742B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_77E4508564C6D7D6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_77E4508564C6D7D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E5E9518D01FCB25(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_METHOD_2_9E5E9518D01FCB25_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D468822B8D7F_TICK_OFFSET))(this, a1);
	}
};
