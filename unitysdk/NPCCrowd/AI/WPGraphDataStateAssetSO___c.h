#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class WPGraphDataStateAssetSO_WPGraphDataState; }
namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDD1220)
#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD1260)
#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO___C__REFRESH_B__6_0_OFFSET UNITYSDK_OFFSET(0xBDD1270)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphDataStateAssetSO___c_TypeDefinitionIndex = 78379;

	class WPGraphDataStateAssetSO___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState*>**)Il2CppClass::FromTypeDefinitionIndex(WPGraphDataStateAssetSO___c_TypeDefinitionIndex)->GetStaticField(0x44BA0);
		}
		static ::NPCCrowd::AI::WPGraphDataStateAssetSO___c** StaticGet___9()
		{
			return (::NPCCrowd::AI::WPGraphDataStateAssetSO___c**)Il2CppClass::FromTypeDefinitionIndex(WPGraphDataStateAssetSO___c_TypeDefinitionIndex)->GetStaticField(0x44BA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Refresh_b__6_0(::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState* i1, ::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState* i2)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState*, ::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO___C__REFRESH_B__6_0_OFFSET))(this, i1, i2);
		}
	};
}
