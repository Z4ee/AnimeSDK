#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_714;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLERCONTEXT_BUILD_OFFSET UNITYSDK_OFFSET(0x17A2C6D0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2C640)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageControllerContext_TypeDefinitionIndex = 54907;

	class UIRidusGotBooPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_714*>* PassiveSkills; // 0x28
		::System::Int32 LevelID; // 0x30
		::System::Int32 ClothBuffRatio; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Build()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLERCONTEXT_BUILD_OFFSET))(this);
		}
	};
}
