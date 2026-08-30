#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PingPongDropItemType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGDROPITEMINFO_METHOD_2_DE6E50B721251AEA_OFFSET UNITYSDK_OFFSET(0x1D78C3D0)
#define RPG_GAMECORE_PINGPONGDROPITEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D78C570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongDropItemInfo_TypeDefinitionIndex = 16795;

	class PingPongDropItemInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PingPongDropItemType Type; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::Int32 DropWeight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGDROPITEMINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DE6E50B721251AEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongDropItemInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongDropItemInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGDROPITEMINFO_METHOD_2_DE6E50B721251AEA_OFFSET))(a1, a2);
		}
	};
}
