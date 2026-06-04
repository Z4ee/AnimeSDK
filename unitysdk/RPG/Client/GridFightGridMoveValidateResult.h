#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMoveValidateResultType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGRIDMOVEVALIDATERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xBB900F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridMoveValidateResult_TypeDefinitionIndex = 60640;

	class GridFightGridMoveValidateResult : public ::System::Object
	{
	public:
		::System::String* Reason; // 0x10
		::System::Boolean IsSuccess; // 0x18
		::RPG::Client::GridFightGridMoveValidateResultType Type; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMOVEVALIDATERESULT__CTOR_OFFSET))(this);
		}
	};
}
