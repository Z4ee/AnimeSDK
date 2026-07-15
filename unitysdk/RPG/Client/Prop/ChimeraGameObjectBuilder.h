#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraBuildMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ChimeraData; }
namespace RPG::GameCore { class CharacterReplaceMaterialPartShow; }
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_BUILDCARINUI3D_OFFSET UNITYSDK_OFFSET(0x18FF6F80)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_BUILDCHIMERA_OFFSET UNITYSDK_OFFSET(0x18FF52C0)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_GET__BODYCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x18FF7650)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18FF7470)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18FF7420)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18FF73D0)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_SETSHADOWCASTINGENABLED_OFFSET UNITYSDK_OFFSET(0x18FF58E0)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__BUILDBLUSH_OFFSET UNITYSDK_OFFSET(0x18FF5B70)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__BUILDBODY_OFFSET UNITYSDK_OFFSET(0x18FF5D90)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__BUILDEYE_OFFSET UNITYSDK_OFFSET(0x18FF6930)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__BUILDFACE_OFFSET UNITYSDK_OFFSET(0x18FF6140)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__BUILDITEMS_OFFSET UNITYSDK_OFFSET(0x18FF6570)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__CREATEMATERIALPARTCONFIG_OFFSET UNITYSDK_OFFSET(0x18FF7760)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF7B00)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__FETCHMODELBODYFIX_OFFSET UNITYSDK_OFFSET(0x18FF74C0)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__GETCARROOT_OFFSET UNITYSDK_OFFSET(0x18FF7800)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__GETCHARIOTSTATE_OFFSET UNITYSDK_OFFSET(0x18FF79B0)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__GETCHIMERACONFIG_OFFSET UNITYSDK_OFFSET(0x18FF75B0)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__GETDEFAULTMATERIALINFIX_OFFSET UNITYSDK_OFFSET(0x18FF7560)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__ISVALID_OFFSET UNITYSDK_OFFSET(0x18FF5B10)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__TRYBUILDCAR_OFFSET UNITYSDK_OFFSET(0x18FF69E0)
#define RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__TRYSETWWISESWITCH_OFFSET UNITYSDK_OFFSET(0x18FF6E30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraGameObjectBuilder_TypeDefinitionIndex = 74498;

	class ChimeraGameObjectBuilder : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _DefaultInFix; // 0x0
		// static const ::System::Int32 _LevelOneCarState = 0x65; // 0x0
		// static const ::System::Int32 _LevelTwoCarState = 0x66; // 0x0
		// static const ::System::Int32 _LevelThreeCarState = 0x67; // 0x0
		// static const ::System::String* _CarriotResPath; // 0x0
		// static const ::System::String* _LevelThreeCarRoot; // 0x0
		::System::UInt32 ChimeraID; // 0x18
		::RPG::Client::Prop::ChimeraBuildMode _Mode; // 0x1C
		::System::Boolean _IsShadowCastingEnabled; // 0x20
		::UnityEngine::Transform* _CarRoot; // 0x28
		::UnityEngine::Renderer* Body; // 0x30
		::UnityEngine::Renderer* ChimeraItem; // 0x38
		::UnityEngine::Renderer* Face; // 0x40
		::UnityEngine::Renderer* Blush; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__CTOR_OFFSET))(this);
		}

		::System::Void BuildChimera(::System::UInt32 a1, ::RPG::Client::Prop::ChimeraBuildMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Prop::ChimeraBuildMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_BUILDCHIMERA_OFFSET))(this, a1, a2);
		}

		::System::Void SetShadowCastingEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_SETSHADOWCASTINGENABLED_OFFSET))(this, a1);
		}

		::System::Void BuildCarInUI3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_BUILDCARINUI3D_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _BuildFace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__BUILDFACE_OFFSET))(this);
		}

		::System::Void _BuildBlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__BUILDBLUSH_OFFSET))(this);
		}

		::System::Void _BuildBody()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__BUILDBODY_OFFSET))(this);
		}

		::System::Void _BuildEye()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__BUILDEYE_OFFSET))(this);
		}

		::System::String* _GetCarRoot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__GETCARROOT_OFFSET))(this);
		}

		::System::Void _TryBuildCar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__TRYBUILDCAR_OFFSET))(this);
		}

		::System::Void _TrySetWwiseSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__TRYSETWWISESWITCH_OFFSET))(this);
		}

		::System::Int32 _GetChariotState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__GETCHARIOTSTATE_OFFSET))(this);
		}

		::System::String* _FetchModelBodyFix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__FETCHMODELBODYFIX_OFFSET))(this);
		}

		::System::String* _GetDefaultMaterialInFix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__GETDEFAULTMATERIALINFIX_OFFSET))(this);
		}

		::System::Void _BuildItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__BUILDITEMS_OFFSET))(this);
		}

		::RPG::GameCore::CharacterReplaceMaterialPartShow* _CreateMaterialPartConfig(::Il2CppArray<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::CharacterReplaceMaterialPartShow*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__CREATEMATERIALPARTCONFIG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChimeraData* _GetChimeraConfig()
		{
			return ((::RPG::Client::ChimeraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__GETCHIMERACONFIG_OFFSET))(this);
		}

		::System::Boolean _IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER__ISVALID_OFFSET))(this);
		}

		::System::UInt32 get__BodyConstValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGAMEOBJECTBUILDER_GET__BODYCONSTVALUE_OFFSET))(this);
		}
	};
}
