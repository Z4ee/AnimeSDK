#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS349_0__CHECKCUSTOMTEXTHASFORBIDDENWORD_B__0_OFFSET UNITYSDK_OFFSET(0xD1B3850)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS349_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B16D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass349_0_TypeDefinitionIndex = 64874;

	class GridFightModule___c__DisplayClass349_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* onFinish; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS349_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckCustomTextHasForbiddenWord_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS349_0__CHECKCUSTOMTEXTHASFORBIDDENWORD_B__0_OFFSET))(this, a1);
		}
	};
}
