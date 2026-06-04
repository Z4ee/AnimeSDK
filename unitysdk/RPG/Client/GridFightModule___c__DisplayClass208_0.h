#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
namespace RPG::Client { class GridFightModule; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS208_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB3300)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS208_0___TRYGETCURDATABYCDN_B__0_OFFSET UNITYSDK_OFFSET(0xBBB3310)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS208_0___TRYGETCURDATABYCDN_B__1_OFFSET UNITYSDK_OFFSET(0xBBB3390)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS208_0___TRYGETCURDATABYCDN_B__2_OFFSET UNITYSDK_OFFSET(0xBBB3510)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS208_0___TRYGETCURDATABYCDN_B__3_OFFSET UNITYSDK_OFFSET(0xBBB3470)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass208_0_TypeDefinitionIndex = 60657;

	class GridFightModule___c__DisplayClass208_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightModule* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Action_1<::System::String*>* __9__3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS208_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryGetCurDataByCdn_b__0(::Class_1_296A7AC90F028539* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS208_0___TRYGETCURDATABYCDN_B__0_OFFSET))(this, a1);
		}

		::System::Void __TryGetCurDataByCdn_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS208_0___TRYGETCURDATABYCDN_B__1_OFFSET))(this, a1);
		}

		::System::Void __TryGetCurDataByCdn_b__3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS208_0___TRYGETCURDATABYCDN_B__3_OFFSET))(this, a1);
		}

		::System::Void __TryGetCurDataByCdn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS208_0___TRYGETCURDATABYCDN_B__2_OFFSET))(this);
		}
	};
}
