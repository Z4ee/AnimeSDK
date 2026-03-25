#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELFIREBULLETNODE_METHOD_3_6EC67B900F7DE6E8_OFFSET UNITYSDK_OFFSET(0x1709C150)
#define RPG_GAMECORE_CHIMERADUELFIREBULLETNODE_METHOD_3_D586C46E09F31C62_OFFSET UNITYSDK_OFFSET(0x1709C270)
#define RPG_GAMECORE_CHIMERADUELFIREBULLETNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1709C200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelFireBulletNode_TypeDefinitionIndex = 14659;

	class ChimeraDuelFireBulletNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* CasterSelector; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x18
		::System::String* BulletEffectPath; // 0x20
		::System::String* HitEffectPath; // 0x28
		::System::String* StartAnchorName; // 0x30
		::System::String* EndAnchorName; // 0x38
		::System::Boolean IsRotate; // 0x40
		::RPG::MVector3 Scale; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREBULLETNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6EC67B900F7DE6E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelFireBulletNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelFireBulletNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREBULLETNODE_METHOD_3_6EC67B900F7DE6E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D586C46E09F31C62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelFireBulletNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelFireBulletNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREBULLETNODE_METHOD_3_D586C46E09F31C62_OFFSET))(a1, a2);
		}
	};
}
