#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class SwitchAlleyShip; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_45D2D2DDAF3C910F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88C7570)
#define CLASS_2_45D2D2DDAF3C910F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x88C7680)
#define CLASS_2_45D2D2DDAF3C910F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x88C76D0)
#define CLASS_2_45D2D2DDAF3C910F_TICK_OFFSET UNITYSDK_OFFSET(0x88C7620)
#define CLASS_2_45D2D2DDAF3C910F__CTOR_OFFSET UNITYSDK_OFFSET(0x88C7400)

inline static constexpr unsigned int Class_2_45D2D2DDAF3C910F_TypeDefinitionIndex = 47419;

class Class_2_45D2D2DDAF3C910F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchAlleyShip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchAlleyShip*))((::PBYTE)hIl2Cpp + CLASS_2_45D2D2DDAF3C910F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45D2D2DDAF3C910F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_45D2D2DDAF3C910F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45D2D2DDAF3C910F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45D2D2DDAF3C910F_ONTASKRESET_OFFSET))(this);
	}
};
