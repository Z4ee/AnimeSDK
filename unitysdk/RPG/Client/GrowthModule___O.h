#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthModule___O_TypeDefinitionIndex = 61336;

	class GrowthModule___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__1___IsAvatarRank()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x3EAA0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__5___IsCommonMonsterDrop()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x3EAA8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__0___IsAvatarExp()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x3EAB0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__6___IsTrackOfDestiny()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x3EAB8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__2___IsTracePath()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x3EAC0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__4___IsCredit()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x3EAC8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet__3___IsWeeklyMonsterDrop()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GrowthModule___O_TypeDefinitionIndex)->GetStaticField(0x3EAD0);
		}
	};
}
