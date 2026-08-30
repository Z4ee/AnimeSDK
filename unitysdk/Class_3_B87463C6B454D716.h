#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_F400FB9D2D9DA921;
class Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426;
namespace RPG::GameCore { class ST_Main_PlayInteract; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B87463C6B454D716_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF8C710)
#define CLASS_3_B87463C6B454D716_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCF8CB10)
#define CLASS_3_B87463C6B454D716_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF8C7A0)
#define CLASS_3_B87463C6B454D716_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF8CA70)
#define CLASS_3_B87463C6B454D716__CTOR_OFFSET UNITYSDK_OFFSET(0xCF8C650)

inline static constexpr unsigned int Class_3_B87463C6B454D716_TypeDefinitionIndex = 52501;

class Class_3_B87463C6B454D716 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_PlayInteract*>
{
public:
	::Class_2_F400FB9D2D9DA921* CPIIOIPAAKK; // 0x28
	::Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426* IAHKANFGGDM; // 0x30
	::System::Boolean IDENJCNNPLA; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_PlayInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_PlayInteract*))((::PBYTE)hIl2Cpp + CLASS_3_B87463C6B454D716__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B87463C6B454D716_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B87463C6B454D716_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B87463C6B454D716_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B87463C6B454D716_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
