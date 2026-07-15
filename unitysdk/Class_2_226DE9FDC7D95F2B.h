#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_226DE9FDC7D95F2B_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17D76640)
#define CLASS_2_226DE9FDC7D95F2B_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x17D76650)
#define CLASS_2_226DE9FDC7D95F2B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17D767F0)
#define CLASS_2_226DE9FDC7D95F2B__CTOR_OFFSET UNITYSDK_OFFSET(0x17D76830)

inline static constexpr unsigned int Class_2_226DE9FDC7D95F2B_TypeDefinitionIndex = 53576;

class Class_2_226DE9FDC7D95F2B : public ::Class_1_0FEB237AF044DA54
{
public:
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
