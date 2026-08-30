#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_CC083C5FD0DB3F77_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15813560)
#define CLASS_2_CC083C5FD0DB3F77_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x15813820)
#define CLASS_2_CC083C5FD0DB3F77_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x158137E0)
#define CLASS_2_CC083C5FD0DB3F77_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x15813570)
#define CLASS_2_CC083C5FD0DB3F77__CTOR_OFFSET UNITYSDK_OFFSET(0x15813960)

inline static constexpr unsigned int Class_2_CC083C5FD0DB3F77_TypeDefinitionIndex = 56288;

class Class_2_CC083C5FD0DB3F77 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10
	::System::Int32 KHBBNDBJAFK; // 0x14
	::System::Int32 DHPDILNLIPC; // 0x18

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
