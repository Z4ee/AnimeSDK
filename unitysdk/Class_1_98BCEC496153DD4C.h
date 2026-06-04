#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PacketStatus.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_274;
namespace RPG::Client { class NetPacket; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_98BCEC496153DD4C_METHOD_1_5280BB276524983C_OFFSET UNITYSDK_OFFSET(0x19F8ED00)
#define CLASS_1_98BCEC496153DD4C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x19F8E4F0)
#define CLASS_1_98BCEC496153DD4C_METHOD_1_C139B9210301839F_OFFSET UNITYSDK_OFFSET(0x19F7E640)
#define CLASS_1_98BCEC496153DD4C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F7E220)

inline static constexpr unsigned int Class_1_98BCEC496153DD4C_TypeDefinitionIndex = 40499;

class Class_1_98BCEC496153DD4C : public ::System::Object
{
public:
	::System::IO::MemoryStream* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_274* Field_1_1; // 0x18
	::System::IO::MemoryStream* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98BCEC496153DD4C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_274* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_274*))((::PBYTE)hIl2Cpp + CLASS_1_98BCEC496153DD4C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
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
