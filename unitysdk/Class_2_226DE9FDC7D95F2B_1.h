#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_226DE9FDC7D95F2B_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17A8F910)
#define CLASS_2_226DE9FDC7D95F2B_1_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x17A8F920)
#define CLASS_2_226DE9FDC7D95F2B_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17A8FAC0)
#define CLASS_2_226DE9FDC7D95F2B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A8FB00)

inline static constexpr unsigned int Class_2_226DE9FDC7D95F2B_1_TypeDefinitionIndex = 53577;

class Class_2_226DE9FDC7D95F2B_1 : public ::Class_1_0FEB237AF044DA54
{
public:
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B_1_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
