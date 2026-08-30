#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RENDERTESTITEMJSON_METHOD_2_57F8D7C286261357_OFFSET UNITYSDK_OFFSET(0x1DB8FC40)
#define RPG_GAMECORE_RENDERTESTITEMJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8FD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RenderTestItemJson_TypeDefinitionIndex = 24119;

	class RenderTestItemJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::RPG::MVector3 Position; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTITEMJSON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_57F8D7C286261357(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RenderTestItemJson*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RenderTestItemJson*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTITEMJSON_METHOD_2_57F8D7C286261357_OFFSET))(a1, a2);
		}
	};
}
