#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS99_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C5560)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS99_0__PENDINGREADUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xA4C5570)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass99_0_TypeDefinitionIndex = 59574;

	class GridFightGameRef___c__DisplayClass99_0 : public ::System::Object
	{
	public:
		::System::String* id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS99_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PendingReadUpdate_b__0(::Il2CppArray<::System::String*>* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS99_0__PENDINGREADUPDATE_B__0_OFFSET))(this, x);
		}
	};
}
