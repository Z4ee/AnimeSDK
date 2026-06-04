#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_GETNEWADDEDEFFECTS_OFFSET UNITYSDK_OFFSET(0xBBE29B0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_GETSHOWNEFFECTS_OFFSET UNITYSDK_OFFSET(0xBBE2850)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_INITEFFECT_OFFSET UNITYSDK_OFFSET(0xBBE19D0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKALLEFFECTSHOWN_OFFSET UNITYSDK_OFFSET(0xBBE29F0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKEFFECTSHOWN_OFFSET UNITYSDK_OFFSET(0xBBE2600)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_UPDATEEFFECT_OFFSET UNITYSDK_OFFSET(0xBBE1F00)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__ADDEFFECTS_OFFSET UNITYSDK_OFFSET(0xBBE2090)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__CLEAR_OFFSET UNITYSDK_OFFSET(0xBBE1F90)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE1930)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__INTERSECTEFFECTS_OFFSET UNITYSDK_OFFSET(0xBBE2380)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleEffect_TypeDefinitionIndex = 60893;

	class GridFightRoleEffect : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* _Effects; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* _ShownEffects; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* _NewAddedEffects; // 0x20
		::RPG::Client::GridFightRole* _Role; // 0x28

		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT__CTOR_OFFSET))(this, a1);
		}

		::System::Void InitEffect(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitShowEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_INITEFFECT_OFFSET))(this, a1);
		}

		::System::Void UpdateEffect(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_UPDATEEFFECT_OFFSET))(this, a1);
		}

		::System::Void MarkEffectShown(::RPG::Client::IGridFightTraitShowEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightTraitShowEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKEFFECTSHOWN_OFFSET))(this, a1);
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

		::System::Void _AddEffects(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT__ADDEFFECTS_OFFSET))(this, a1);
		}

		::System::Void _IntersectEffects(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT__INTERSECTEFFECTS_OFFSET))(this, a1, a2);
		}
	};
}
