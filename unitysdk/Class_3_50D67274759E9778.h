#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_8DCA66D9510C4409;
namespace RPG::GameCore { class ElationActivityActionBarAbilityChange; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_3_50D67274759E9778_METHOD_3_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x114BC180)
#define CLASS_3_50D67274759E9778_METHOD_3_77139113B356AAAD_OFFSET UNITYSDK_OFFSET(0x114BC270)
#define CLASS_3_50D67274759E9778_METHOD_3_CCC856F34F7B0DB2_OFFSET UNITYSDK_OFFSET(0x114BC360)
#define CLASS_3_50D67274759E9778_METHOD_3_F0CA034D8F146D0A_OFFSET UNITYSDK_OFFSET(0x114BBFC0)
#define CLASS_3_50D67274759E9778_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x114BBF60)
#define CLASS_3_50D67274759E9778__CTOR_OFFSET UNITYSDK_OFFSET(0x114BBF30)

inline static constexpr unsigned int Class_3_50D67274759E9778_TypeDefinitionIndex = 44041;

class Class_3_50D67274759E9778 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ElationActivityActionBarAbilityChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElationActivityActionBarAbilityChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElationActivityActionBarAbilityChange*))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_F0CA034D8F146D0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778_METHOD_3_F0CA034D8F146D0A_OFFSET))(this);
	}

	::System::Void Method_3_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778_METHOD_3_6D93101E4CE10A96_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedGameMode* Method_3_CCC856F34F7B0DB2()
	{
		return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778_METHOD_3_CCC856F34F7B0DB2_OFFSET))(this);
	}

	::Class_2_8DCA66D9510C4409* Method_3_77139113B356AAAD()
	{
		return ((::Class_2_8DCA66D9510C4409*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50D67274759E9778_METHOD_3_77139113B356AAAD_OFFSET))(this);
	}
};
