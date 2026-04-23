#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class AdventureModifierInstance; }

#define CLASS_2_6749B98725E3FB7A_1_CLEAR_OFFSET UNITYSDK_OFFSET(0xD9C5100)
#define CLASS_2_6749B98725E3FB7A_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xD9C5210)
#define CLASS_2_6749B98725E3FB7A_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD9C5170)
#define CLASS_2_6749B98725E3FB7A_1_METHOD_2_41DA327E4FD098F3_OFFSET UNITYSDK_OFFSET(0xD9C50B0)
#define CLASS_2_6749B98725E3FB7A_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD9C5260)
#define CLASS_2_6749B98725E3FB7A_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xD9C5270)

inline static constexpr unsigned int Class_2_6749B98725E3FB7A_1_TypeDefinitionIndex = 52171;

class Class_2_6749B98725E3FB7A_1 : public ::Class_1_9988289E7F8AA214
{
public:
	::RPG::GameCore::AdventureModifierInstance* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_1__CTOR_OFFSET))(this);
	}

	::Class_2_6749B98725E3FB7A_1* Method_2_41DA327E4FD098F3(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::Class_2_6749B98725E3FB7A_1*(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_1_METHOD_2_41DA327E4FD098F3_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_1_CLEAR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_1_GETEVENTTYPE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6749B98725E3FB7A_1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
