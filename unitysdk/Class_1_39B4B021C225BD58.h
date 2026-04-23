#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_39B4B021C225BD58_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x123C3D40)
#define CLASS_1_39B4B021C225BD58_METHOD_1_AE55BB2FF3F5AA3D_OFFSET UNITYSDK_OFFSET(0x123C3E00)
#define CLASS_1_39B4B021C225BD58_METHOD_1_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0x123C40B0)
#define CLASS_1_39B4B021C225BD58_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x123C3DC0)
#define CLASS_1_39B4B021C225BD58_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123C3D80)
#define CLASS_1_39B4B021C225BD58_METHOD_1_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x123C3F60)
#define CLASS_1_39B4B021C225BD58__CTOR_OFFSET UNITYSDK_OFFSET(0x123C3D30)

inline static constexpr unsigned int Class_1_39B4B021C225BD58_TypeDefinitionIndex = 55764;

class Class_1_39B4B021C225BD58 : public ::System::Object
{
public:
	::RPG::GameCore::TransitionLoadingType Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::TransitionLoadingType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AE55BB2FF3F5AA3D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_AE55BB2FF3F5AA3D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_39B4B021C225BD58_METHOD_1_BF3A97FF800F0C24_OFFSET))(this, a1);
	}
};
