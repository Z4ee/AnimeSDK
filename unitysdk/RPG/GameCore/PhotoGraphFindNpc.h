#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_PHOTOGRAPHFINDNPC_METHOD_2_D6D9D0389E30A5DF_OFFSET UNITYSDK_OFFSET(0x174AA390)
#define RPG_GAMECORE_PHOTOGRAPHFINDNPC_METHOD_2_F266A0247ABE2FDC_OFFSET UNITYSDK_OFFSET(0x174AA4C0)
#define RPG_GAMECORE_PHOTOGRAPHFINDNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x174AA4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphFindNpc_TypeDefinitionIndex = 19787;

	class PhotoGraphFindNpc : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* GroupNpcID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFINDNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D6D9D0389E30A5DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphFindNpc*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphFindNpc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFINDNPC_METHOD_2_D6D9D0389E30A5DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F266A0247ABE2FDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphFindNpc* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphFindNpc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFINDNPC_METHOD_2_F266A0247ABE2FDC_OFFSET))(a1, a2);
		}
	};
}
