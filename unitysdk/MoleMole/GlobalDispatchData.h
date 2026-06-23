#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GLOBALDISPATCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x182E3E70)

namespace MoleMole
{
	inline static constexpr unsigned int GlobalDispatchData_TypeDefinitionIndex = 62928;

	class GlobalDispatchData : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::String* force_update_url; // 0x18
		::System::String* msg; // 0x20
		::System::Object* region_list; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALDISPATCHDATA__CTOR_OFFSET))(this);
		}
	};
}
