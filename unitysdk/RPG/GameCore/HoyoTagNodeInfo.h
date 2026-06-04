#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagSide.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HOYOTAGNODEINFO_METHOD_2_3A2D6C34ACDF1A73_OFFSET UNITYSDK_OFFSET(0x1983B2E0)
#define RPG_GAMECORE_HOYOTAGNODEINFO_METHOD_2_501E7A3E999BA1E8_OFFSET UNITYSDK_OFFSET(0x1983A2E0)
#define RPG_GAMECORE_HOYOTAGNODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1983B4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoTagNodeInfo_TypeDefinitionIndex = 17410;

	class HoyoTagNodeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Tag; // 0x10
		::System::Int32 TagHash; // 0x18
		::RPG::GameCore::HoyoTagSide Side; // 0x1C
		::Il2CppArray<::RPG::GameCore::HoyoTagNodeInfo*>* ChildrenNodeList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGNODEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3A2D6C34ACDF1A73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HoyoTagNodeInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HoyoTagNodeInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGNODEINFO_METHOD_2_3A2D6C34ACDF1A73_OFFSET))(a1, a2);
		}

		::RPG::GameCore::HoyoTagNodeInfo* Method_2_501E7A3E999BA1E8(::System::Int32 a1)
		{
			return ((::RPG::GameCore::HoyoTagNodeInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOTAGNODEINFO_METHOD_2_501E7A3E999BA1E8_OFFSET))(this, a1);
		}
	};
}
