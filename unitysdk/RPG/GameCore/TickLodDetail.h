#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodDetail.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TICKLODDETAIL_METHOD_3_67D0A2D2D82618C3_OFFSET UNITYSDK_OFFSET(0x190982B0)
#define RPG_GAMECORE_TICKLODDETAIL_METHOD_3_C8697E74CEC4167C_OFFSET UNITYSDK_OFFSET(0x19098340)
#define RPG_GAMECORE_TICKLODDETAIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19098770)
#define RPG_GAMECORE_TICKLODDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x19098320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TickLodDetail_TypeDefinitionIndex = 18259;

	class TickLodDetail : public ::RPG::GameCore::LodDetail
	{
	public:
		static ::RPG::GameCore::TickLodDetail** StaticGet_ForbidTickDetail()
		{
			return (::RPG::GameCore::TickLodDetail**)Il2CppClass::FromTypeDefinitionIndex(TickLodDetail_TypeDefinitionIndex)->GetStaticField(0xCE90);
		}
		// static const ::System::UInt32 LOD0_TICK_INTERVAL = 0x1; // 0x0
		// static const ::System::UInt32 LOD1_TICK_INTERVAL = 0x2; // 0x0
		// static const ::System::UInt32 LOD2_TICK_INTERVAL = 0x4; // 0x0
		// static const ::System::UInt32 LOD3_TICK_INTERVAL = 0x8; // 0x0
		// static const ::System::UInt32 LOD4_TICK_INTERVAL = 0x20; // 0x0
		::System::UInt32 TickInterval; // 0x30
		::System::UInt32 CulledTickInterval; // 0x34
		::System::UInt32 InvisibleTickInterval; // 0x38
		::System::Int32 AnimatorTickLod; // 0x3C
		::System::Int32 AnimatorCulledTickLod; // 0x40
		::System::Int32 AnimatorInvisibleTickLod; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODDETAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODDETAIL__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_67D0A2D2D82618C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TickLodDetail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TickLodDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODDETAIL_METHOD_3_67D0A2D2D82618C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C8697E74CEC4167C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TickLodDetail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TickLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODDETAIL_METHOD_3_C8697E74CEC4167C_OFFSET))(a1, a2);
		}
	};
}
