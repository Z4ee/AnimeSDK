#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBPCoreRewardShowWidgetWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_1931156DDD30B37B_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0x125E2FC0)
#define CLASS_2_1931156DDD30B37B_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x125E32F0)
#define CLASS_2_1931156DDD30B37B_METHOD_2_53377BD0EFB06B9D_OFFSET UNITYSDK_OFFSET(0x125E3110)
#define CLASS_2_1931156DDD30B37B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x125E3380)
#define CLASS_2_1931156DDD30B37B__CTOR_OFFSET UNITYSDK_OFFSET(0x125E3370)

inline static constexpr unsigned int Class_2_1931156DDD30B37B_TypeDefinitionIndex = 46827;

class Class_2_1931156DDD30B37B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x18
	::MoleMole::MonoGamepadCustomList* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1931156DDD30B37B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1931156DDD30B37B_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1931156DDD30B37B_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1931156DDD30B37B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>*>* Method_2_53377BD0EFB06B9D(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1931156DDD30B37B_METHOD_2_53377BD0EFB06B9D_OFFSET))(this, a1, a2);
	}
};
