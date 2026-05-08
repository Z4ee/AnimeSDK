#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4B8C8F1EAD31AFFF;

#define MOLEMOLE_DEVBUDDYINITDATA_CREATEBUDDYINITDATA_OFFSET UNITYSDK_OFFSET(0x153E18B0)
#define MOLEMOLE_DEVBUDDYINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x153E1960)

namespace MoleMole
{
	inline static constexpr unsigned int DevBuddyInitData_TypeDefinitionIndex = 61936;

	class DevBuddyInitData : public ::System::Object
	{
	public:
		::System::Int32 Star; // 0x10
		::System::Int32 Rank; // 0x14
		::System::Int32 Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVBUDDYINITDATA__CTOR_OFFSET))(this);
		}

		::Class_1_4B8C8F1EAD31AFFF* CreateBuddyInitData()
		{
			return ((::Class_1_4B8C8F1EAD31AFFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVBUDDYINITDATA_CREATEBUDDYINITDATA_OFFSET))(this);
		}
	};
}
