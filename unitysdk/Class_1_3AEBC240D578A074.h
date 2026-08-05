#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3AEBC240D578A074_METHOD_1_6BE673A33B395E7E_OFFSET UNITYSDK_OFFSET(0x150C7B60)
#define CLASS_1_3AEBC240D578A074_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x150C7C60)
#define CLASS_1_3AEBC240D578A074_METHOD_1_BF4DB3A269192371_OFFSET UNITYSDK_OFFSET(0x150C78C0)
#define CLASS_1_3AEBC240D578A074_METHOD_1_C50E8FF4CD0CF45D_OFFSET UNITYSDK_OFFSET(0x150C79E0)
#define CLASS_1_3AEBC240D578A074_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x150C7C10)
#define CLASS_1_3AEBC240D578A074__CTOR_OFFSET UNITYSDK_OFFSET(0x150C7800)

inline static constexpr unsigned int Class_1_3AEBC240D578A074_TypeDefinitionIndex = 58558;

class Class_1_3AEBC240D578A074 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x20; // 0x0
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_6; // 0x10
	::System::UInt32 Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AEBC240D578A074__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BF4DB3A269192371(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3AEBC240D578A074_METHOD_1_BF4DB3A269192371_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C50E8FF4CD0CF45D(::System::UInt32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3AEBC240D578A074_METHOD_1_C50E8FF4CD0CF45D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6BE673A33B395E7E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3AEBC240D578A074_METHOD_1_6BE673A33B395E7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AEBC240D578A074_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AEBC240D578A074_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}
};
