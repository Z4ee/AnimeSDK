#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_5_DD6B87AEF8CF9B7A_OFFSET UNITYSDK_OFFSET(0x17651EF0)
#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_5_E1EC1981FE22B847_OFFSET UNITYSDK_OFFSET(0x176520B0)
#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x176520C0)
#define RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1764A530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParameterConfigBase_TypeDefinitionIndex = 18158;

	class RogueParameterConfigBase : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParameterConfigBase*>*>** StaticGet__FromBinary_RogueParameterConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParameterConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueParameterConfigBase_TypeDefinitionIndex)->GetStaticField(0x5F60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_5_DD6B87AEF8CF9B7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_5_DD6B87AEF8CF9B7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E1EC1981FE22B847(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMETERCONFIGBASE_METHOD_5_E1EC1981FE22B847_OFFSET))(a1, a2);
		}
	};
}
