#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ASSEMNPCCOLLIDERINFO_GET_DEFAULTINFO_OFFSET UNITYSDK_OFFSET(0x90D8CF0)
#define RPG_CLIENT_ASSEMNPCCOLLIDERINFO_METHOD_1_D8DAA86944AD88A4_OFFSET UNITYSDK_OFFSET(0x90D8D80)
#define RPG_CLIENT_ASSEMNPCCOLLIDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x90D8D70)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPCColliderInfo_TypeDefinitionIndex = 48650;

	class AssemNPCColliderInfo : public ::System::Object
	{
	public:
		::System::Single CenterY; // 0x10
		::System::Single Height; // 0x14
		::System::Single Radius; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCOLLIDERINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AssemNPCColliderInfo* get_DefaultInfo()
		{
			return ((::RPG::Client::AssemNPCColliderInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCOLLIDERINFO_GET_DEFAULTINFO_OFFSET))();
		}

		::RPG::Client::AssemNPCColliderInfo* Method_1_D8DAA86944AD88A4()
		{
			return ((::RPG::Client::AssemNPCColliderInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCOLLIDERINFO_METHOD_1_D8DAA86944AD88A4_OFFSET))(this);
		}
	};
}
