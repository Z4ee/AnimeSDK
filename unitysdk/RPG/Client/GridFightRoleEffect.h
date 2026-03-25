#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_GETNEWADDEDEFFECTS_OFFSET UNITYSDK_OFFSET(0x9893C00)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_GETSHOWNEFFECTS_OFFSET UNITYSDK_OFFSET(0x9893BC0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_INITEFFECT_OFFSET UNITYSDK_OFFSET(0x9893110)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKALLEFFECTSHOWN_OFFSET UNITYSDK_OFFSET(0x9893C40)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKEFFECTSHOWN_OFFSET UNITYSDK_OFFSET(0x9893AB0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_UPDATEEFFECT_OFFSET UNITYSDK_OFFSET(0x9893500)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__ADDEFFECTS_OFFSET UNITYSDK_OFFSET(0x9893660)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__CLEAR_OFFSET UNITYSDK_OFFSET(0x9893590)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x988D750)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__INTERSECTEFFECTS_OFFSET UNITYSDK_OFFSET(0x9893800)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleEffect_TypeDefinitionIndex = 52882;

	class GridFightRoleEffect : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* _Role; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* _NewAddedEffects; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* _ShownEffects; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* _Effects; // 0x28

		::System::Void _ctor(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT__CTOR_OFFSET))(this, role);
		}

		::System::Void InitEffect(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitShowEffect*>* effects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_INITEFFECT_OFFSET))(this, effects);
		}

		::System::Void UpdateEffect(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* effects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_UPDATEEFFECT_OFFSET))(this, effects);
		}

		::System::Void MarkEffectShown(::RPG::Client::IGridFightTraitShowEffect* effect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightTraitShowEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKEFFECTSHOWN_OFFSET))(this, effect);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* GetShownEffects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_GETSHOWNEFFECTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* GetNewAddedEffects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_GETNEWADDEDEFFECTS_OFFSET))(this);
		}

		::System::Void MarkAllEffectShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKALLEFFECTSHOWN_OFFSET))(this);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT__CLEAR_OFFSET))(this);
		}

		::System::Void _AddEffects(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* effects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT__ADDEFFECTS_OFFSET))(this, effects);
		}

		::System::Void _IntersectEffects(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* lhs, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* rhs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT__INTERSECTEFFECTS_OFFSET))(this, lhs, rhs);
		}
	};
}
