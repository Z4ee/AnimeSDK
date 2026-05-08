#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class PathGuide; }

#define CLASS_3_5D1A15A001B7AA15_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x16C34060)
#define CLASS_3_5D1A15A001B7AA15_METHOD_3_5274FC956E530595_OFFSET UNITYSDK_OFFSET(0x16C341D0)
#define CLASS_3_5D1A15A001B7AA15_METHOD_3_89DABD6194914AEE_OFFSET UNITYSDK_OFFSET(0x16C341C0)
#define CLASS_3_5D1A15A001B7AA15_METHOD_3_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x16C33FC0)
#define CLASS_3_5D1A15A001B7AA15__CTOR_OFFSET UNITYSDK_OFFSET(0x16C34130)

inline static constexpr unsigned int Class_3_5D1A15A001B7AA15_TypeDefinitionIndex = 67751;

class Class_3_5D1A15A001B7AA15 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::UI::Extension::PathGuide* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D1A15A001B7AA15__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_5D1A15A001B7AA15_METHOD_3_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::UI::Extension::PathGuide* Method_3_89DABD6194914AEE()
	{
		return ((::UnityEngine::UI::Extension::PathGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D1A15A001B7AA15_METHOD_3_89DABD6194914AEE_OFFSET))(this);
	}

	::System::Void Method_3_5274FC956E530595(::UnityEngine::UI::Extension::PathGuide* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*))((::PBYTE)hIl2Cpp + CLASS_3_5D1A15A001B7AA15_METHOD_3_5274FC956E530595_OFFSET))(this, a1);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D1A15A001B7AA15_METHOD_3_0865E94460F11643_OFFSET))(this);
	}
};
