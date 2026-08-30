#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MITRIGGERCONFIGBASE_METHOD_2_60F927397DDC6410_OFFSET UNITYSDK_OFFSET(0x1D29D5C0)
#define RPG_GAMECORE_MITRIGGERCONFIGBASE_METHOD_2_9F9E1C0E0CB33730_OFFSET UNITYSDK_OFFSET(0x1D29D900)
#define RPG_GAMECORE_MITRIGGERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29D8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiTriggerConfigBase_TypeDefinitionIndex = 16898;

	class MiTriggerConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MITRIGGERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_60F927397DDC6410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiTriggerConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiTriggerConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MITRIGGERCONFIGBASE_METHOD_2_60F927397DDC6410_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9F9E1C0E0CB33730(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiTriggerConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiTriggerConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MITRIGGERCONFIGBASE_METHOD_2_9F9E1C0E0CB33730_OFFSET))(a1, a2);
		}
	};
}
