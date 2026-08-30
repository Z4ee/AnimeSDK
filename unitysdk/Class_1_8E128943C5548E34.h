#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_8E128943C5548E34_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0xBB7FA10)
#define CLASS_1_8E128943C5548E34_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBB7F660)
#define CLASS_1_8E128943C5548E34_METHOD_1_3BF9B67F74EEB9FA_OFFSET UNITYSDK_OFFSET(0xBB7F720)
#define CLASS_1_8E128943C5548E34_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xBB7F8A0)
#define CLASS_1_8E128943C5548E34_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xBB7F6E0)
#define CLASS_1_8E128943C5548E34_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBB7F6A0)
#define CLASS_1_8E128943C5548E34__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7F650)

inline static constexpr unsigned int Class_1_8E128943C5548E34_TypeDefinitionIndex = 60579;

class Class_1_8E128943C5548E34 : public ::System::Object
{
public:
	::RPG::GameCore::TransitionLoadingType NHIBKAHAPMB; // 0x10

	::System::Void _ctor(::RPG::GameCore::TransitionLoadingType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + CLASS_1_8E128943C5548E34__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E128943C5548E34_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E128943C5548E34_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E128943C5548E34_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_3BF9B67F74EEB9FA(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8E128943C5548E34_METHOD_1_3BF9B67F74EEB9FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E128943C5548E34_METHOD_1_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8E128943C5548E34_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}
};
