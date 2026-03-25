#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_6A3F10CE86B200DD;
class Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0;
namespace RPG::GameCore { class ST_Main_PlayInteract; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DBD4C42E6BB91041_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C0D4F0)
#define CLASS_3_DBD4C42E6BB91041_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8C0D8E0)
#define CLASS_3_DBD4C42E6BB91041_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C0D580)
#define CLASS_3_DBD4C42E6BB91041_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8C0D840)
#define CLASS_3_DBD4C42E6BB91041__CTOR_OFFSET UNITYSDK_OFFSET(0x8C0D490)
#define CLASS_3_DBD4C42E6BB91041___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C0D930)

inline static constexpr unsigned int Class_3_DBD4C42E6BB91041_TypeDefinitionIndex = 42243;

class Class_3_DBD4C42E6BB91041 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_PlayInteract*>
{
public:
	::Class_2_6A3F10CE86B200DD* Field_3_0; // 0x28
	::Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0* Field_3_1; // 0x30
	::System::Boolean Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_PlayInteract* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_PlayInteract*))((::PBYTE)hIl2Cpp + CLASS_3_DBD4C42E6BB91041__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBD4C42E6BB91041_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBD4C42E6BB91041_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBD4C42E6BB91041_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBD4C42E6BB91041_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBD4C42E6BB91041___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
