#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiAtomConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_3_50FF91C50CB9236F_OFFSET UNITYSDK_OFFSET(0x18B19C40)
#define RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_3_90FC8C5534A43E62_OFFSET UNITYSDK_OFFSET(0x18B19A80)
#define RPG_GAMECORE_MICONDITIONCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B19D20)
#define RPG_GAMECORE_MICONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B19D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiConditionConfigBase_TypeDefinitionIndex = 16157;

	class MiConditionConfigBase : public ::RPG::GameCore::MiAtomConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionConfigBase*>*>** StaticGet__FromBinary_MiConditionConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiConditionConfigBase_TypeDefinitionIndex)->GetStaticField(0x3D0A0);
		}
		::System::Boolean Inverse; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_90FC8C5534A43E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_3_90FC8C5534A43E62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50FF91C50CB9236F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_3_50FF91C50CB9236F_OFFSET))(a1, a2);
		}
	};
}
