#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOCompositeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SOTaskConfig; }

#define RPG_GAMECORE_SO_SEQUENCE_METHOD_5_902D431D3280FFF7_OFFSET UNITYSDK_OFFSET(0x1D4BB680)
#define RPG_GAMECORE_SO_SEQUENCE_METHOD_5_9AC0B15C9C2B3441_OFFSET UNITYSDK_OFFSET(0x1D4BD9C0)
#define RPG_GAMECORE_SO_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BB670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_Sequence_TypeDefinitionIndex = 19822;

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

		static ::System::Void Method_5_9AC0B15C9C2B3441(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_Sequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_Sequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SEQUENCE_METHOD_5_9AC0B15C9C2B3441_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_902D431D3280FFF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_Sequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_Sequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SEQUENCE_METHOD_5_902D431D3280FFF7_OFFSET))(a1, a2);
		}
	};
}
