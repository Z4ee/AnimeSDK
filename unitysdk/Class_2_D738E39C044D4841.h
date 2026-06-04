#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_D738E39C044D4841_GET_SHARECODE_OFFSET UNITYSDK_OFFSET(0xAA984C0)
#define CLASS_2_D738E39C044D4841__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAA98410)
#define CLASS_2_D738E39C044D4841__CTOR_OFFSET UNITYSDK_OFFSET(0xAA98370)

inline static constexpr unsigned int Class_2_D738E39C044D4841_TypeDefinitionIndex = 63142;

class Class_2_D738E39C044D4841 : public ::System::Exception
{
public:
	::System::String* _ShareCode_k__BackingField; // 0x88

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D738E39C044D4841__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_D738E39C044D4841__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_ShareCode()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D738E39C044D4841_GET_SHARECODE_OFFSET))(this);
	}
};
