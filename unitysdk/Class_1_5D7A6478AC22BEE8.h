#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_169.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1229;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_5D7A6478AC22BEE8_METHOD_1_AF518E2FECFB1139_OFFSET UNITYSDK_OFFSET(0x1DBAF450)
#define CLASS_1_5D7A6478AC22BEE8_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1DBAF7D0)
#define CLASS_1_5D7A6478AC22BEE8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1DBAF400)
#define CLASS_1_5D7A6478AC22BEE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBAF440)

inline static constexpr unsigned int Class_1_5D7A6478AC22BEE8_TypeDefinitionIndex = 89745;

class Class_1_5D7A6478AC22BEE8 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_169 Field_1_0; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_1229*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7A6478AC22BEE8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7A6478AC22BEE8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_AF518E2FECFB1139(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_5D7A6478AC22BEE8_METHOD_1_AF518E2FECFB1139_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7A6478AC22BEE8_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
