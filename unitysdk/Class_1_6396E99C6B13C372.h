#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6396E99C6B13C372_METHOD_1_04AF66402B9859B9_1_OFFSET UNITYSDK_OFFSET(0xC433F60)
#define CLASS_1_6396E99C6B13C372_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xC433F10)
#define CLASS_1_6396E99C6B13C372_METHOD_1_61ED2C9EF0634039_OFFSET UNITYSDK_OFFSET(0xC433E20)
#define CLASS_1_6396E99C6B13C372_METHOD_1_BB63911B3591DFC5_OFFSET UNITYSDK_OFFSET(0xC433CE0)
#define CLASS_1_6396E99C6B13C372_METHOD_1_C800BAB3D81AD7E4_OFFSET UNITYSDK_OFFSET(0xC433FB0)
#define CLASS_1_6396E99C6B13C372_METHOD_1_CC474528D01CF2C3_OFFSET UNITYSDK_OFFSET(0xC433AC0)
#define CLASS_1_6396E99C6B13C372_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xC433A50)
#define CLASS_1_6396E99C6B13C372__CTOR_OFFSET UNITYSDK_OFFSET(0xC433FF0)

inline static constexpr unsigned int Class_1_6396E99C6B13C372_TypeDefinitionIndex = 65764;

class Class_1_6396E99C6B13C372 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Proto::ItemCost*>* FIEMGMJAOBM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_CC474528D01CF2C3(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372_METHOD_1_CC474528D01CF2C3_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_BB63911B3591DFC5(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372_METHOD_1_BB63911B3591DFC5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_61ED2C9EF0634039(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372_METHOD_1_61ED2C9EF0634039_OFFSET))(this, a1);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_04AF66402B9859B9_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372_METHOD_1_04AF66402B9859B9_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Proto::ItemCost*>* Method_1_C800BAB3D81AD7E4()
	{
		return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6396E99C6B13C372_METHOD_1_C800BAB3D81AD7E4_OFFSET))(this);
	}
};
