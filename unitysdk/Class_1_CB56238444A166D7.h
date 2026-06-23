#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1070.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1228;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_CB56238444A166D7_METHOD_1_AF518E2FECFB1139_OFFSET UNITYSDK_OFFSET(0x1DA5D390)
#define CLASS_1_CB56238444A166D7_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1DA5D710)
#define CLASS_1_CB56238444A166D7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1DA5D340)
#define CLASS_1_CB56238444A166D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5D380)

inline static constexpr unsigned int Class_1_CB56238444A166D7_TypeDefinitionIndex = 89759;

class Class_1_CB56238444A166D7 : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_1228*>* Field_1_1; // 0x10
	::Struct_2_1862835F8661A21F_1070 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB56238444A166D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB56238444A166D7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_AF518E2FECFB1139(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_CB56238444A166D7_METHOD_1_AF518E2FECFB1139_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB56238444A166D7_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
