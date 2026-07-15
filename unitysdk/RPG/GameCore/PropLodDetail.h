#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodDetail.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPLODDETAIL_METHOD_3_68EAC2B0C6D4B98D_OFFSET UNITYSDK_OFFSET(0x1BA24220)
#define RPG_GAMECORE_PROPLODDETAIL_METHOD_3_D39EE853BCC53661_OFFSET UNITYSDK_OFFSET(0x1BA24280)
#define RPG_GAMECORE_PROPLODDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA24260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropLodDetail_TypeDefinitionIndex = 18362;

	class PropLodDetail : public ::RPG::GameCore::LodDetail
	{
	public:
		::System::Boolean Animation; // 0x30
		::System::Boolean Render; // 0x31
		::System::Boolean Shadow; // 0x32
		::System::Boolean Effect; // 0x33
		::System::Boolean Puzzle; // 0x34
		::System::Boolean SoundEvent; // 0x35
		::System::Boolean ParticleSystem; // 0x36

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODDETAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_68EAC2B0C6D4B98D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropLodDetail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropLodDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODDETAIL_METHOD_3_68EAC2B0C6D4B98D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D39EE853BCC53661(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropLodDetail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODDETAIL_METHOD_3_D39EE853BCC53661_OFFSET))(a1, a2);
		}
	};
}
