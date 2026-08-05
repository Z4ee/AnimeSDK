#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineSettingBase_2_TypeDefinitionIndex = 61850;

	template <typename ProfilerDataCls, typename CMDDataCls>
	class CommandLineSettingBase_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<ProfilerDataCls, ProfilerDataCls>* overrideDict; // 0x0
	};
}
