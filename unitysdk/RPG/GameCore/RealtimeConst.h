#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ModifierStatusTypeList; }
namespace RPG::GameCore { class RtBehaviorFlagList; }
namespace RPG::GameCore { class RtBehaviorFlagListPair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_REALTIMECONST_GET_REVERSEDMODIFIERSTATUSTYPEIMMUNEMAP_OFFSET UNITYSDK_OFFSET(0x1D19D4D0)
#define RPG_GAMECORE_REALTIMECONST_GET_REVERSEMODIFIERBEHAVIORFLAGIMMUNEMAP_OFFSET UNITYSDK_OFFSET(0x1D19D8F0)
#define RPG_GAMECORE_REALTIMECONST_METHOD_2_3DA1C6D86A162460_OFFSET UNITYSDK_OFFSET(0x1D19CFF0)
#define RPG_GAMECORE_REALTIMECONST_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1D19D380)
#define RPG_GAMECORE_REALTIMECONST_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1D19D400)
#define RPG_GAMECORE_REALTIMECONST_METHOD_2_CF8DAE60A62181DC_OFFSET UNITYSDK_OFFSET(0x1D19D420)
#define RPG_GAMECORE_REALTIMECONST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19D360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RealtimeConst_TypeDefinitionIndex = 17435;

	class RealtimeConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::RPG::GameCore::RealtimeConst** StaticGet_Config()
		{
			return (::RPG::GameCore::RealtimeConst**)Il2CppClass::FromTypeDefinitionIndex(RealtimeConst_TypeDefinitionIndex)->GetStaticField(0x5D90);
		}
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtCharacterState, ::System::Single>* StateHitLayerWeightMap; // 0x10
		::RPG::GameCore::FixPoint DefaultDieTime; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::RPG::GameCore::RtBehaviorFlagList*>* ModifierBehaviorFlagImmuneMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::RPG::GameCore::ModifierStatusTypeList*>* ModifierStatusTypeImmuneMap; // 0x28
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlagListPair*>* ModifierBehaviorFlagAntiDebuffResistList; // 0x30
		::System::Int32 ModifierRecallLimit; // 0x38
		::System::Int32 RangePropertyRecallLimit; // 0x3C
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>* _reversedModifierStatusTypeImmuneMap; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>* _reverseModifierBehaviorFlagImmuneMap; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3DA1C6D86A162460(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RealtimeConst*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RealtimeConst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_METHOD_2_3DA1C6D86A162460_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_METHOD_2_5790A55946AA509D_OFFSET))();
		}

		static ::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_METHOD_2_832295EC279E5994_OFFSET))();
		}

		::System::Single Method_2_CF8DAE60A62181DC(::RPG::GameCore::RtCharacterState a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_METHOD_2_CF8DAE60A62181DC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>* get_ReversedModifierStatusTypeImmuneMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EnumStatusType, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_GET_REVERSEDMODIFIERSTATUSTYPEIMMUNEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>* get_ReverseModifierBehaviorFlagImmuneMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REALTIMECONST_GET_REVERSEMODIFIERBEHAVIORFLAGIMMUNEMAP_OFFSET))(this);
		}
	};
}
