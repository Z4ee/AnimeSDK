#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PacketStatus.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_301;
namespace RPG::Client { class NetPacket; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_98BCEC496153DD4C_METHOD_1_5280BB276524983C_OFFSET UNITYSDK_OFFSET(0x1EAD7F10)
#define CLASS_1_98BCEC496153DD4C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x1EAD75A0)
#define CLASS_1_98BCEC496153DD4C_METHOD_1_C139B9210301839F_OFFSET UNITYSDK_OFFSET(0x1EAC76A0)
#define CLASS_1_98BCEC496153DD4C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC7210)

inline static constexpr unsigned int Class_1_98BCEC496153DD4C_TypeDefinitionIndex = 42274;

class Class_1_98BCEC496153DD4C : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_301* HBDEAALOGJG; // 0x10
	::System::IO::MemoryStream* FNJAAAICEPM; // 0x18
	::System::IO::MemoryStream* LKHIIFIOOBN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98BCEC496153DD4C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_301* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_301*))((::PBYTE)hIl2Cpp + CLASS_1_98BCEC496153DD4C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}

	::System::IO::MemoryStream* Method_1_C139B9210301839F(::RPG::Client::NetPacket* a1)
	{
		return ((::System::IO::MemoryStream*(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + CLASS_1_98BCEC496153DD4C_METHOD_1_C139B9210301839F_OFFSET))(this, a1);
	}

	::RPG::Client::NetPacket* Method_1_5280BB276524983C(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::Client::PacketStatus& a4)
	{
		return ((::RPG::Client::NetPacket*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::RPG::Client::PacketStatus&))((::PBYTE)hIl2Cpp + CLASS_1_98BCEC496153DD4C_METHOD_1_5280BB276524983C_OFFSET))(this, a1, a2, a3, a4);
	}
};
