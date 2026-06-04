#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30B223380C9818C3___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA46F780)
#define CLASS_1_30B223380C9818C3___C__DISPLAYCLASS1_0___GETCANTRACKMISSION_B__0_OFFSET UNITYSDK_OFFSET(0xA46F870)

inline static constexpr unsigned int Class_1_30B223380C9818C3___c__DisplayClass1_0_TypeDefinitionIndex = 61870;

class Class_1_30B223380C9818C3___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* canTrackingChapter; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetCanTrackMission_b__0(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3___C__DISPLAYCLASS1_0___GETCANTRACKMISSION_B__0_OFFSET))(this, a1);
	}
};
