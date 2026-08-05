#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9F7DC5719B84A4A9_METHOD_1_146906762FDAB551_OFFSET UNITYSDK_OFFSET(0x1E03DBC0)
#define CLASS_1_9F7DC5719B84A4A9_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1E03DAB0)
#define CLASS_1_9F7DC5719B84A4A9_METHOD_1_8F7AD00CE70D0A7B_OFFSET UNITYSDK_OFFSET(0x1E03DCC0)
#define CLASS_1_9F7DC5719B84A4A9_METHOD_1_9F1C127FA93086D9_OFFSET UNITYSDK_OFFSET(0x1E03DA00)
#define CLASS_1_9F7DC5719B84A4A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E03D980)

inline static constexpr unsigned int Class_1_9F7DC5719B84A4A9_TypeDefinitionIndex = 92003;

class Class_1_9F7DC5719B84A4A9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7DC5719B84A4A9__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_9F1C127FA93086D9(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F7DC5719B84A4A9_METHOD_1_9F1C127FA93086D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F7DC5719B84A4A9_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_146906762FDAB551(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F7DC5719B84A4A9_METHOD_1_146906762FDAB551_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8F7AD00CE70D0A7B(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F7DC5719B84A4A9_METHOD_1_8F7AD00CE70D0A7B_OFFSET))(this, a1, a2);
	}
};
