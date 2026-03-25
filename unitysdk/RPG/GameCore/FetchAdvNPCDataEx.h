#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_FETCHADVNPCDATAEX_METHOD_2_FF05F57C78A41894_OFFSET UNITYSDK_OFFSET(0x171CE670)
#define RPG_GAMECORE_FETCHADVNPCDATAEX__CTOR_OFFSET UNITYSDK_OFFSET(0x171CE840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FetchAdvNPCDataEx_TypeDefinitionIndex = 22143;

	class FetchAdvNPCDataEx : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* GroupNpcID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATAEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FF05F57C78A41894(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FetchAdvNPCDataEx*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FetchAdvNPCDataEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATAEX_METHOD_2_FF05F57C78A41894_OFFSET))(a1, a2);
		}
	};
}
