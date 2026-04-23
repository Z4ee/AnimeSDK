#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMETERCONFIGBASE_METHOD_5_342672872B828A4B_OFFSET UNITYSDK_OFFSET(0x188D9980)
#define RPG_GAMECORE_FATEPARAMETERCONFIGBASE_METHOD_5_74EB8AE98716BE3A_OFFSET UNITYSDK_OFFSET(0x188DB300)
#define RPG_GAMECORE_FATEPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x188D9180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParameterConfigBase_TypeDefinitionIndex = 15742;

	class FateParameterConfigBase : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_342672872B828A4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMETERCONFIGBASE_METHOD_5_342672872B828A4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_74EB8AE98716BE3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMETERCONFIGBASE_METHOD_5_74EB8AE98716BE3A_OFFSET))(a1, a2);
		}
	};
}
