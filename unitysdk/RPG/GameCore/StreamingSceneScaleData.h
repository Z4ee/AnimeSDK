#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STREAMINGSCENESCALEDATA_METHOD_2_5CCF310502397610_OFFSET UNITYSDK_OFFSET(0x17782880)
#define RPG_GAMECORE_STREAMINGSCENESCALEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17782910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingSceneScaleData_TypeDefinitionIndex = 17552;

	class StreamingSceneScaleData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENESCALEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5CCF310502397610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingSceneScaleData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingSceneScaleData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENESCALEDATA_METHOD_2_5CCF310502397610_OFFSET))(a1, a2);
		}
	};
}
