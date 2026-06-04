#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_768;
class Class_1_8271AFF79E02658D;
class Class_1_EEEF09F79EF958D3_1;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitEffectConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CAKEEFFECTID_OFFSET UNITYSDK_OFFSET(0xBC2A290)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CHESTEFFECTID_OFFSET UNITYSDK_OFFSET(0xBC2A390)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBC2AA20)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ELATIONEFFECTID_OFFSET UNITYSDK_OFFSET(0xBC2A590)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ID_OFFSET UNITYSDK_OFFSET(0xBC25380)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBC2A9E0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0xBC2AA30)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAITEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xBC2A990)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xBC25340)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0xBC2AA00)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_WOLFEFFECTID_OFFSET UNITYSDK_OFFSET(0xBC2A490)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xBC29120)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0xBC2A900)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBC27FB0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBC2A5A0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xBC2A9F0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0xBC2AA40)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0xBC2AA10)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xBC22540)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectBase_TypeDefinitionIndex = 61114;

	class GridFightTraitEffectBase : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightTraitEffectConfig* _Config_k__BackingField; // 0x18
		::RPG::Client::GridFightTrait* _Trait_k__BackingField; // 0x20
		::System::Boolean _IsActive_k__BackingField; // 0x28
		::System::Boolean _IsRecover_k__BackingField; // 0x29

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 get_CakeEffectID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CAKEEFFECTID_OFFSET))();
		}

		static ::System::UInt32 get_ChestEffectID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CHESTEFFECTID_OFFSET))();
		}

		static ::System::UInt32 get_WolfEffectID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_WOLFEFFECTID_OFFSET))();
		}

		static ::System::UInt32 get_ElationEffectID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ELATIONEFFECTID_OFFSET))();
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void OnUpdate(::Class_1_8271AFF79E02658D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnUpdate_1(::Class_1_EEEF09F79EF958D3_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EEEF09F79EF958D3_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONUPDATE_1_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAITID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitEffectType get_TraitEffectType()
		{
			return ((::RPG::GameCore::GridFightTraitEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAITEFFECTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTrait* get_Trait()
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_TRAIT_OFFSET))(this);
		}

		::System::Void set_Trait(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_TRAIT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitEffectConfig* get_Config()
		{
			return ((::RPG::Client::GridFightTraitEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsRecover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_GET_ISRECOVER_OFFSET))(this);
		}

		::System::Void set_IsRecover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBASE_SET_ISRECOVER_OFFSET))(this, a1);
		}
	};
}
