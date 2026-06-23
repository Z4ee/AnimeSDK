#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class MonoEffectPluginStateAnimation; }

#define CLASS_3_A3DA73D60DFD5C57_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x145ED1F0)
#define CLASS_3_A3DA73D60DFD5C57_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x145ED320)
#define CLASS_3_A3DA73D60DFD5C57_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x145ED3B0)
#define CLASS_3_A3DA73D60DFD5C57_METHOD_3_D9094603B049329E_OFFSET UNITYSDK_OFFSET(0x145ED2D0)
#define CLASS_3_A3DA73D60DFD5C57_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x145ED1A0)
#define CLASS_3_A3DA73D60DFD5C57__CCTOR_OFFSET UNITYSDK_OFFSET(0x145ED240)
#define CLASS_3_A3DA73D60DFD5C57__CTOR_OFFSET UNITYSDK_OFFSET(0x145ED2C0)

inline static constexpr unsigned int Class_3_A3DA73D60DFD5C57_TypeDefinitionIndex = 72985;

class Class_3_A3DA73D60DFD5C57 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0xB6; // 0x0
	::MoleMole::MonoEffectPluginStateAnimation* Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A3DA73D60DFD5C57__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA73D60DFD5C57__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA73D60DFD5C57_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA73D60DFD5C57_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_D9094603B049329E(::MoleMole::MonoEffectPluginStateAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginStateAnimation*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA73D60DFD5C57_METHOD_3_D9094603B049329E_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA73D60DFD5C57_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_A3DA73D60DFD5C57* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_A3DA73D60DFD5C57*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A3DA73D60DFD5C57_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
