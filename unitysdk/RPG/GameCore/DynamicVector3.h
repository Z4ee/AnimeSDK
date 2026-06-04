#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DYNAMICVECTOR3_METHOD_2_FD2B7B6623952D19_OFFSET UNITYSDK_OFFSET(0x196D2460)
#define RPG_GAMECORE_DYNAMICVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x196D2630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicVector3_TypeDefinitionIndex = 22541;

	class DynamicVector3 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* x; // 0x10
		::RPG::GameCore::DynamicFloat* y; // 0x18
		::RPG::GameCore::DynamicFloat* z; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVECTOR3__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FD2B7B6623952D19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicVector3*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicVector3*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVECTOR3_METHOD_2_FD2B7B6623952D19_OFFSET))(a1, a2);
		}
	};
}
