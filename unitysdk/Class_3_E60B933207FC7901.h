#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_E60B933207FC7901_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x109F0900)
#define CLASS_3_E60B933207FC7901_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x109F09E0)
#define CLASS_3_E60B933207FC7901_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x109F0A70)
#define CLASS_3_E60B933207FC7901_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x109F08A0)
#define CLASS_3_E60B933207FC7901__CCTOR_OFFSET UNITYSDK_OFFSET(0x109F0950)
#define CLASS_3_E60B933207FC7901__CTOR_OFFSET UNITYSDK_OFFSET(0x109F09D0)

inline static constexpr unsigned int Class_3_E60B933207FC7901_TypeDefinitionIndex = 69352;

class Class_3_E60B933207FC7901 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0xD4; // 0x0
	::MoleMole::Config::SurfGameItemDataEntry Field_3_1; // 0x48
	::System::Func_2<::MoleMole::EntityHandle, ::System::Boolean>* Field_3_2; // 0x60
	::System::Boolean Field_3_3; // 0x68
	::UnityEngine::Vector3 Field_3_5; // 0x6C
	::UnityEngine::Vector3 Field_3_4; // 0x78
	::System::Int32 Field_3_0; // 0x84

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E60B933207FC7901__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E60B933207FC7901__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E60B933207FC7901_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E60B933207FC7901_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E60B933207FC7901_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_E60B933207FC7901* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_E60B933207FC7901*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E60B933207FC7901_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
