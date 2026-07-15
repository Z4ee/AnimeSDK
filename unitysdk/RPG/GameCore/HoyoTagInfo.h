#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagNodeInfo; }

#define RPG_GAMECORE_HOYOTAGINFO_METHOD_2_26DB6C9FD960C0CE_OFFSET UNITYSDK_OFFSET(0x1B68DA10)
#define RPG_GAMECORE_HOYOTAGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B68DAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoTagInfo_TypeDefinitionIndex = 17584;

	class HoyoTagInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HoyoTagNodeInfo*>* ChildrenNodeList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_26DB6C9FD960C0CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HoyoTagInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HoyoTagInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGINFO_METHOD_2_26DB6C9FD960C0CE_OFFSET))(a1, a2);
		}
	};
}
