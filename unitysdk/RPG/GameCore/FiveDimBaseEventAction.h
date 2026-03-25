#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_2_A0E412DF95BA9607_OFFSET UNITYSDK_OFFSET(0x171E1350)
#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_2_C966ACC22D198A0E_OFFSET UNITYSDK_OFFSET(0x171E14D0)
#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x171E1530)
#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x171DC780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseEventAction_TypeDefinitionIndex = 17112;

	class FiveDimBaseEventAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventAction*>*>** StaticGet__FromBinary_FiveDimBaseEventAction_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventAction*>*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimBaseEventAction_TypeDefinitionIndex)->GetStaticField(0x2F290);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_A0E412DF95BA9607(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_2_A0E412DF95BA9607_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C966ACC22D198A0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_2_C966ACC22D198A0E_OFFSET))(a1, a2);
		}
	};
}
