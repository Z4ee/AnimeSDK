#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE_METHOD_2_0E5CCF5448864A49_OFFSET UNITYSDK_OFFSET(0x17261350)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE_METHOD_2_80DC45303115E084_OFFSET UNITYSDK_OFFSET(0x17261510)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17261520)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1725FD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierConfigBase_TypeDefinitionIndex = 17754;

	class GridFightModifierConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierConfigBase*>*>** StaticGet__FromBinary_GridFightModifierConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModifierConfigBase_TypeDefinitionIndex)->GetStaticField(0x21640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_0E5CCF5448864A49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE_METHOD_2_0E5CCF5448864A49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_80DC45303115E084(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE_METHOD_2_80DC45303115E084_OFFSET))(a1, a2);
		}
	};
}
