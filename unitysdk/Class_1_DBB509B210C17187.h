#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_DBB509B210C17187_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9FAC60)
#define CLASS_1_DBB509B210C17187_METHOD_1_0EB2ACFBD5A30D96_OFFSET UNITYSDK_OFFSET(0x1A9FACD0)
#define CLASS_1_DBB509B210C17187_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A9FAEA0)
#define CLASS_1_DBB509B210C17187_METHOD_1_A199A68F8FE373AF_OFFSET UNITYSDK_OFFSET(0x1A9FAD50)
#define CLASS_1_DBB509B210C17187_METHOD_1_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x1A9FAE20)
#define CLASS_1_DBB509B210C17187_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A9FADE0)
#define CLASS_1_DBB509B210C17187_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A9FADA0)
#define CLASS_1_DBB509B210C17187__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9FAEC0)

inline static constexpr unsigned int Class_1_DBB509B210C17187_TypeDefinitionIndex = 40472;

class Class_1_DBB509B210C17187 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameLevelVariable* IGHAHBNLIJA; // 0x10
	::RPG::PoolList_1<::System::Action*>* PENAEDMJLPO; // 0x18
	::System::Action_1<::System::String*>* LJBPMCGDANF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBB509B210C17187__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBB509B210C17187_CLEAR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_0EB2ACFBD5A30D96()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBB509B210C17187_METHOD_1_0EB2ACFBD5A30D96_OFFSET))(this);
	}

	::System::Void Method_1_A199A68F8FE373AF(::RPG::GameCore::LittleGameLevelVariable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + CLASS_1_DBB509B210C17187_METHOD_1_A199A68F8FE373AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBB509B210C17187_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBB509B210C17187_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DBB509B210C17187_METHOD_1_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBB509B210C17187_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
