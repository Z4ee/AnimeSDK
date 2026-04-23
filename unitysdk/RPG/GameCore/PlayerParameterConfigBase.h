#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_METHOD_4_2458B9A0DF7AC6A4_OFFSET UNITYSDK_OFFSET(0x18C29480)
#define RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_METHOD_4_93F2DE5AE4178098_OFFSET UNITYSDK_OFFSET(0x18C292C0)
#define RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C294E0)
#define RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C28EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParameterConfigBase_TypeDefinitionIndex = 18568;

	class PlayerParameterConfigBase : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParameterConfigBase*>*>** StaticGet__FromBinary_PlayerParameterConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParameterConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerParameterConfigBase_TypeDefinitionIndex)->GetStaticField(0x45F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_4_93F2DE5AE4178098(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_METHOD_4_93F2DE5AE4178098_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2458B9A0DF7AC6A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_METHOD_4_2458B9A0DF7AC6A4_OFFSET))(a1, a2);
		}
	};
}
