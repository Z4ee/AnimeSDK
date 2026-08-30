#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MANIKINCUSTOMCONFIG_METHOD_2_86FB05DBD7BDCC5D_OFFSET UNITYSDK_OFFSET(0x1D494520)
#define RPG_GAMECORE_MANIKINCUSTOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4946D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinCustomConfig_TypeDefinitionIndex = 17279;

	class ManikinCustomConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Positions; // 0x10
		::System::Single Pitch; // 0x18
		::System::Single MaxRotationX; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINCUSTOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_86FB05DBD7BDCC5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManikinCustomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManikinCustomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINCUSTOMCONFIG_METHOD_2_86FB05DBD7BDCC5D_OFFSET))(a1, a2);
		}
	};
}
