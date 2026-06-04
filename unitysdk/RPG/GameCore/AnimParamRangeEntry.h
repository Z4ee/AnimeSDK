#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ANIMPARAMRANGEENTRY_METHOD_2_910B3835D294ADF5_OFFSET UNITYSDK_OFFSET(0x19479140)
#define RPG_GAMECORE_ANIMPARAMRANGEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19479290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimParamRangeEntry_TypeDefinitionIndex = 15476;

	class AnimParamRangeEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ParameterKey; // 0x10
		::System::Single MinValue; // 0x18
		::System::Single MaxValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMPARAMRANGEENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_910B3835D294ADF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimParamRangeEntry*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimParamRangeEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMPARAMRANGEENTRY_METHOD_2_910B3835D294ADF5_OFFSET))(a1, a2);
		}
	};
}
