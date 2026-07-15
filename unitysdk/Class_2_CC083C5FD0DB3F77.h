#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_CC083C5FD0DB3F77_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x169C4FC0)
#define CLASS_2_CC083C5FD0DB3F77_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x169C5280)
#define CLASS_2_CC083C5FD0DB3F77_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x169C5240)
#define CLASS_2_CC083C5FD0DB3F77_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x169C4FD0)
#define CLASS_2_CC083C5FD0DB3F77__CTOR_OFFSET UNITYSDK_OFFSET(0x169C53C0)

inline static constexpr unsigned int Class_2_CC083C5FD0DB3F77_TypeDefinitionIndex = 53574;

class Class_2_CC083C5FD0DB3F77 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::Int32 Field_2_0; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
	::System::Int32 Field_2_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC083C5FD0DB3F77__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC083C5FD0DB3F77_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC083C5FD0DB3F77_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC083C5FD0DB3F77_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC083C5FD0DB3F77_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
