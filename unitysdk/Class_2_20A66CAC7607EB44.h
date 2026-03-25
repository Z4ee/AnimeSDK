#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A11BE7693BACC4F5.h"

namespace System { class String; }

#define CLASS_2_20A66CAC7607EB44_METHOD_2_9931072F66453037_OFFSET UNITYSDK_OFFSET(0x8D797B0)
#define CLASS_2_20A66CAC7607EB44_METHOD_2_E0909E93F3B3FCCF_OFFSET UNITYSDK_OFFSET(0x8D79700)
#define CLASS_2_20A66CAC7607EB44__CTOR_OFFSET UNITYSDK_OFFSET(0x8D797A0)

inline static constexpr unsigned int Class_2_20A66CAC7607EB44_TypeDefinitionIndex = 63098;

class Class_2_20A66CAC7607EB44 : public ::Class_1_A11BE7693BACC4F5
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20A66CAC7607EB44__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_E0909E93F3B3FCCF(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_20A66CAC7607EB44_METHOD_2_E0909E93F3B3FCCF_OFFSET))(this, a1);
	}

	::System::String* Method_2_9931072F66453037(::System::String* P0)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_20A66CAC7607EB44_METHOD_2_9931072F66453037_OFFSET))(this, P0);
	}
};
