#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESIDENTPOSSESSIONINFO_METHOD_2_85915FA24980C2F5_OFFSET UNITYSDK_OFFSET(0x1D3A6800)
#define RPG_GAMECORE_RESIDENTPOSSESSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A69F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResidentPossessionInfo_TypeDefinitionIndex = 16364;

	class ResidentPossessionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* AttachPoint; // 0x18
		::RPG::MVector3 LocalPosition; // 0x20
		::RPG::MVector3 LocalRotation; // 0x2C
		::System::Single LocalScale; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_85915FA24980C2F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResidentPossessionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResidentPossessionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTPOSSESSIONINFO_METHOD_2_85915FA24980C2F5_OFFSET))(a1, a2);
		}
	};
}
