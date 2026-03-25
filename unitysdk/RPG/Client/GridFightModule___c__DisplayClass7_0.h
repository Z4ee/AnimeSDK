#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightArchiveData; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9856140)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS7_0__ISARCHIVEINDATA_B__0_OFFSET UNITYSDK_OFFSET(0x986A310)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass7_0_TypeDefinitionIndex = 52673;

	class GridFightModule___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 archiveID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsArchiveInData_b__0(::RPG::Client::GridFightArchiveData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightArchiveData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS7_0__ISARCHIVEINDATA_B__0_OFFSET))(this, x);
		}
	};
}
