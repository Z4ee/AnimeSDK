#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class AdventureModifierInstance; }

#define CLASS_2_6749B98725E3FB7A_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F49270)
#define CLASS_2_6749B98725E3FB7A_2_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x17F49380)
#define CLASS_2_6749B98725E3FB7A_2_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x17F492E0)
#define CLASS_2_6749B98725E3FB7A_2_METHOD_2_41DA327E4FD098F3_OFFSET UNITYSDK_OFFSET(0x17F49220)
#define CLASS_2_6749B98725E3FB7A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17F493D0)

inline static constexpr unsigned int Class_2_6749B98725E3FB7A_2_TypeDefinitionIndex = 56802;

class Class_2_6749B98725E3FB7A_2 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::AdventureModifierInstance* EAEJGPLLGMI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_2__CTOR_OFFSET))(this);
	}

	::Class_2_6749B98725E3FB7A_2* Method_2_41DA327E4FD098F3(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::Class_2_6749B98725E3FB7A_2*(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_2_METHOD_2_41DA327E4FD098F3_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_2_CLEAR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_2_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_2_GETEVENTTYPE_OFFSET))(this);
	}
};
