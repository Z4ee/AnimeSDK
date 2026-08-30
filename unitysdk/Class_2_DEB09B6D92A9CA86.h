#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

class Class_0_16E4307DCC419505_725;
class Class_1_4CFEF021C34E7902;
class Class_1_93CCFC46DF4C9BD2;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Object; }

#define CLASS_2_DEB09B6D92A9CA86_METHOD_2_2F3709D27A34AA00_OFFSET UNITYSDK_OFFSET(0xBDAE8E0)
#define CLASS_2_DEB09B6D92A9CA86_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0xBDAEAE0)
#define CLASS_2_DEB09B6D92A9CA86_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBDAEB40)
#define CLASS_2_DEB09B6D92A9CA86__CTOR_OFFSET UNITYSDK_OFFSET(0xBDAE750)

inline static constexpr unsigned int Class_2_DEB09B6D92A9CA86_TypeDefinitionIndex = 75665;

class Class_2_DEB09B6D92A9CA86 : public ::RPG::Client::BaseGameFlowContext
{
public:
	::Class_1_4CFEF021C34E7902* HEMMHLHDGBO; // 0x20
	::Class_1_93CCFC46DF4C9BD2* KHKJHLDABDK; // 0x28

	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_DEB09B6D92A9CA86__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_DEB09B6D92A9CA86* Method_2_2F3709D27A34AA00(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_DEB09B6D92A9CA86*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_DEB09B6D92A9CA86_METHOD_2_2F3709D27A34AA00_OFFSET))(a1);
	}

	::System::Void ReceiveEvent(::Class_0_16E4307DCC419505_725* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_725*))((::PBYTE)hIl2Cpp + CLASS_2_DEB09B6D92A9CA86_RECEIVEEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DEB09B6D92A9CA86_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}
};
