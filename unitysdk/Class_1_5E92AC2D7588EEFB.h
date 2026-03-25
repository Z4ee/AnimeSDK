#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0158E2E99AA204F4.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5E92AC2D7588EEFB_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0xA1B44C0)
#define CLASS_1_5E92AC2D7588EEFB_METHOD_1_56D858257A31C53F_OFFSET UNITYSDK_OFFSET(0xA1B4510)
#define CLASS_1_5E92AC2D7588EEFB_METHOD_1_E438CFC23961DFD1_OFFSET UNITYSDK_OFFSET(0xA1B43A0)
#define CLASS_1_5E92AC2D7588EEFB__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B45F0)

inline static constexpr unsigned int Class_1_5E92AC2D7588EEFB_TypeDefinitionIndex = 50967;

class Class_1_5E92AC2D7588EEFB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_019938BC9C50B169_2>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E92AC2D7588EEFB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E438CFC23961DFD1(::System::UInt32 a1, ::Struct_2_019938BC9C50B169_2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_5E92AC2D7588EEFB_METHOD_1_E438CFC23961DFD1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5E92AC2D7588EEFB_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_56D858257A31C53F(::System::UInt32 a1, ::Struct_2_0158E2E99AA204F4& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Struct_2_0158E2E99AA204F4&))((::PBYTE)hIl2Cpp + CLASS_1_5E92AC2D7588EEFB_METHOD_1_56D858257A31C53F_OFFSET))(this, a1, a2);
	}
};
