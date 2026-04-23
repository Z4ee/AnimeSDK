#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_E61B6BD5F01F8A04_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x17AF62B0)
#define CLASS_1_E61B6BD5F01F8A04_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17AF60A0)
#define CLASS_1_E61B6BD5F01F8A04_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17AF6090)
#define CLASS_1_E61B6BD5F01F8A04_METHOD_1_07BF3EF95ADEC810_OFFSET UNITYSDK_OFFSET(0x17AF6570)
#define CLASS_1_E61B6BD5F01F8A04_METHOD_1_725A39F9CC9D54F4_OFFSET UNITYSDK_OFFSET(0x17AF62A0)
#define CLASS_1_E61B6BD5F01F8A04_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17AF6530)
#define CLASS_1_E61B6BD5F01F8A04_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17AF64F0)
#define CLASS_1_E61B6BD5F01F8A04_METHOD_1_D38C35AD92DD9A26_OFFSET UNITYSDK_OFFSET(0x17AF63D0)
#define CLASS_1_E61B6BD5F01F8A04_METHOD_1_DAB042062F1224E7_OFFSET UNITYSDK_OFFSET(0x17AF66D0)
#define CLASS_1_E61B6BD5F01F8A04_METHOD_1_E2ACF3FF064F9810_OFFSET UNITYSDK_OFFSET(0x17AF60B0)
#define CLASS_1_E61B6BD5F01F8A04_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x17AF62C0)
#define CLASS_1_E61B6BD5F01F8A04__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF62D0)

inline static constexpr unsigned int Class_1_E61B6BD5F01F8A04_TypeDefinitionIndex = 37835;

class Class_1_E61B6BD5F01F8A04 : public ::System::Object
{
public:
	::System::IO::BinaryWriter* Field_1_1; // 0x10
	::System::IO::MemoryStream* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 _Offset_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_E2ACF3FF064F9810()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_METHOD_1_E2ACF3FF064F9810_OFFSET))(this);
	}

	::RPG::Client::SectionType Method_1_725A39F9CC9D54F4()
	{
		return ((::RPG::Client::SectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_METHOD_1_725A39F9CC9D54F4_OFFSET))(this);
	}

	::System::UInt32 get_Offset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_SET_OFFSET_OFFSET))(this, value);
	}

	::RPG::Client::ScopeUser_1<::Class_1_E61B6BD5F01F8A04*>* Method_1_D38C35AD92DD9A26()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_E61B6BD5F01F8A04*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_METHOD_1_D38C35AD92DD9A26_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_07BF3EF95ADEC810(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_METHOD_1_07BF3EF95ADEC810_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAB042062F1224E7(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_E61B6BD5F01F8A04_METHOD_1_DAB042062F1224E7_OFFSET))(this, a1);
	}
};
