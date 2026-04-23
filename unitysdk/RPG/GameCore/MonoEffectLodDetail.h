#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOEFFECTLODDETAIL_METHOD_2_5EF287C519F3996A_OFFSET UNITYSDK_OFFSET(0x18B42B40)
#define RPG_GAMECORE_MONOEFFECTLODDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x18B42C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonoEffectLodDetail_TypeDefinitionIndex = 18098;

	class MonoEffectLodDetail : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 BoundSize; // 0x10
		::System::Single Lifetime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOEFFECTLODDETAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5EF287C519F3996A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonoEffectLodDetail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonoEffectLodDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOEFFECTLODDETAIL_METHOD_2_5EF287C519F3996A_OFFSET))(a1, a2);
		}
	};
}
