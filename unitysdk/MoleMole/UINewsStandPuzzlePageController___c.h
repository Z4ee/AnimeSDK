#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5002A338EA6818A8_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UINEWSSTANDPUZZLEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EB0540)
#define MOLEMOLE_UINEWSSTANDPUZZLEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB0580)
#define MOLEMOLE_UINEWSSTANDPUZZLEPAGECONTROLLER___C__GETPERFORMID_B__34_0_OFFSET UNITYSDK_OFFSET(0x16EB05C0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPAGECONTROLLER___C__GETPERFORMID_B__34_1_OFFSET UNITYSDK_OFFSET(0x16EB05E0)
#define MOLEMOLE_UINEWSSTANDPUZZLEPAGECONTROLLER___C__INITLEVELDATA_B__32_0_OFFSET UNITYSDK_OFFSET(0x16EB0590)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandPuzzlePageController___c_TypeDefinitionIndex = 51401;

	class UINewsStandPuzzlePageController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_5002A338EA6818A8_1*, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::Class_1_5002A338EA6818A8_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UINewsStandPuzzlePageController___c_TypeDefinitionIndex)->GetStaticField(0x41680);
		}
		static ::System::Func_2<::Class_1_5002A338EA6818A8_1*, ::System::Int32>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::Class_1_5002A338EA6818A8_1*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UINewsStandPuzzlePageController___c_TypeDefinitionIndex)->GetStaticField(0x41688);
		}
		static ::System::Func_2<::Class_1_5002A338EA6818A8_1*, ::System::Boolean>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::Class_1_5002A338EA6818A8_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UINewsStandPuzzlePageController___c_TypeDefinitionIndex)->GetStaticField(0x41690);
		}
		static ::MoleMole::UINewsStandPuzzlePageController___c** StaticGet___9()
		{
			return (::MoleMole::UINewsStandPuzzlePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UINewsStandPuzzlePageController___c_TypeDefinitionIndex)->GetStaticField(0x41698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitLevelData_b__32_0(::Class_1_5002A338EA6818A8_1* a)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5002A338EA6818A8_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPAGECONTROLLER___C__INITLEVELDATA_B__32_0_OFFSET))(this, a);
		}

		::System::Boolean _GetPerformId_b__34_0(::Class_1_5002A338EA6818A8_1* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5002A338EA6818A8_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPAGECONTROLLER___C__GETPERFORMID_B__34_0_OFFSET))(this, a);
		}

		::System::Boolean _GetPerformId_b__34_1(::Class_1_5002A338EA6818A8_1* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5002A338EA6818A8_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDPUZZLEPAGECONTROLLER___C__GETPERFORMID_B__34_1_OFFSET))(this, a);
		}
	};
}
