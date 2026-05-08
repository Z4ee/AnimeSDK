#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"

namespace MoleMole { class AntiAliasProfileContext; }

#define MOLEMOLE_COMMANDLINEANTIALIAS_METHOD_2_0D1560B7509BDB7B_OFFSET UNITYSDK_OFFSET(0x122ED8B0)
#define MOLEMOLE_COMMANDLINEANTIALIAS_METHOD_2_78DB277A310DE432_OFFSET UNITYSDK_OFFSET(0x122ED9C0)
#define MOLEMOLE_COMMANDLINEANTIALIAS__CTOR_OFFSET UNITYSDK_OFFSET(0x122ED980)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineAntiAlias_TypeDefinitionIndex = 57376;

	class CommandLineAntiAlias : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::AntiAliasProfileContext*, ::MoleMole::CommandLineAntiAlias*>
	{
	public:
		::System::Nullable_1<::UnityEngine::NAPRenderPipeline0::AntialiasingMode> AntiAliasSetting; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANTIALIAS__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineAntiAlias* Method_2_0D1560B7509BDB7B(::MoleMole::AntiAliasProfileContext* a1)
		{
			return ((::MoleMole::CommandLineAntiAlias*(*)(::PVOID, ::MoleMole::AntiAliasProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANTIALIAS_METHOD_2_0D1560B7509BDB7B_OFFSET))(this, a1);
		}

		::MoleMole::AntiAliasProfileContext* Method_2_78DB277A310DE432(::MoleMole::AntiAliasProfileContext* a1)
		{
			return ((::MoleMole::AntiAliasProfileContext*(*)(::PVOID, ::MoleMole::AntiAliasProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEANTIALIAS_METHOD_2_78DB277A310DE432_OFFSET))(this, a1);
		}
	};
}
