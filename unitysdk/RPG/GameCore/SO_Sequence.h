#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOCompositeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SOTaskConfig; }

#define RPG_GAMECORE_SO_SEQUENCE_METHOD_5_2F7A41C2AB439412_OFFSET UNITYSDK_OFFSET(0x18DDE6F0)
#define RPG_GAMECORE_SO_SEQUENCE_METHOD_5_A4D3722C3F62A7E2_OFFSET UNITYSDK_OFFSET(0x18DE0D60)
#define RPG_GAMECORE_SO_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDE6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_Sequence_TypeDefinitionIndex = 18977;

	class SO_Sequence : public ::RPG::GameCore::SOCompositeConfig
	{
	public:
		::System::Boolean IsLoop; // 0x28
		::System::Boolean IsShuffle; // 0x29
		::Il2CppArray<::RPG::GameCore::SOTaskConfig*>* Tasks; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A4D3722C3F62A7E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_Sequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_Sequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SEQUENCE_METHOD_5_A4D3722C3F62A7E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2F7A41C2AB439412(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_Sequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_Sequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SEQUENCE_METHOD_5_2F7A41C2AB439412_OFFSET))(a1, a2);
		}
	};
}
