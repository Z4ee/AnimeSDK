#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PREDICATECONFIG_METHOD_3_1C07D5A0A0F68024_OFFSET UNITYSDK_OFFSET(0x174EDF80)
#define RPG_GAMECORE_PREDICATECONFIG_METHOD_3_B25F1F3414B44449_OFFSET UNITYSDK_OFFSET(0x174EE100)
#define RPG_GAMECORE_PREDICATECONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x174EE270)
#define RPG_GAMECORE_PREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174EE240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PredicateConfig_TypeDefinitionIndex = 22012;

	class PredicateConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateConfig*>*>** StaticGet__FromBinary_PredicateConfig_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(PredicateConfig_TypeDefinitionIndex)->GetStaticField(0x30B20);
		}
		::System::Boolean Inverse; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_1C07D5A0A0F68024(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_METHOD_3_1C07D5A0A0F68024_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B25F1F3414B44449(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREDICATECONFIG_METHOD_3_B25F1F3414B44449_OFFSET))(a1, a2);
		}
	};
}
