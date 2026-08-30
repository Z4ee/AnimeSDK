#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E825E3D3A62B6E0;
class Class_1_CC76D1702CC17C09_8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AF3961F295BCE491_METHOD_1_10E14D02D9EE6898_OFFSET UNITYSDK_OFFSET(0x1A821EF0)
#define CLASS_1_AF3961F295BCE491_METHOD_1_2F7B284B944A4637_OFFSET UNITYSDK_OFFSET(0x1A821DC0)
#define CLASS_1_AF3961F295BCE491__CTOR_OFFSET UNITYSDK_OFFSET(0x1A821FD0)

inline static constexpr unsigned int Class_1_AF3961F295BCE491_TypeDefinitionIndex = 78733;

class Class_1_AF3961F295BCE491 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_CC76D1702CC17C09_8*>* KAMODBKAFLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF3961F295BCE491__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2F7B284B944A4637(::System::Collections::Generic::List_1<::Class_1_9E825E3D3A62B6E0*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9E825E3D3A62B6E0*>*))((::PBYTE)hIl2Cpp + CLASS_1_AF3961F295BCE491_METHOD_1_2F7B284B944A4637_OFFSET))(this, a1);
	}

	::Class_1_CC76D1702CC17C09_8* Method_1_10E14D02D9EE6898(::System::UInt32 a1)
	{
		return ((::Class_1_CC76D1702CC17C09_8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF3961F295BCE491_METHOD_1_10E14D02D9EE6898_OFFSET))(this, a1);
	}
};
