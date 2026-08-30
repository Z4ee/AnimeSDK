#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_109.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"

class Class_1_95D2CEDB3F77EDE5;
namespace System { class String; }

#define CLASS_2_F8F4B28FE09F713E_METHOD_2_A99AFF57B633C3FB_OFFSET UNITYSDK_OFFSET(0x1C6FE4F0)
#define CLASS_2_F8F4B28FE09F713E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C705E10)

inline static constexpr unsigned int Class_2_F8F4B28FE09F713E_TypeDefinitionIndex = 42197;

class Class_2_F8F4B28FE09F713E : public ::Class_1_43BD383C98B4C0C5_109
{
public:
	// static const ::System::String* LDHHNJHPLBG; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F4B28FE09F713E__CTOR_OFFSET))(this);
	}

	::Class_1_95D2CEDB3F77EDE5* Method_2_A99AFF57B633C3FB(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Boolean a3)
	{
		return ((::Class_1_95D2CEDB3F77EDE5*(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F8F4B28FE09F713E_METHOD_2_A99AFF57B633C3FB_OFFSET))(this, a1, a2, a3);
	}
};
