#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthModule___O_TypeDefinitionIndex = 60401;

	class GrowthModule___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__5___IsCommonMonsterDrop()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x1CD00);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__0___IsAvatarExp()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x1CD08);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__1___IsAvatarRank()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x1CD10);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__3___IsWeeklyMonsterDrop()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x1CD18);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__2___IsTracePath()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x1CD20);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__4___IsCredit()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x1CD28);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__6___IsTrackOfDestiny()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x1CD30);
		}
	};
}
