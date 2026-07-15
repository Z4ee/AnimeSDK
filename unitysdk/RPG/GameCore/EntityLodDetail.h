#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLoadMode.h"
#include "unitysdk/RPG/GameCore/LodDetail.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYLODDETAIL_METHOD_3_E76D05529CFD88F3_OFFSET UNITYSDK_OFFSET(0x1C054650)
#define RPG_GAMECORE_ENTITYLODDETAIL_METHOD_3_F3FEA28E85EB8189_OFFSET UNITYSDK_OFFSET(0x1C0545C0)
#define RPG_GAMECORE_ENTITYLODDETAIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C054CE0)
#define RPG_GAMECORE_ENTITYLODDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C054630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodDetail_TypeDefinitionIndex = 18457;

	class EntityLodDetail : public ::RPG::GameCore::LodDetail
	{
	public:
		static ::RPG::GameCore::EntityLodDetail** StaticGet_InvisibleLodDetail()
		{
			return (::RPG::GameCore::EntityLodDetail**)Il2CppClass::FromTypeDefinitionIndex(EntityLodDetail_TypeDefinitionIndex)->GetStaticField(0x30CF0);
		}
		::System::Boolean Render; // 0x30
		::System::Boolean Shadow; // 0x31
		::System::Int32 POSMPriority; // 0x34
		::System::Boolean Animation; // 0x38
		::System::Boolean ParticleSystem; // 0x39
		::System::Boolean Skinning; // 0x3A
		::System::SByte ArtNodeLodLevel; // 0x3B
		::System::Boolean Effect; // 0x3C
		::System::Boolean SoundEvent; // 0x3D
		::System::Boolean Puzzle; // 0x3E
		::RPG::GameCore::FiveDimLoadMode FiveDimLoadMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODDETAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODDETAIL__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_F3FEA28E85EB8189(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityLodDetail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodDetail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODDETAIL_METHOD_3_F3FEA28E85EB8189_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E76D05529CFD88F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityLodDetail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODDETAIL_METHOD_3_E76D05529CFD88F3_OFFSET))(a1, a2);
		}
	};
}
