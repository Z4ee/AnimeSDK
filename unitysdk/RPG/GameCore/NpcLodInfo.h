#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_NPCLODINFO_METHOD_2_7F190D6E74173A2F_OFFSET UNITYSDK_OFFSET(0x17476CD0)
#define RPG_GAMECORE_NPCLODINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17476F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcLodInfo_TypeDefinitionIndex = 17495;

	class NpcLodInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Body; // 0x18
		::System::String* Face; // 0x20
		::System::String* Hair; // 0x28
		::System::String* Item; // 0x30
		::System::String* Weapon; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* NpcLodInfoMap; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7F190D6E74173A2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcLodInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcLodInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODINFO_METHOD_2_7F190D6E74173A2F_OFFSET))(a1, a2);
		}
	};
}
