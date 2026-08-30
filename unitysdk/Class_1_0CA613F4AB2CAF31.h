#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0CA613F4AB2CAF31__CCTOR_OFFSET UNITYSDK_OFFSET(0x1684C890)
#define CLASS_1_0CA613F4AB2CAF31__CTOR_OFFSET UNITYSDK_OFFSET(0x1684C880)

inline static constexpr unsigned int Class_1_0CA613F4AB2CAF31_TypeDefinitionIndex = 73665;

class Class_1_0CA613F4AB2CAF31 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_JNACBACPDEM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CA613F4AB2CAF31_TypeDefinitionIndex)->GetStaticField(0xB4E0);
	}
	// static const ::System::Int32 NLCDGIPGFDJ = 0x0; // 0x0
	// static const ::System::Int32 BFLENEMBIBM = 0x1; // 0x0
	// static const ::System::Int32 PDBPCBILEBP = 0x2; // 0x0
	// static const ::System::Int32 JPANAKLCINB = 0xB; // 0x0
	// static const ::System::Int32 DONAIDKHFFA = 0xC; // 0x0
	// static const ::System::Int32 PJAAADFOKKC = 0x7FFF; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CA613F4AB2CAF31__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CA613F4AB2CAF31__CCTOR_OFFSET))();
	}
};
