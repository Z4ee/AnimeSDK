#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_BF3E397EFAF143B7_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x188D1130)
#define CLASS_1_BF3E397EFAF143B7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x188D1060)
#define CLASS_1_BF3E397EFAF143B7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x188D1050)
#define CLASS_1_BF3E397EFAF143B7_METHOD_1_725A39F9CC9D54F4_OFFSET UNITYSDK_OFFSET(0x188D1120)
#define CLASS_1_BF3E397EFAF143B7_METHOD_1_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0x188D12F0)
#define CLASS_1_BF3E397EFAF143B7_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x188D12B0)
#define CLASS_1_BF3E397EFAF143B7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x188D1270)
#define CLASS_1_BF3E397EFAF143B7_METHOD_1_D38C35AD92DD9A26_OFFSET UNITYSDK_OFFSET(0x188D1150)
#define CLASS_1_BF3E397EFAF143B7_METHOD_1_DAB042062F1224E7_OFFSET UNITYSDK_OFFSET(0x188D1480)
#define CLASS_1_BF3E397EFAF143B7_METHOD_1_E2ACF3FF064F9810_OFFSET UNITYSDK_OFFSET(0x188D1070)
#define CLASS_1_BF3E397EFAF143B7_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x188D1140)
#define CLASS_1_BF3E397EFAF143B7__CTOR_OFFSET UNITYSDK_OFFSET(0x188899F0)

inline static constexpr unsigned int Class_1_BF3E397EFAF143B7_TypeDefinitionIndex = 38572;

class Class_1_BF3E397EFAF143B7 : public ::System::Object
{
public:
	::System::IO::MemoryStream* Field_1_0; // 0x10
	::System::IO::BinaryWriter* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 _Offset_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_E2ACF3FF064F9810()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_METHOD_1_E2ACF3FF064F9810_OFFSET))(this);
	}

	::RPG::Client::SectionType Method_1_725A39F9CC9D54F4()
	{
		return ((::RPG::Client::SectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_METHOD_1_725A39F9CC9D54F4_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_SET_OFFSET_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_BF3E397EFAF143B7*>* Method_1_D38C35AD92DD9A26()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_BF3E397EFAF143B7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_METHOD_1_D38C35AD92DD9A26_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_B6BF2A1BCE9B9659(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_METHOD_1_B6BF2A1BCE9B9659_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAB042062F1224E7(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_BF3E397EFAF143B7_METHOD_1_DAB042062F1224E7_OFFSET))(this, a1);
	}
};
