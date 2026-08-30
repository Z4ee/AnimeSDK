#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_2_DF611E483A87B822;
namespace RPG::Client { class LuaUIController; }
namespace System { class Exception; }

#define CLASS_2_DF611E483A87B822___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8B6A70)
#define CLASS_2_DF611E483A87B822___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1A8B6FE0)
#define CLASS_2_DF611E483A87B822___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1A8B71A0)

inline static constexpr unsigned int Class_2_DF611E483A87B822___c__DisplayClass2_0_TypeDefinitionIndex = 58626;

class Class_2_DF611E483A87B822___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_2_DF611E483A87B822* __4__this; // 0x10
	::System::Guid transID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0(::RPG::Client::LuaUIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__1_OFFSET))(this, a1);
	}
};
