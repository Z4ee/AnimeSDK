#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1050BB558D637BF;
namespace RPG::Client { class GridFightGameRef; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS108_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE90C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS108_0__REQINTERECTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1ABEA060)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass108_0_TypeDefinitionIndex = 61781;

	class GridFightGameRef___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRef* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS108_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReqInterectData_b__0(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS108_0__REQINTERECTDATA_B__0_OFFSET))(this, a1);
		}
	};
}
