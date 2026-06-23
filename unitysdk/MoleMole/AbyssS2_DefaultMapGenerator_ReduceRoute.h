#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_REDUCEROUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x13FE7910)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_DefaultMapGenerator_ReduceRoute_TypeDefinitionIndex = 85704;

	class AbyssS2_DefaultMapGenerator_ReduceRoute : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* routes; // 0x10
		::System::Int32 routeIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_REDUCEROUTE__CTOR_OFFSET))(this);
		}
	};
}
