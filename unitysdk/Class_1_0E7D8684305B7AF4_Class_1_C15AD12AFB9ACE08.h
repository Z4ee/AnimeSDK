#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2AB46C9F111C45AE;

#define CLASS_1_0E7D8684305B7AF4_CLASS_1_C15AD12AFB9ACE08_COMPARE_OFFSET UNITYSDK_OFFSET(0x153B4FD0)
#define CLASS_1_0E7D8684305B7AF4_CLASS_1_C15AD12AFB9ACE08__CTOR_OFFSET UNITYSDK_OFFSET(0x153B5040)

inline static constexpr unsigned int Class_1_0E7D8684305B7AF4_Class_1_C15AD12AFB9ACE08_TypeDefinitionIndex = 13908;

class Class_1_0E7D8684305B7AF4_Class_1_C15AD12AFB9ACE08 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E7D8684305B7AF4_CLASS_1_C15AD12AFB9ACE08__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_2_2AB46C9F111C45AE* a1, ::Class_2_2AB46C9F111C45AE* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_2AB46C9F111C45AE*, ::Class_2_2AB46C9F111C45AE*))((::PBYTE)hIl2Cpp + CLASS_1_0E7D8684305B7AF4_CLASS_1_C15AD12AFB9ACE08_COMPARE_OFFSET))(this, a1, a2);
	}
};
