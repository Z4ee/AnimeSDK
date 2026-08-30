#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0.h"

class Class_2_DA603AB5ED73A4F2;
namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define CLASS_2_ABBDDF72A79D9567_METHOD_2_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x18167A30)
#define CLASS_2_ABBDDF72A79D9567_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x18167980)
#define CLASS_2_ABBDDF72A79D9567_METHOD_2_A14A1EB3F7EFF137_OFFSET UNITYSDK_OFFSET(0x181678F0)
#define CLASS_2_ABBDDF72A79D9567_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18167AD0)
#define CLASS_2_ABBDDF72A79D9567__CTOR_OFFSET UNITYSDK_OFFSET(0x181678E0)

inline static constexpr unsigned int Class_2_ABBDDF72A79D9567_TypeDefinitionIndex = 73742;

class Class_2_ABBDDF72A79D9567 : public ::Class_1_8A6989C352B0F0F0
{
public:
	::Class_2_DA603AB5ED73A4F2* IHGJDKBPBHC; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABBDDF72A79D9567__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A14A1EB3F7EFF137(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_ABBDDF72A79D9567_METHOD_2_A14A1EB3F7EFF137_OFFSET))(this, a1);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABBDDF72A79D9567_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_6D44C03F490A953F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ABBDDF72A79D9567_METHOD_2_6D44C03F490A953F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABBDDF72A79D9567_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
