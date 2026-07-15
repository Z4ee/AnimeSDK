#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEntityVar; }

#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_3_03D814C66BC4F954_OFFSET UNITYSDK_OFFSET(0x1BA93DE0)
#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_3_F671EC868488775B_OFFSET UNITYSDK_OFFSET(0x1BA93E20)
#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA93E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityVarConfig_TypeDefinitionIndex = 17902;

	class FiveDimEntityVarConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEnableEntityVar; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimEntityVar*>* PublicEntityVars; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimEntityVar*>* PrivateEntityVars; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03D814C66BC4F954(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityVarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityVarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_3_03D814C66BC4F954_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F671EC868488775B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityVarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_3_F671EC868488775B_OFFSET))(a1, a2);
		}
	};
}
