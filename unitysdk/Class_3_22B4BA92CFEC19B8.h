#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class MonoEffectPluginScreenEffect; }

#define CLASS_3_22B4BA92CFEC19B8_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15608E10)
#define CLASS_3_22B4BA92CFEC19B8_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15608F70)
#define CLASS_3_22B4BA92CFEC19B8_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x15608EF0)
#define CLASS_3_22B4BA92CFEC19B8_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15608DC0)
#define CLASS_3_22B4BA92CFEC19B8__CCTOR_OFFSET UNITYSDK_OFFSET(0x15608E60)
#define CLASS_3_22B4BA92CFEC19B8__CTOR_OFFSET UNITYSDK_OFFSET(0x15608EE0)

inline static constexpr unsigned int Class_3_22B4BA92CFEC19B8_TypeDefinitionIndex = 56754;

class Class_3_22B4BA92CFEC19B8 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0x6D; // 0x0
	::MoleMole::MonoEffectPluginScreenEffect* Field_3_3; // 0x48
	::System::Boolean Field_3_1; // 0x50
	::System::Single Field_3_2; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_22B4BA92CFEC19B8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22B4BA92CFEC19B8__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22B4BA92CFEC19B8_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22B4BA92CFEC19B8_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_22B4BA92CFEC19B8* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_22B4BA92CFEC19B8*(*)())((::PBYTE)hIl2Cpp + CLASS_3_22B4BA92CFEC19B8_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22B4BA92CFEC19B8_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
