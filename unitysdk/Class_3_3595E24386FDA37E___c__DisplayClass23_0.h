#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityElationAvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3595E24386FDA37E___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1294ABA0)
#define CLASS_3_3595E24386FDA37E___C__DISPLAYCLASS23_0___REFRESHLOADERVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1294B850)

inline static constexpr unsigned int Class_3_3595E24386FDA37E___c__DisplayClass23_0_TypeDefinitionIndex = 65779;

class Class_3_3595E24386FDA37E___c__DisplayClass23_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* liveAvatarIDList; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3595E24386FDA37E___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __RefreshLoaderView_b__0(::RPG::Client::ActivityElationAvatarData* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityElationAvatarData*))((::PBYTE)hIl2Cpp + CLASS_3_3595E24386FDA37E___C__DISPLAYCLASS23_0___REFRESHLOADERVIEW_B__0_OFFSET))(this, item);
	}
};
