#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDB796240B07BA45;
namespace RPG::Client { class GridFightModule; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS209_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9862220)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS209_0___TRYGETCURDATABYCDN_B__0_OFFSET UNITYSDK_OFFSET(0x9869EF0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS209_0___TRYGETCURDATABYCDN_B__1_OFFSET UNITYSDK_OFFSET(0x9869F70)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS209_0___TRYGETCURDATABYCDN_B__2_OFFSET UNITYSDK_OFFSET(0x986A0E0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS209_0___TRYGETCURDATABYCDN_B__3_OFFSET UNITYSDK_OFFSET(0x986A040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass209_0_TypeDefinitionIndex = 52669;

	class GridFightModule___c__DisplayClass209_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* __9__3; // 0x10
		::System::Action* callback; // 0x18
		::RPG::Client::GridFightModule* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS209_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryGetCurDataByCdn_b__0(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS209_0___TRYGETCURDATABYCDN_B__0_OFFSET))(this, rsp);
		}

		::System::Void __TryGetCurDataByCdn_b__1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS209_0___TRYGETCURDATABYCDN_B__1_OFFSET))(this, ex);
		}

		::System::Void __TryGetCurDataByCdn_b__3(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS209_0___TRYGETCURDATABYCDN_B__3_OFFSET))(this, data);
		}

		::System::Void __TryGetCurDataByCdn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS209_0___TRYGETCURDATABYCDN_B__2_OFFSET))(this);
		}
	};
}
