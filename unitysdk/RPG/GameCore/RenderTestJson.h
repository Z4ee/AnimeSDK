#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RenderTestItemJson; }
namespace System { class String; }

#define RPG_GAMECORE_RENDERTESTJSON_METHOD_2_76ED19F6F4764241_OFFSET UNITYSDK_OFFSET(0x1DB8FD90)
#define RPG_GAMECORE_RENDERTESTJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8FF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RenderTestJson_TypeDefinitionIndex = 24120;

	class RenderTestJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::RenderTestItemJson* Stage; // 0x18
		::RPG::MVector3 CameraPosition; // 0x20
		::RPG::MVector3 CameraForward; // 0x2C
		::Il2CppArray<::RPG::GameCore::RenderTestItemJson*>* Character; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTJSON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_76ED19F6F4764241(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RenderTestJson*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RenderTestJson*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTJSON_METHOD_2_76ED19F6F4764241_OFFSET))(a1, a2);
		}
	};
}
