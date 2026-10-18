#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RENDERTESTITEMJSON_METHOD_2_EA070B37BF3506D5_OFFSET UNITYSDK_OFFSET(0x1D959F90)
#define RPG_GAMECORE_RENDERTESTITEMJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95A150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RenderTestItemJson_TypeDefinitionIndex = 24398;

	class RenderTestItemJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::RPG::MVector3 Position; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTITEMJSON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EA070B37BF3506D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RenderTestItemJson*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RenderTestItemJson*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTITEMJSON_METHOD_2_EA070B37BF3506D5_OFFSET))(a1, a2);
		}
	};
}
