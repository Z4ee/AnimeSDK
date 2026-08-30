#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT_CANCAST_OFFSET UNITYSDK_OFFSET(0xD365230)
#define RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT_GETEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xD364D80)
#define RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3652A0)
#define RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xD365290)
#define RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT__GETEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xD364FB0)
#define RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT__TRYGETACTIVITEROLE_OFFSET UNITYSDK_OFFSET(0xD364DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitPartnerBuffEffect_TypeDefinitionIndex = 65423;

	class GridFightTraitPartnerBuffEffect : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet__EffectByRoleID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitPartnerBuffEffect_TypeDefinitionIndex)->GetStaticField(0x541A0);
		}
		// static const ::System::String* _CommonPath; // 0x0
		// static const ::System::String* _DanHengILPath; // 0x0
		// static const ::System::String* _HimekoPath; // 0x0
		// static const ::System::String* _Mar_7th_00Path; // 0x0
		// static const ::System::String* _PlayerBoy_40Path; // 0x0
		// static const ::System::String* _SundayPath; // 0x0
		// static const ::System::String* _WeltPath; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT__CCTOR_OFFSET))();
		}

		::System::String* GetEffectPath(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT_GETEFFECTPATH_OFFSET))(this, a1);
		}

		::System::Boolean CanCast(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT_CANCAST_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetActiviteRole(::RPG::Client::GridFightTrait* a1, ::RPG::Client::GridFightRole*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightRole*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT__TRYGETACTIVITEROLE_OFFSET))(this, a1, a2);
		}

		::System::String* _GetEffectPath(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITPARTNERBUFFEFFECT__GETEFFECTPATH_OFFSET))(this, a1);
		}
	};
}
