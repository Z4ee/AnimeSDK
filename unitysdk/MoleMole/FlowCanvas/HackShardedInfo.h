#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_HACKSHARDEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1923A6C0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackShardedInfo_TypeDefinitionIndex = 41720;

	class HackShardedInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* infoMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKSHARDEDINFO__CTOR_OFFSET))(this);
		}
	};
}
