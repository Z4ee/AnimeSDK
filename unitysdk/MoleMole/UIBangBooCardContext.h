#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_325;
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBANGBOOCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18021110)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooCardContext_TypeDefinitionIndex = 87771;

	class UIBangBooCardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::System::Boolean>* IsFeeEnough; // 0x28
		::System::Func_1<::Class_0_16E4307DCC419505_325*>* OnPointerDown; // 0x30
		::Foundation::AssetPath BangBooIconPath; // 0x38
		::Foundation::AssetPath SkillIcon; // 0x48
		::System::Int32 InitialFee; // 0x58
		::System::Boolean IsRepeat; // 0x5C
		::System::Int32 DeployCooldown; // 0x60
		::System::Int32 TemplateID; // 0x64
		::System::Int32 DeployCost; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
