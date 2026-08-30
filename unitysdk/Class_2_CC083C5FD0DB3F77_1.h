#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

#define CLASS_2_CC083C5FD0DB3F77_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBA4EEC0)
#define CLASS_2_CC083C5FD0DB3F77_1_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xBA4F190)
#define CLASS_2_CC083C5FD0DB3F77_1_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xBA4EED0)
#define CLASS_2_CC083C5FD0DB3F77_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA4F150)
#define CLASS_2_CC083C5FD0DB3F77_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA4F2F0)

inline static constexpr unsigned int Class_2_CC083C5FD0DB3F77_1_TypeDefinitionIndex = 56340;

class Class_2_CC083C5FD0DB3F77_1 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::Struct_2_9E453D160BF69F98 GPKCGOLOJKC; // 0x10
	::System::Int32 NKJPBAACMOD; // 0x28
	::System::Int32 MKGHKEIIINI; // 0x2C
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC083C5FD0DB3F77_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC083C5FD0DB3F77_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC083C5FD0DB3F77_1_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC083C5FD0DB3F77_1_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC083C5FD0DB3F77_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
