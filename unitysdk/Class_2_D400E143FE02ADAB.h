#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5D147579CBDAF3E.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D400E143FE02ADAB_CLEAR_OFFSET UNITYSDK_OFFSET(0x14CDEF00)
#define CLASS_2_D400E143FE02ADAB_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x14CDEB90)
#define CLASS_2_D400E143FE02ADAB_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14CDE860)
#define CLASS_2_D400E143FE02ADAB_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14CDEE30)
#define CLASS_2_D400E143FE02ADAB_METHOD_2_5B62DAAC1663D204_OFFSET UNITYSDK_OFFSET(0x14CDE8A0)
#define CLASS_2_D400E143FE02ADAB_METHOD_2_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x14CDEE90)
#define CLASS_2_D400E143FE02ADAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14CDF090)

inline static constexpr unsigned int Class_2_D400E143FE02ADAB_TypeDefinitionIndex = 67682;

class Class_2_D400E143FE02ADAB : public ::Class_1_D5D147579CBDAF3E
{
public:
	::System::Single Field_2_0; // 0x48
	::System::Boolean Field_2_1; // 0x4C
	::System::Boolean Field_2_2; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D400E143FE02ADAB__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D400E143FE02ADAB_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_5B62DAAC1663D204(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_D400E143FE02ADAB_METHOD_2_5B62DAAC1663D204_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D400E143FE02ADAB_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D400E143FE02ADAB_METHOD_2_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D400E143FE02ADAB_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D400E143FE02ADAB_METHOD_2_0076C796B2045359_OFFSET))(this);
	}
};
