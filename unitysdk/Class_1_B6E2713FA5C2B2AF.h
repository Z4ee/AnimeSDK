#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_00CDCC1C68AC93EE.h"
#include "unitysdk/Struct_2_00CDCC1C68AC93EE_1.h"
#include "unitysdk/Struct_2_C32040AFC39CAE18.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
template <typename T> class Class_1_534AF681CC2BD5FD_235;

#define CLASS_1_B6E2713FA5C2B2AF_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11594960)
#define CLASS_1_B6E2713FA5C2B2AF_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x115944E0)
#define CLASS_1_B6E2713FA5C2B2AF__CTOR_OFFSET UNITYSDK_OFFSET(0x11594DF0)

inline static constexpr unsigned int Class_1_B6E2713FA5C2B2AF_TypeDefinitionIndex = 71043;

class Class_1_B6E2713FA5C2B2AF : public ::System::Object
{
public:
	::Class_1_534AF681CC2BD5FD_235<::Struct_2_00CDCC1C68AC93EE>* Field_1_1; // 0x10
	::Class_1_534AF681CC2BD5FD_235<::Struct_2_00CDCC1C68AC93EE_1>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E2713FA5C2B2AF__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_C32040AFC39CAE18 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_C32040AFC39CAE18, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_B6E2713FA5C2B2AF_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_C32040AFC39CAE18 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_C32040AFC39CAE18(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_B6E2713FA5C2B2AF_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
