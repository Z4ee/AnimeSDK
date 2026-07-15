#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0CA613F4AB2CAF31__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E7A740)
#define CLASS_1_0CA613F4AB2CAF31__CTOR_OFFSET UNITYSDK_OFFSET(0x14E7A730)

inline static constexpr unsigned int Class_1_0CA613F4AB2CAF31_TypeDefinitionIndex = 70364;

class Class_1_0CA613F4AB2CAF31 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CA613F4AB2CAF31_TypeDefinitionIndex)->GetStaticField(0x4D140);
	}
	// static const ::System::Int32 Field_1_1 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7FFF; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CA613F4AB2CAF31__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CA613F4AB2CAF31__CCTOR_OFFSET))();
	}
};
