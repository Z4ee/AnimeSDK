#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

class Class_2_F400FB9D2D9DA921;
class Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426;
namespace RPG::GameCore { class SO_PlayInteractOnPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1BD770B7DF70AB1C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BD24D0)
#define CLASS_3_1BD770B7DF70AB1C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18BD2980)
#define CLASS_3_1BD770B7DF70AB1C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BD2560)
#define CLASS_3_1BD770B7DF70AB1C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18BD28E0)
#define CLASS_3_1BD770B7DF70AB1C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD2450)

inline static constexpr unsigned int Class_3_1BD770B7DF70AB1C_TypeDefinitionIndex = 52409;

class Class_3_1BD770B7DF70AB1C : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_PlayInteractOnPoint*>
{
public:
	::Class_2_F400FB9D2D9DA921* CPIIOIPAAKK; // 0x40
	::Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426* IAHKANFGGDM; // 0x48
	::System::Boolean IDENJCNNPLA; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_PlayInteractOnPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_PlayInteractOnPoint*))((::PBYTE)hIl2Cpp + CLASS_3_1BD770B7DF70AB1C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BD770B7DF70AB1C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BD770B7DF70AB1C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BD770B7DF70AB1C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BD770B7DF70AB1C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
