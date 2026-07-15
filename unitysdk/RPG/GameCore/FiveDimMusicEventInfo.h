#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICEVENTINFO_METHOD_2_F26BB78BDB83EDAE_OFFSET UNITYSDK_OFFSET(0x1BEA62A0)
#define RPG_GAMECORE_FIVEDIMMUSICEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA63C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicEventInfo_TypeDefinitionIndex = 18082;

	class FiveDimMusicEventInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventName; // 0x10
		::Il2CppArray<::System::UInt32>* TargetEntities; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICEVENTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F26BB78BDB83EDAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMusicEventInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMusicEventInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICEVENTINFO_METHOD_2_F26BB78BDB83EDAE_OFFSET))(a1, a2);
		}
	};
}
