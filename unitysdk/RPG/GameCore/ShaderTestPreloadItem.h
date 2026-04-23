#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHADERTESTPRELOADITEM_METHOD_2_D5C2CD8D68DA94A8_OFFSET UNITYSDK_OFFSET(0x18E4F930)
#define RPG_GAMECORE_SHADERTESTPRELOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4FA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShaderTestPreloadItem_TypeDefinitionIndex = 15472;

	class ShaderTestPreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* Materials; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERTESTPRELOADITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D5C2CD8D68DA94A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShaderTestPreloadItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShaderTestPreloadItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERTESTPRELOADITEM_METHOD_2_D5C2CD8D68DA94A8_OFFSET))(a1, a2);
		}
	};
}
