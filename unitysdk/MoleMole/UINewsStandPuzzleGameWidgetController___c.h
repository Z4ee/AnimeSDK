#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_689;
namespace MoleMole { class UINewsStandPuzzlePieceWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155FB9D0)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155FBA10)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__GET_ISCURCHAPTERCOMPLETE_B__42_0_OFFSET UNITYSDK_OFFSET(0x155FBA20)
#define MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__INITDATA_B__43_0_OFFSET UNITYSDK_OFFSET(0x155FBA40)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPuzzleGameWidgetController___c_TypeDefinitionIndex = 52457;

	class UINewsStandPuzzleGameWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::System::Boolean>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::MoleMole::UINewsStandPuzzlePieceWidgetController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UINewsStandPuzzleGameWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48970);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_689*, ::System::Int32>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_689*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UINewsStandPuzzleGameWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48978);
		}
		static ::MoleMole::UINewsStandPuzzleGameWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UINewsStandPuzzleGameWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UINewsStandPuzzleGameWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x48980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsCurChapterComplete_b__42_0(::MoleMole::UINewsStandPuzzlePieceWidgetController* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UINewsStandPuzzlePieceWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__GET_ISCURCHAPTERCOMPLETE_B__42_0_OFFSET))(this, p);
		}

		::System::Int32 _InitData_b__43_0(::Class_2_208CC9941471731A_689* c)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_689*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEGAMEWIDGETCONTROLLER___C__INITDATA_B__43_0_OFFSET))(this, c);
		}
	};
}
