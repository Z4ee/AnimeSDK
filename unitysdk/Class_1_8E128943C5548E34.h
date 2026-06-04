#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_8E128943C5548E34_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0xA812BC0)
#define CLASS_1_8E128943C5548E34_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA812850)
#define CLASS_1_8E128943C5548E34_METHOD_1_93C126D556FAD743_OFFSET UNITYSDK_OFFSET(0xA812910)
#define CLASS_1_8E128943C5548E34_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA8128D0)
#define CLASS_1_8E128943C5548E34_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA812890)
#define CLASS_1_8E128943C5548E34_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xA812A70)
#define CLASS_1_8E128943C5548E34__CTOR_OFFSET UNITYSDK_OFFSET(0xA812840)

inline static constexpr unsigned int Class_1_8E128943C5548E34_TypeDefinitionIndex = 56519;

class Class_1_8E128943C5548E34 : public ::System::Object
{
public:
	::RPG::GameCore::TransitionLoadingType Field_1_0; // 0x10

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

	::System::Void Method_1_93C126D556FAD743(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8E128943C5548E34_METHOD_1_93C126D556FAD743_OFFSET))(this, a1);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E128943C5548E34_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8E128943C5548E34_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}
};
