#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_331;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_8C728FF5E0D9FC84___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14001020)
#define CLASS_1_8C728FF5E0D9FC84___C__DISPLAYCLASS39_0__SUBMITSTACK_B__0_OFFSET UNITYSDK_OFFSET(0x140021D0)

inline static constexpr unsigned int Class_1_8C728FF5E0D9FC84___c__DisplayClass39_0_TypeDefinitionIndex = 46626;

class Class_1_8C728FF5E0D9FC84___c__DisplayClass39_0 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_331*>* _asyncHandles; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
	}

	::System::Void _SubmitStack_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C728FF5E0D9FC84___C__DISPLAYCLASS39_0__SUBMITSTACK_B__0_OFFSET))(this, a1);
	}
};
