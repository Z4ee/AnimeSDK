#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_853;
namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }

#define CLASS_1_B23D124B75AC9157_METHOD_1_A5062214852D353D_OFFSET UNITYSDK_OFFSET(0x17EB8830)
#define CLASS_1_B23D124B75AC9157__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB8900)

inline static constexpr unsigned int Class_1_B23D124B75AC9157_TypeDefinitionIndex = 64428;

class Class_1_B23D124B75AC9157 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B23D124B75AC9157__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_853* Method_1_A5062214852D353D(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
	{
		return ((::Class_0_16E4307DCC419505_853*(*)(::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B23D124B75AC9157_METHOD_1_A5062214852D353D_OFFSET))(a1);
	}
};
