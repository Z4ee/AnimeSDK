#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MIATOMCONFIGBASE_METHOD_2_2D24AF303372A1DB_OFFSET UNITYSDK_OFFSET(0x1D1A3AA0)
#define RPG_GAMECORE_MIATOMCONFIGBASE_METHOD_2_74B806AC3706CDE2_OFFSET UNITYSDK_OFFSET(0x1D1A3A40)
#define RPG_GAMECORE_MIATOMCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A39E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiAtomConfigBase_TypeDefinitionIndex = 16874;

	class MiAtomConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_74B806AC3706CDE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiAtomConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiAtomConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMCONFIGBASE_METHOD_2_74B806AC3706CDE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_2D24AF303372A1DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiAtomConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiAtomConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMCONFIGBASE_METHOD_2_2D24AF303372A1DB_OFFSET))(a1, a2);
		}
	};
}
