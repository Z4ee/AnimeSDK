#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicLoadBlockData; }

#define RPG_GAMECORE_DYNAMICLOADBLOCKDATAS_METHOD_2_6FF614B9718B0BE3_OFFSET UNITYSDK_OFFSET(0x17185610)
#define RPG_GAMECORE_DYNAMICLOADBLOCKDATAS__CTOR_OFFSET UNITYSDK_OFFSET(0x171856E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicLoadBlockDatas_TypeDefinitionIndex = 17569;

	class DynamicLoadBlockDatas : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicLoadBlockData*>* Data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATAS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6FF614B9718B0BE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicLoadBlockDatas*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicLoadBlockDatas*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICLOADBLOCKDATAS_METHOD_2_6FF614B9718B0BE3_OFFSET))(a1, a2);
		}
	};
}
