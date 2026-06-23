#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EF3220)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF3260)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___C__EXITPREPPAGE_B__23_0_OFFSET UNITYSDK_OFFSET(0x16EF3270)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleMoviePageController___c_TypeDefinitionIndex = 39903;

	class UICinemaSingleMoviePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UICinemaSingleMoviePageController___c** StaticGet___9()
		{
			return (::MoleMole::UICinemaSingleMoviePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UICinemaSingleMoviePageController___c_TypeDefinitionIndex)->GetStaticField(0x431F0);
		}
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UICinemaSingleMoviePageController___c_TypeDefinitionIndex)->GetStaticField(0x431F8);
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
