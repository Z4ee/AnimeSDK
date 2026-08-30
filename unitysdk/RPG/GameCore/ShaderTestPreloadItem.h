#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHADERTESTPRELOADITEM_METHOD_2_FEF873999D24BE9D_OFFSET UNITYSDK_OFFSET(0x1D51A430)
#define RPG_GAMECORE_SHADERTESTPRELOADITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51A520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShaderTestPreloadItem_TypeDefinitionIndex = 16182;

	class ShaderTestPreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* Materials; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERTESTPRELOADITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FEF873999D24BE9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShaderTestPreloadItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShaderTestPreloadItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERTESTPRELOADITEM_METHOD_2_FEF873999D24BE9D_OFFSET))(a1, a2);
		}
	};
}
