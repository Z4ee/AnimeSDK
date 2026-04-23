#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_4D275D38310FAFB9_OFFSET UNITYSDK_OFFSET(0x18CF97D0)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_DDA85EA939268ADC_OFFSET UNITYSDK_OFFSET(0x18CF9610)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CF97E0)
#define RPG_GAMECORE_ROGUECONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF6110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueConditionConfigBase_TypeDefinitionIndex = 18781;

	class RogueConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConditionConfigBase*>*>** StaticGet__FromBinary_RogueConditionConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConditionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueConditionConfigBase_TypeDefinitionIndex)->GetStaticField(0x42880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_5_DDA85EA939268ADC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_DDA85EA939268ADC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4D275D38310FAFB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITIONCONFIGBASE_METHOD_5_4D275D38310FAFB9_OFFSET))(a1, a2);
		}
	};
}
