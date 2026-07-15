#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiAtomConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_3_68101C41E397F668_OFFSET UNITYSDK_OFFSET(0x1AF62ED0)
#define RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_3_CBC634FC429CFFE5_OFFSET UNITYSDK_OFFSET(0x1AF62E70)
#define RPG_GAMECORE_MIPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF62F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiParameterConfigBase_TypeDefinitionIndex = 16389;

	class MiParameterConfigBase : public ::RPG::GameCore::MiAtomConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CBC634FC429CFFE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_3_CBC634FC429CFFE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68101C41E397F668(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE_METHOD_3_68101C41E397F668_OFFSET))(a1, a2);
		}
	};
}
