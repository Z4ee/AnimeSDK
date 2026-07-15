#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9DB6F6BB628BF86A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9F3769DF6D57E25_METHOD_1_224BEB9738AD25D4_OFFSET UNITYSDK_OFFSET(0x1A486420)
#define CLASS_1_B9F3769DF6D57E25_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x1A486570)
#define CLASS_1_B9F3769DF6D57E25_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x1A4866A0)
#define CLASS_1_B9F3769DF6D57E25__CTOR_OFFSET UNITYSDK_OFFSET(0x1A486740)

inline static constexpr unsigned int Class_1_B9F3769DF6D57E25_TypeDefinitionIndex = 40490;

class Class_1_B9F3769DF6D57E25 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9DB6F6BB628BF86A*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F3769DF6D57E25__CTOR_OFFSET))(this);
	}

	::Class_1_9DB6F6BB628BF86A* Method_1_224BEB9738AD25D4()
	{
		return ((::Class_1_9DB6F6BB628BF86A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F3769DF6D57E25_METHOD_1_224BEB9738AD25D4_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F3769DF6D57E25_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9F3769DF6D57E25_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
