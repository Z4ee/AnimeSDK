#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FATEMODIFIERCONFIGBASE_METHOD_2_05A496EC4364A881_OFFSET UNITYSDK_OFFSET(0x171C5CC0)
#define RPG_GAMECORE_FATEMODIFIERCONFIGBASE_METHOD_2_9A09F4503BCBA2AC_OFFSET UNITYSDK_OFFSET(0x171C5E80)
#define RPG_GAMECORE_FATEMODIFIERCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171C5E90)
#define RPG_GAMECORE_FATEMODIFIERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x171C5690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierConfigBase_TypeDefinitionIndex = 17680;

	class FateModifierConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierConfigBase*>*>** StaticGet__FromBinary_FateModifierConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(FateModifierConfigBase_TypeDefinitionIndex)->GetStaticField(0x2D360);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_05A496EC4364A881(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERCONFIGBASE_METHOD_2_05A496EC4364A881_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9A09F4503BCBA2AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERCONFIGBASE_METHOD_2_9A09F4503BCBA2AC_OFFSET))(a1, a2);
		}
	};
}
