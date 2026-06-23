#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_484467572E032327_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xD3343B0)
#define CLASS_2_484467572E032327_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD334460)
#define CLASS_2_484467572E032327_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0xD334210)
#define CLASS_2_484467572E032327__CTOR_OFFSET UNITYSDK_OFFSET(0xD334450)

inline static constexpr unsigned int Class_2_484467572E032327_TypeDefinitionIndex = 84149;

class Class_2_484467572E032327 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_484467572E032327__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_484467572E032327_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_484467572E032327_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_484467572E032327_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
