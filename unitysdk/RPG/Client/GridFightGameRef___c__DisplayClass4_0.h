#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1BB370)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS4_0__SENDGETGAMEREFSTATICDATAAPIHTTPREQ_B__0_OFFSET UNITYSDK_OFFSET(0xD1C5670)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass4_0_TypeDefinitionIndex = 64770;

	class GridFightGameRef___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendGetGameRefStaticDataApiHttpReq_b__0(::Class_1_296A7AC90F028539* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS4_0__SENDGETGAMEREFSTATICDATAAPIHTTPREQ_B__0_OFFSET))(this, a1);
		}
	};
}
