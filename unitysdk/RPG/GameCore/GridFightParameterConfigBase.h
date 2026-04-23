#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_5_682669E4B69946FA_OFFSET UNITYSDK_OFFSET(0x189C9320)
#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_5_6CA6FBB7BBEC63C7_OFFSET UNITYSDK_OFFSET(0x189C94E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189C94F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x189C21A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParameterConfigBase_TypeDefinitionIndex = 18517;

	class GridFightParameterConfigBase : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParameterConfigBase*>*>** StaticGet__FromBinary_GridFightParameterConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParameterConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightParameterConfigBase_TypeDefinitionIndex)->GetStaticField(0x3C500);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_5_682669E4B69946FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_5_682669E4B69946FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6CA6FBB7BBEC63C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_5_6CA6FBB7BBEC63C7_OFFSET))(a1, a2);
		}
	};
}
