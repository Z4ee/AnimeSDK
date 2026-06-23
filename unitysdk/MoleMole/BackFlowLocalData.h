#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BACKFLOWLOCALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1358A170)

namespace MoleMole
{
	inline static constexpr unsigned int BackFlowLocalData_TypeDefinitionIndex = 62420;

	class BackFlowLocalData : public ::System::Object
	{
	public:
		::System::UInt32 backFlowActivityID; // 0x10
		::System::Int32 backFlowTimes; // 0x14
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* newRedDotDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BACKFLOWLOCALDATA__CTOR_OFFSET))(this);
		}
	};
}
