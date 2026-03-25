#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_2_67556107F6051F25;
namespace RPG::View { class ActivityAvatarInfoControl; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_2897BBEBF1D79DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1143E760)
#define CLASS_2_2897BBEBF1D79DBC__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1143E800)
#define CLASS_2_2897BBEBF1D79DBC__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1143ED00)
#define CLASS_2_2897BBEBF1D79DBC___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1143EE40)
#define CLASS_2_2897BBEBF1D79DBC___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1143EEA0)

inline static constexpr unsigned int Class_2_2897BBEBF1D79DBC_TypeDefinitionIndex = 41928;

class Class_2_2897BBEBF1D79DBC : public ::Sofa::BaseSofaWindow
{
public:
	::RPG::View::ActivityAvatarInfoControl* Field_2_0; // 0x40
	::UnityEngine::UI::Button* Field_2_1; // 0x48

	::System::Void _ctor(::Class_2_67556107F6051F25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67556107F6051F25*))((::PBYTE)hIl2Cpp + CLASS_2_2897BBEBF1D79DBC__CTOR_OFFSET))(this, a1);
	}

	::System::Void _OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2897BBEBF1D79DBC__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void _OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2897BBEBF1D79DBC__ONINITIALIZECOMPONENT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBindViewModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2897BBEBF1D79DBC___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInitializeComponent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2897BBEBF1D79DBC___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
	}
};
