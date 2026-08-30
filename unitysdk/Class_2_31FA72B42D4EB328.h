#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/IO/BinaryReader.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define CLASS_2_31FA72B42D4EB328_READDECIMAL_OFFSET UNITYSDK_OFFSET(0x1408E330)
#define CLASS_2_31FA72B42D4EB328_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1408DCF0)
#define CLASS_2_31FA72B42D4EB328_READINT16_OFFSET UNITYSDK_OFFSET(0x1408C2B0)
#define CLASS_2_31FA72B42D4EB328_READINT32_OFFSET UNITYSDK_OFFSET(0x1408C7B0)
#define CLASS_2_31FA72B42D4EB328_READINT64_OFFSET UNITYSDK_OFFSET(0x1408CE10)
#define CLASS_2_31FA72B42D4EB328_READSINGLE_OFFSET UNITYSDK_OFFSET(0x1408D910)
#define CLASS_2_31FA72B42D4EB328_READSTRING_OFFSET UNITYSDK_OFFSET(0x1408E540)
#define CLASS_2_31FA72B42D4EB328_READUINT16_OFFSET UNITYSDK_OFFSET(0x1408C530)
#define CLASS_2_31FA72B42D4EB328_READUINT32_OFFSET UNITYSDK_OFFSET(0x1408CA40)
#define CLASS_2_31FA72B42D4EB328_READUINT64_OFFSET UNITYSDK_OFFSET(0x1408D2F0)
#define CLASS_2_31FA72B42D4EB328__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1408C1D0)
#define CLASS_2_31FA72B42D4EB328__CTOR_OFFSET UNITYSDK_OFFSET(0x1408C100)

inline static constexpr unsigned int Class_2_31FA72B42D4EB328_TypeDefinitionIndex = 40076;

class Class_2_31FA72B42D4EB328 : public ::System::IO::BinaryReader
{
public:
	::System::Void _ctor(::System::IO::Stream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::IO::Stream* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Int16 ReadInt16()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328_READINT16_OFFSET))(this);
	}

	::System::UInt16 ReadUInt16()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328_READUINT16_OFFSET))(this);
	}

	::System::Int32 ReadInt32()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328_READINT32_OFFSET))(this);
	}

	::System::UInt32 ReadUInt32()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328_READUINT32_OFFSET))(this);
	}

	::System::Int64 ReadInt64()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328_READINT64_OFFSET))(this);
	}

	::System::UInt64 ReadUInt64()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328_READUINT64_OFFSET))(this);
	}

	::System::Single ReadSingle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328_READSINGLE_OFFSET))(this);
	}

	::System::Double ReadDouble()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328_READDOUBLE_OFFSET))(this);
	}

	::System::Decimal ReadDecimal()
	{
		return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328_READDECIMAL_OFFSET))(this);
	}

	::System::String* ReadString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31FA72B42D4EB328_READSTRING_OFFSET))(this);
	}
};
