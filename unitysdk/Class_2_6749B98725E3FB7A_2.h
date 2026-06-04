#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class AdventureModifierInstance; }

#define CLASS_2_6749B98725E3FB7A_2_CLEAR_OFFSET UNITYSDK_OFFSET(0xAA5D9F0)
#define CLASS_2_6749B98725E3FB7A_2_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xAA5DB00)
#define CLASS_2_6749B98725E3FB7A_2_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xAA5DA60)
#define CLASS_2_6749B98725E3FB7A_2_METHOD_2_41DA327E4FD098F3_OFFSET UNITYSDK_OFFSET(0xAA5D9A0)
#define CLASS_2_6749B98725E3FB7A_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAA5DB50)
#define CLASS_2_6749B98725E3FB7A_2___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xAA5DB60)

inline static constexpr unsigned int Class_2_6749B98725E3FB7A_2_TypeDefinitionIndex = 52869;

class Class_2_6749B98725E3FB7A_2 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::AdventureModifierInstance* Field_2_0; // 0x18

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

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_2___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
