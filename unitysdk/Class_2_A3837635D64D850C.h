#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace Proto { class AntiAddictScNotify; }
namespace System { class Object; }

#define CLASS_2_A3837635D64D850C_INIT_OFFSET UNITYSDK_OFFSET(0x18A913E0)
#define CLASS_2_A3837635D64D850C_METHOD_2_99272A34A22F949E_OFFSET UNITYSDK_OFFSET(0x18A91BF0)
#define CLASS_2_A3837635D64D850C_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x18A91860)
#define CLASS_2_A3837635D64D850C_METHOD_2_FD0A2873FA804637_OFFSET UNITYSDK_OFFSET(0x18A916E0)
#define CLASS_2_A3837635D64D850C__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x18A91550)
#define CLASS_2_A3837635D64D850C__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x18A91430)
#define CLASS_2_A3837635D64D850C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A91C40)

inline static constexpr unsigned int Class_2_A3837635D64D850C_TypeDefinitionIndex = 62493;

class Class_2_A3837635D64D850C : public ::RPG::Client::BaseModule
{
public:
	::Proto::AntiAddictScNotify* KJBBMBPMAHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3837635D64D850C__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3837635D64D850C_INIT_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3837635D64D850C__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3837635D64D850C__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_FD0A2873FA804637(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A3837635D64D850C_METHOD_2_FD0A2873FA804637_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99272A34A22F949E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A3837635D64D850C_METHOD_2_99272A34A22F949E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3837635D64D850C_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}
};
