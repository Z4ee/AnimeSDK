#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

class Class_2_6A3F10CE86B200DD;
class Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0;
namespace RPG::GameCore { class SO_PlayInteractOnPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_003CF77BF1B9FCF6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AEA080)
#define CLASS_3_003CF77BF1B9FCF6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AEA520)
#define CLASS_3_003CF77BF1B9FCF6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12AEA110)
#define CLASS_3_003CF77BF1B9FCF6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12AEA480)
#define CLASS_3_003CF77BF1B9FCF6__CTOR_OFFSET UNITYSDK_OFFSET(0x12AE9FC0)
#define CLASS_3_003CF77BF1B9FCF6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AEA570)

inline static constexpr unsigned int Class_3_003CF77BF1B9FCF6_TypeDefinitionIndex = 48118;

class Class_3_003CF77BF1B9FCF6 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_PlayInteractOnPoint*>
{
public:
	::Class_2_6A3F10CE86B200DD* Field_3_0; // 0x40
	::Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0* Field_3_1; // 0x48
	::System::Boolean Field_3_2; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_PlayInteractOnPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_PlayInteractOnPoint*))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_003CF77BF1B9FCF6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
