#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1050BB558D637BF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EAA6F8E5D98E0924__CTOR_OFFSET UNITYSDK_OFFSET(0xC1085D0)

inline static constexpr unsigned int Class_1_EAA6F8E5D98E0924_TypeDefinitionIndex = 64850;

class Class_1_EAA6F8E5D98E0924 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>* Datas; // 0x10
	::System::Int32 Version; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAA6F8E5D98E0924__CTOR_OFFSET))(this);
	}
};
