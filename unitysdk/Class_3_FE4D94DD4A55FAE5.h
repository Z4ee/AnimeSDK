#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_D3876C00D1C08DCB.h"
#include "unitysdk/Enum_3_F27E25827C684939.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class MonoVOPathParticle;

#define CLASS_3_FE4D94DD4A55FAE5_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x194AF6A0)
#define CLASS_3_FE4D94DD4A55FAE5_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x194AF800)
#define CLASS_3_FE4D94DD4A55FAE5_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x194AF780)
#define CLASS_3_FE4D94DD4A55FAE5_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x194AF5F0)
#define CLASS_3_FE4D94DD4A55FAE5__CCTOR_OFFSET UNITYSDK_OFFSET(0x194AF6F0)
#define CLASS_3_FE4D94DD4A55FAE5__CTOR_OFFSET UNITYSDK_OFFSET(0x194AF770)

inline static constexpr unsigned int Class_3_FE4D94DD4A55FAE5_TypeDefinitionIndex = 47914;

class Class_3_FE4D94DD4A55FAE5 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_10 = 0xBF; // 0x0
	::MonoVOPathParticle* Field_3_1; // 0x48
	::MoleMole::EntityHandle Field_3_2; // 0x50
	::System::Single Field_3_6; // 0x60
	::System::Single Field_3_5; // 0x64
	::System::Boolean Field_3_11; // 0x68
	::Enum_3_F27E25827C684939 Field_3_0; // 0x6C
	::Enum_3_D3876C00D1C08DCB Field_3_7; // 0x70
	::System::Single Field_3_4; // 0x74

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FE4D94DD4A55FAE5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE4D94DD4A55FAE5__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE4D94DD4A55FAE5_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE4D94DD4A55FAE5_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_FE4D94DD4A55FAE5* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_FE4D94DD4A55FAE5*(*)())((::PBYTE)hIl2Cpp + CLASS_3_FE4D94DD4A55FAE5_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE4D94DD4A55FAE5_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
