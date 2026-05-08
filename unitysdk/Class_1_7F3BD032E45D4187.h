#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_143;
namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_7F3BD032E45D4187_METHOD_1_133080AF83EB83BF_OFFSET UNITYSDK_OFFSET(0x18655760)
#define CLASS_1_7F3BD032E45D4187_METHOD_1_1B31D4659D6ABF0E_OFFSET UNITYSDK_OFFSET(0x18655870)
#define CLASS_1_7F3BD032E45D4187_METHOD_1_A304B750D02A2899_OFFSET UNITYSDK_OFFSET(0x186557C0)
#define CLASS_1_7F3BD032E45D4187__CCTOR_OFFSET UNITYSDK_OFFSET(0x18655830)
#define CLASS_1_7F3BD032E45D4187__CTOR_OFFSET UNITYSDK_OFFSET(0x18655820)

inline static constexpr unsigned int Class_1_7F3BD032E45D4187_TypeDefinitionIndex = 81253;

class Class_1_7F3BD032E45D4187 : public ::System::Object
{
public:
	static ::Class_1_7F3BD032E45D4187** StaticGet_Field_1_0()
	{
		return (::Class_1_7F3BD032E45D4187**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F3BD032E45D4187_TypeDefinitionIndex)->GetStaticField(0x40C00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F3BD032E45D4187__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F3BD032E45D4187__CCTOR_OFFSET))();
	}

	::System::Void Method_1_133080AF83EB83BF(::MessagePack::MessagePackWriter& a1, ::Class_0_16E4307DCC419505_143* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Class_0_16E4307DCC419505_143*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7F3BD032E45D4187_METHOD_1_133080AF83EB83BF_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_143* Method_1_A304B750D02A2899(::Struct_2_E147DFD2A4EE8B0B& a1, ::MessagePack::MessagePackReader& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_143*(*)(::PVOID, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7F3BD032E45D4187_METHOD_1_A304B750D02A2899_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_143* Method_1_1B31D4659D6ABF0E(::Struct_2_E147DFD2A4EE8B0B& a1, ::MessagePack::MessagePackReader& a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::Class_0_16E4307DCC419505_143*(*)(::PVOID, ::Struct_2_E147DFD2A4EE8B0B&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_7F3BD032E45D4187_METHOD_1_1B31D4659D6ABF0E_OFFSET))(this, a1, a2, a3);
	}
};
