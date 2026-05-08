#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_113E8525202B82B4_METHOD_2_299D15D4F45EDCDB_OFFSET UNITYSDK_OFFSET(0x11E74720)
#define CLASS_2_113E8525202B82B4_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x11E74690)
#define CLASS_2_113E8525202B82B4_METHOD_2_B2D2BB619B46DA7F_1_OFFSET UNITYSDK_OFFSET(0x11E74980)
#define CLASS_2_113E8525202B82B4_METHOD_2_B2D2BB619B46DA7F_OFFSET UNITYSDK_OFFSET(0x11E74820)
#define CLASS_2_113E8525202B82B4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11E74790)
#define CLASS_2_113E8525202B82B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E74610)
#define CLASS_2_113E8525202B82B4__CTOR_OFFSET UNITYSDK_OFFSET(0x11E74680)

inline static constexpr unsigned int Class_2_113E8525202B82B4_TypeDefinitionIndex = 53074;

class Class_2_113E8525202B82B4 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x97; // 0x0
	::System::Boolean Field_2_2; // 0x20
	::System::Double Field_2_1; // 0x28
	::System::Double Field_2_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_113E8525202B82B4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_113E8525202B82B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_113E8525202B82B4_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	static ::System::Double Method_2_299D15D4F45EDCDB(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_113E8525202B82B4_METHOD_2_299D15D4F45EDCDB_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_113E8525202B82B4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B2D2BB619B46DA7F(::System::Double a1, ::System::Double a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_113E8525202B82B4_METHOD_2_B2D2BB619B46DA7F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B2D2BB619B46DA7F_1(::System::Double a1, ::System::Double a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_113E8525202B82B4_METHOD_2_B2D2BB619B46DA7F_1_OFFSET))(this, a1, a2, a3);
	}
};
