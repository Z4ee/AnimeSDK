#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYLODMODELCONFIG_METHOD_2_8B6B88BB55BEE3B0_OFFSET UNITYSDK_OFFSET(0x1D7C5A20)
#define RPG_GAMECORE_ENTITYLODMODELCONFIG_METHOD_2_E3AA469B35D90116_OFFSET UNITYSDK_OFFSET(0x1D7C56E0)
#define RPG_GAMECORE_ENTITYLODMODELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C59F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodModelConfig_TypeDefinitionIndex = 18986;

	class EntityLodModelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RuntimeName; // 0x10
		::RPG::MVector3 LocalPosition; // 0x18
		::RPG::MVector3 LocalScale; // 0x24
		::RPG::MVector3 LocalRotation; // 0x30
		::Il2CppArray<::System::String*>* LodPath; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MeshLodPath; // 0x48
		::Il2CppArray<::System::Int32>* MeshLodRedirect; // 0x50
		::System::String* ArtNodeLodQuality; // 0x58
		::System::String* _RuntimeNameCache; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODMODELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E3AA469B35D90116(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityLodModelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodModelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODMODELCONFIG_METHOD_2_E3AA469B35D90116_OFFSET))(a1, a2);
		}

		::System::String* Method_2_8B6B88BB55BEE3B0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODMODELCONFIG_METHOD_2_8B6B88BB55BEE3B0_OFFSET))(this);
		}
	};
}
