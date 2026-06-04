#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotMailData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5F94EC6009C0C621_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x138E8940)
#define CLASS_1_5F94EC6009C0C621_METHOD_1_413BEFACA492EE94_OFFSET UNITYSDK_OFFSET(0x138E8B10)
#define CLASS_1_5F94EC6009C0C621_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x138E8C10)
#define CLASS_1_5F94EC6009C0C621__CTOR_OFFSET UNITYSDK_OFFSET(0x138E8990)

inline static constexpr unsigned int Class_1_5F94EC6009C0C621_TypeDefinitionIndex = 63664;

class Class_1_5F94EC6009C0C621 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::TarotMailData*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F94EC6009C0C621__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F94EC6009C0C621_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Boolean Method_1_413BEFACA492EE94()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F94EC6009C0C621_METHOD_1_413BEFACA492EE94_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F94EC6009C0C621_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
