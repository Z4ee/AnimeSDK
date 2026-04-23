#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PckPatchPlatform; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PCKPATCHCONFIG_METHOD_2_F71FDC9F3E12D2A9_OFFSET UNITYSDK_OFFSET(0x18BD9FD0)
#define RPG_GAMECORE_PCKPATCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BDA0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PckPatchConfig_TypeDefinitionIndex = 15514;

	class PckPatchConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PckPatchPlatform*>* Incrementals; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F71FDC9F3E12D2A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PckPatchConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PckPatchConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PCKPATCHCONFIG_METHOD_2_F71FDC9F3E12D2A9_OFFSET))(a1, a2);
		}
	};
}
