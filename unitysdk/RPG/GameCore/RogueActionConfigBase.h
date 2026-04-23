#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_5_A05A1EDB0B641ADA_OFFSET UNITYSDK_OFFSET(0x18CD9D10)
#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_5_C14C96DCDAEFDCDF_OFFSET UNITYSDK_OFFSET(0x18CD9B50)
#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CD9D20)
#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBCC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActionConfigBase_TypeDefinitionIndex = 18583;

	class RogueActionConfigBase : public ::RPG::GameCore::PlayerActionConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionConfigBase*>*>** StaticGet__FromBinary_RogueActionConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueActionConfigBase_TypeDefinitionIndex)->GetStaticField(0x41320);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_5_C14C96DCDAEFDCDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_5_C14C96DCDAEFDCDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A05A1EDB0B641ADA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_5_A05A1EDB0B641ADA_OFFSET))(a1, a2);
		}
	};
}
