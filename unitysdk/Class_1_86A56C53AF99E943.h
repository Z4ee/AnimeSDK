#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F3646635E7F85090;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_86A56C53AF99E943_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x179041E0)
#define CLASS_1_86A56C53AF99E943_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x17903300)
#define CLASS_1_86A56C53AF99E943_METHOD_1_433BC575E8BC8F75_OFFSET UNITYSDK_OFFSET(0x179033C0)
#define CLASS_1_86A56C53AF99E943_METHOD_1_46F674D64A9D8A5F_OFFSET UNITYSDK_OFFSET(0x17903500)
#define CLASS_1_86A56C53AF99E943_METHOD_1_C31CCD91290E67BE_OFFSET UNITYSDK_OFFSET(0x179035F0)
#define CLASS_1_86A56C53AF99E943__CTOR_OFFSET UNITYSDK_OFFSET(0x17904240)

inline static constexpr unsigned int Class_1_86A56C53AF99E943_TypeDefinitionIndex = 57223;

class Class_1_86A56C53AF99E943 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F3646635E7F85090*>* LLPENEGBBNO; // 0x10
	::System::Int32 AFLFJLHPPNA; // 0x18
	::System::Int32 KJCFIHNNAPJ; // 0x1C
	::System::Single OMGBJNBDBFC; // 0x20
	::System::Int32 OLCHJKFECEO; // 0x24
	::System::Boolean CKOAGFJPGMC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86A56C53AF99E943__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86A56C53AF99E943_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::Class_1_F3646635E7F85090* Method_1_433BC575E8BC8F75()
	{
		return ((::Class_1_F3646635E7F85090*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86A56C53AF99E943_METHOD_1_433BC575E8BC8F75_OFFSET))(this);
	}

	::System::Boolean Method_1_46F674D64A9D8A5F(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_86A56C53AF99E943_METHOD_1_46F674D64A9D8A5F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C31CCD91290E67BE(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::System::Boolean& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_86A56C53AF99E943_METHOD_1_C31CCD91290E67BE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86A56C53AF99E943_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
