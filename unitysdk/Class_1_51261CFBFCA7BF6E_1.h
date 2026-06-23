#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_00CDCC1C68AC93EE.h"
#include "unitysdk/Struct_2_00CDCC1C68AC93EE_1.h"
#include "unitysdk/Struct_2_C32040AFC39CAE18.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
template <typename T> class Class_1_B7F81F2F2FEF13C5;

#define CLASS_1_51261CFBFCA7BF6E_1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1347DDE0)
#define CLASS_1_51261CFBFCA7BF6E_1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1347D950)
#define CLASS_1_51261CFBFCA7BF6E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1347E280)

inline static constexpr unsigned int Class_1_51261CFBFCA7BF6E_1_TypeDefinitionIndex = 86212;

class Class_1_51261CFBFCA7BF6E_1 : public ::System::Object
{
public:
	::Class_1_B7F81F2F2FEF13C5<::Struct_2_00CDCC1C68AC93EE>* Field_1_1; // 0x10
	::Class_1_B7F81F2F2FEF13C5<::Struct_2_00CDCC1C68AC93EE_1>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51261CFBFCA7BF6E_1__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_C32040AFC39CAE18 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_C32040AFC39CAE18, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_51261CFBFCA7BF6E_1_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_C32040AFC39CAE18 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_C32040AFC39CAE18(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_51261CFBFCA7BF6E_1_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};
