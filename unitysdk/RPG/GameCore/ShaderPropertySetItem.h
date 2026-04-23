#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ShaderPropertySetType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicVector4; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHADERPROPERTYSETITEM_METHOD_2_A6F6CFB03A0047CF_OFFSET UNITYSDK_OFFSET(0x18E4F520)
#define RPG_GAMECORE_SHADERPROPERTYSETITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4F730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShaderPropertySetItem_TypeDefinitionIndex = 22843;

	class ShaderPropertySetItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::ShaderPropertySetType Type; // 0x18
		::RPG::GameCore::DynamicFloat* Float; // 0x20
		::RPG::GameCore::DynamicVector4* Vector4; // 0x28
		::RPG::GameCore::TargetEvaluator* TargetParam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYSETITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A6F6CFB03A0047CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShaderPropertySetItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShaderPropertySetItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYSETITEM_METHOD_2_A6F6CFB03A0047CF_OFFSET))(a1, a2);
		}
	};
}
