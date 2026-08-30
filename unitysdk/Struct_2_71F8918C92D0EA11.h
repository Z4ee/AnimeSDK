#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class NetPacket; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define STRUCT_2_71F8918C92D0EA11_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C66B80)
#define STRUCT_2_71F8918C92D0EA11_METHOD_2_41A4BF0E9EC20FDD_OFFSET UNITYSDK_OFFSET(0x1EACF700)
#define STRUCT_2_71F8918C92D0EA11_METHOD_2_D35B52D5DE566575_OFFSET UNITYSDK_OFFSET(0x7846F0)

inline static constexpr unsigned int Struct_2_71F8918C92D0EA11_TypeDefinitionIndex = 42242;

struct alignas(8) Struct_2_71F8918C92D0EA11
{
	::Class_1_64C1E63642C4A2DF<::RPG::Client::NetPacket*>* KNBOOGCFLBK; // 0x10
	::RPG::Client::NetPacket* PINHJEFCIGM; // 0x18

	static ::Struct_2_71F8918C92D0EA11 Method_2_41A4BF0E9EC20FDD(::Class_1_64C1E63642C4A2DF<::RPG::Client::NetPacket*>* a1)
	{
		return ((::Struct_2_71F8918C92D0EA11(*)(::Class_1_64C1E63642C4A2DF<::RPG::Client::NetPacket*>*))((::PBYTE)hIl2Cpp + STRUCT_2_71F8918C92D0EA11_METHOD_2_41A4BF0E9EC20FDD_OFFSET))(a1);
	}

	::RPG::Client::NetPacket* Method_2_D35B52D5DE566575()
	{
		return ((::RPG::Client::NetPacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_71F8918C92D0EA11_METHOD_2_D35B52D5DE566575_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_71F8918C92D0EA11_DISPOSE_OFFSET))(this);
	}
};
