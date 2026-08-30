#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

class PassAndKeywords;

#define CLASS_2_1F0FB28CE7ECC617_EQUALS_OFFSET UNITYSDK_OFFSET(0x155ED860)
#define CLASS_2_1F0FB28CE7ECC617_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x155ED910)
#define CLASS_2_1F0FB28CE7ECC617__CTOR_OFFSET UNITYSDK_OFFSET(0x155ED9F0)

inline static constexpr unsigned int Class_2_1F0FB28CE7ECC617_TypeDefinitionIndex = 47892;

class Class_2_1F0FB28CE7ECC617 : public ::System::Collections::Generic::EqualityComparer_1<::PassAndKeywords*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0FB28CE7ECC617__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::PassAndKeywords* a1, ::PassAndKeywords* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::PassAndKeywords*, ::PassAndKeywords*))((::PBYTE)hIl2Cpp + CLASS_2_1F0FB28CE7ECC617_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::PassAndKeywords* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::PassAndKeywords*))((::PBYTE)hIl2Cpp + CLASS_2_1F0FB28CE7ECC617_GETHASHCODE_OFFSET))(this, a1);
	}
};
