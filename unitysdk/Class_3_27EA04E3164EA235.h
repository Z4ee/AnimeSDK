#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_43B182500A10FC7B;
namespace RPG::GameCore { class ElationActionBarAbilityChange; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_3_27EA04E3164EA235_METHOD_3_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1250DB20)
#define CLASS_3_27EA04E3164EA235_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1250DA70)
#define CLASS_3_27EA04E3164EA235_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1250DA30)
#define CLASS_3_27EA04E3164EA235_METHOD_3_CCC856F34F7B0DB2_OFFSET UNITYSDK_OFFSET(0x1250DAB0)
#define CLASS_3_27EA04E3164EA235_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1250D990)
#define CLASS_3_27EA04E3164EA235__CTOR_OFFSET UNITYSDK_OFFSET(0x1250D960)

inline static constexpr unsigned int Class_3_27EA04E3164EA235_TypeDefinitionIndex = 50739;

class Class_3_27EA04E3164EA235 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ElationActionBarAbilityChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElationActionBarAbilityChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElationActionBarAbilityChange*))((::PBYTE)hIl2Cpp + CLASS_3_27EA04E3164EA235__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EA04E3164EA235_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EA04E3164EA235_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EA04E3164EA235_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedGameMode* Method_3_CCC856F34F7B0DB2()
	{
		return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EA04E3164EA235_METHOD_3_CCC856F34F7B0DB2_OFFSET))(this);
	}

	::Class_1_43B182500A10FC7B* Method_3_AECF8BEC293ED42A()
	{
		return ((::Class_1_43B182500A10FC7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27EA04E3164EA235_METHOD_3_AECF8BEC293ED42A_OFFSET))(this);
	}
};
