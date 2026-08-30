#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_SlotComparerSelector___O_TypeDefinitionIndex = 74193;

	class TrainPartyBuildDisplayWallContext_SlotComparerSelector___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet__1___HasPhotoAvatarTag()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildDisplayWallContext_SlotComparerSelector___O_TypeDefinitionIndex)->GetStaticField(0x5BC30);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet__2___HasPhotoLightConeTag()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildDisplayWallContext_SlotComparerSelector___O_TypeDefinitionIndex)->GetStaticField(0x5BC38);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet__0___HasBadgeTag()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildDisplayWallContext_SlotComparerSelector___O_TypeDefinitionIndex)->GetStaticField(0x5BC40);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet__3___HasPhotoMissionTag()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildDisplayWallContext_SlotComparerSelector___O_TypeDefinitionIndex)->GetStaticField(0x5BC48);
		}
	};
}
