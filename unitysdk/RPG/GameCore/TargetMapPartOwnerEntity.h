#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_2F7F2E2C6FA5B48C_OFFSET UNITYSDK_OFFSET(0x19D14180)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_6A9DA43DA78976C3_OFFSET UNITYSDK_OFFSET(0x19D14020)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_7F63DC0307A52E62_OFFSET UNITYSDK_OFFSET(0x19D140E0)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_9FCF9608FF10A1C3_OFFSET UNITYSDK_OFFSET(0x19D14140)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19D140C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapPartOwnerEntity_TypeDefinitionIndex = 22703;

	class TargetMapPartOwnerEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6A9DA43DA78976C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_6A9DA43DA78976C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F63DC0307A52E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_7F63DC0307A52E62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9FCF9608FF10A1C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_9FCF9608FF10A1C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F7F2E2C6FA5B48C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_METHOD_3_2F7F2E2C6FA5B48C_OFFSET))(a1, a2);
		}
	};
}
