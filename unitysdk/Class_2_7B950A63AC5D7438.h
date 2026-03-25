#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5D147579CBDAF3E.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7B950A63AC5D7438_CLEAR_OFFSET UNITYSDK_OFFSET(0x11687450)
#define CLASS_2_7B950A63AC5D7438_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x116870E0)
#define CLASS_2_7B950A63AC5D7438_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x11686DB0)
#define CLASS_2_7B950A63AC5D7438_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11687380)
#define CLASS_2_7B950A63AC5D7438_METHOD_2_4196CA4C01821778_OFFSET UNITYSDK_OFFSET(0x11687610)
#define CLASS_2_7B950A63AC5D7438_METHOD_2_5B62DAAC1663D204_OFFSET UNITYSDK_OFFSET(0x11686DF0)
#define CLASS_2_7B950A63AC5D7438_METHOD_2_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x116873E0)
#define CLASS_2_7B950A63AC5D7438_METHOD_2_8E2ECCC5C1F0D5BB_OFFSET UNITYSDK_OFFSET(0x11687600)
#define CLASS_2_7B950A63AC5D7438__CTOR_OFFSET UNITYSDK_OFFSET(0x116875E0)
#define CLASS_2_7B950A63AC5D7438___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x11687690)

inline static constexpr unsigned int Class_2_7B950A63AC5D7438_TypeDefinitionIndex = 58043;

class Class_2_7B950A63AC5D7438 : public ::Class_1_D5D147579CBDAF3E
{
public:
	::System::Single Field_2_1; // 0x48
	::System::Boolean Field_2_2; // 0x4C
	::System::Boolean Field_2_0; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B950A63AC5D7438__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B950A63AC5D7438_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_5B62DAAC1663D204(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7B950A63AC5D7438_METHOD_2_5B62DAAC1663D204_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7B950A63AC5D7438_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7B950A63AC5D7438_METHOD_2_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B950A63AC5D7438_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B950A63AC5D7438_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_8E2ECCC5C1F0D5BB(::UnityEngine::Transform* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7B950A63AC5D7438_METHOD_2_8E2ECCC5C1F0D5BB_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_4196CA4C01821778(::System::Single P0, ::System::Single P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7B950A63AC5D7438_METHOD_2_4196CA4C01821778_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B950A63AC5D7438___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
