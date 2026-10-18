#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D459106EFEFB0716;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_65FD3404AD490CB1_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xC20EF70)
#define CLASS_1_65FD3404AD490CB1__CTOR_OFFSET UNITYSDK_OFFSET(0xC20F010)

inline static constexpr unsigned int Class_1_65FD3404AD490CB1_TypeDefinitionIndex = 54192;

class Class_1_65FD3404AD490CB1 : public ::System::Object
{
public:
	::System::String* ONOAKCNFMBC; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D459106EFEFB0716*>* JONGMMPJEIA; // 0x18
	::UnityEngine::Vector3 DCJFFIAPJME; // 0x20
	::System::Single CNHMBFIHLPC; // 0x2C
	::System::Single CDJLMJDEPJA; // 0x30
	::System::Single PIMDCJGDHMG; // 0x34
	::System::Single GJGKKECHEHH; // 0x38
	::System::Boolean PPFBBBJIODA; // 0x3C
	::System::Boolean KPHIFEFPPDD; // 0x3D
	::System::Boolean JJOMBGLMEBL; // 0x3E
	::System::Int32 NOIIIOKMIIN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65FD3404AD490CB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65FD3404AD490CB1_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
