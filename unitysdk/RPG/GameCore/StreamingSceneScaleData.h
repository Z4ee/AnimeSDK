#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_STREAMINGSCENESCALEDATA_METHOD_2_182D027A9B96A9FD_OFFSET UNITYSDK_OFFSET(0x1CB026D0)
#define RPG_GAMECORE_STREAMINGSCENESCALEDATA_METHOD_2_5CCF310502397610_OFFSET UNITYSDK_OFFSET(0x1CB02630)
#define RPG_GAMECORE_STREAMINGSCENESCALEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB026C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingSceneScaleData_TypeDefinitionIndex = 18918;

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

		static ::System::Void Method_2_182D027A9B96A9FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StreamingSceneScaleData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StreamingSceneScaleData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGSCENESCALEDATA_METHOD_2_182D027A9B96A9FD_OFFSET))(a1, a2);
		}
	};
}
