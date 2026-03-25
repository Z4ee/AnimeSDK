#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERDESTROYTEXTINFO_METHOD_2_9826FD26985A644A_OFFSET UNITYSDK_OFFSET(0x174279E0)
#define RPG_GAMECORE_MODIFIERDESTROYTEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17427BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierDestroyTextInfo_TypeDefinitionIndex = 15716;

	class ModifierDestroyTextInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Flags; // 0x10
		::RPG::Client::TextID Text; // 0x18
		::Il2CppArray<::System::String*>* ExcludeModifiers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERDESTROYTEXTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9826FD26985A644A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierDestroyTextInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierDestroyTextInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERDESTROYTEXTINFO_METHOD_2_9826FD26985A644A_OFFSET))(a1, a2);
		}
	};
}
