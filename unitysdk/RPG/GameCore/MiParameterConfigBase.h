#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiAtomConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_3_3AE9B5CB375806D4_OFFSET UNITYSDK_OFFSET(0x17412EA0)
#define RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_3_68101C41E397F668_OFFSET UNITYSDK_OFFSET(0x17403000)
#define RPG_GAMECORE_MIPARAMETERCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17413060)
#define RPG_GAMECORE_MIPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17402FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiParameterConfigBase_TypeDefinitionIndex = 15637;

	class MiParameterConfigBase : public ::RPG::GameCore::MiAtomConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiParameterConfigBase*>*>** StaticGet__FromBinary_MiParameterConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiParameterConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiParameterConfigBase_TypeDefinitionIndex)->GetStaticField(0x2AE40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_3AE9B5CB375806D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_3_3AE9B5CB375806D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68101C41E397F668(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_3_68101C41E397F668_OFFSET))(a1, a2);
		}
	};
}
