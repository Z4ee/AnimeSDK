#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

class Class_2_F400FB9D2D9DA921;
class Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426;
namespace RPG::GameCore { class SO_PlayInteractOnPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1BD770B7DF70AB1C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E73EF0)
#define CLASS_3_1BD770B7DF70AB1C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16E74390)
#define CLASS_3_1BD770B7DF70AB1C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E73F80)
#define CLASS_3_1BD770B7DF70AB1C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E742F0)
#define CLASS_3_1BD770B7DF70AB1C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E73E70)

inline static constexpr unsigned int Class_3_1BD770B7DF70AB1C_TypeDefinitionIndex = 49749;

class Class_3_1BD770B7DF70AB1C : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_PlayInteractOnPoint*>
{
public:
	::Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426* Field_3_0; // 0x40
	::Class_2_F400FB9D2D9DA921* Field_3_1; // 0x48
	::System::Boolean Field_3_2; // 0x50

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
