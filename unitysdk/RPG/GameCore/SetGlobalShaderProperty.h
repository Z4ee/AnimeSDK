#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShaderPropertySetItem; }

#define RPG_GAMECORE_SETGLOBALSHADERPROPERTY_METHOD_3_8DCD1F65946C397C_OFFSET UNITYSDK_OFFSET(0x176CFCE0)
#define RPG_GAMECORE_SETGLOBALSHADERPROPERTY_METHOD_3_B0F7F4901A463CAF_OFFSET UNITYSDK_OFFSET(0x176CFC60)
#define RPG_GAMECORE_SETGLOBALSHADERPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x176CFCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetGlobalShaderProperty_TypeDefinitionIndex = 22124;

	class SetGlobalShaderProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ShaderPropertySetItem*>* Properties; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGLOBALSHADERPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B0F7F4901A463CAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGlobalShaderProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGlobalShaderProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGLOBALSHADERPROPERTY_METHOD_3_B0F7F4901A463CAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8DCD1F65946C397C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetGlobalShaderProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetGlobalShaderProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETGLOBALSHADERPROPERTY_METHOD_3_8DCD1F65946C397C_OFFSET))(a1, a2);
		}
	};
}
