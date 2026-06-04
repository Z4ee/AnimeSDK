#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MaterialPropertyType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATERIALPROPERTYCONFIG_METHOD_2_8679A6A675998319_OFFSET UNITYSDK_OFFSET(0x198F7F30)
#define RPG_GAMECORE_MATERIALPROPERTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198F8120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialPropertyConfig_TypeDefinitionIndex = 15687;

	class MaterialPropertyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MaterialPropertyType PropertyType; // 0x10
		::System::String* PropertyName; // 0x18
		::System::Single FloatValue; // 0x20
		::RPG::MVector3 Vector3Value; // 0x24
		::Struct_2_331ACDD60B60D2E3 Vector4Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALPROPERTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8679A6A675998319(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MaterialPropertyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MaterialPropertyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALPROPERTYCONFIG_METHOD_2_8679A6A675998319_OFFSET))(a1, a2);
		}
	};
}
