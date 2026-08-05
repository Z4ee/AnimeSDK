#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D34760)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D347A0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__EXITPREPPAGE_B__23_0_OFFSET UNITYSDK_OFFSET(0x18D347B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleMoviePageController___c_TypeDefinitionIndex = 50114;

	class UICinemaSingleMoviePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UICinemaSingleMoviePageController___c_TypeDefinitionIndex)->GetStaticField(0x470A0);
		}
		static ::MoleMole::UICinemaSingleMoviePageController___c** StaticGet___9()
		{
			return (::MoleMole::UICinemaSingleMoviePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UICinemaSingleMoviePageController___c_TypeDefinitionIndex)->GetStaticField(0x470A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ExitPrepPage_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__EXITPREPPAGE_B__23_0_OFFSET))(this);
		}
	};
}
