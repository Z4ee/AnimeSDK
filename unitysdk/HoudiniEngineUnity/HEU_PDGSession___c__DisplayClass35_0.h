#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }

#define HOUDINIENGINEUNITY_HEU_PDGSESSION___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2DCE0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION___C__DISPLAYCLASS35_0__GETNONBYPASSEDNETWORKIDS_B__0_OFFSET UNITYSDK_OFFSET(0x17F2DD10)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGSession___c__DisplayClass35_0_TypeDefinitionIndex = 37582;

	class HEU_PDGSession___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::System::Int32>* __9__0; // 0x10
		::Il2CppArray<::System::Int32>* allNetworkNodeIds; // 0x18
		::System::Int32 idx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNonBypassedNetworkIds_b__0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION___C__DISPLAYCLASS35_0__GETNONBYPASSEDNETWORKIDS_B__0_OFFSET))(this, a1);
		}
	};
}
