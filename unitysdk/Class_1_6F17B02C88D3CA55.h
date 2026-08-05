#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A8E24757EFB99B0.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_117;
namespace System { class String; }

#define CLASS_1_6F17B02C88D3CA55_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x12593990)
#define CLASS_1_6F17B02C88D3CA55_METHOD_1_465CE7764E57D661_OFFSET UNITYSDK_OFFSET(0x12593820)
#define CLASS_1_6F17B02C88D3CA55_METHOD_1_8040BAF29B6E8032_1_OFFSET UNITYSDK_OFFSET(0x12593B30)
#define CLASS_1_6F17B02C88D3CA55_METHOD_1_8040BAF29B6E8032_OFFSET UNITYSDK_OFFSET(0x12593A00)
#define CLASS_1_6F17B02C88D3CA55_METHOD_1_FA17B1D576A8D703_OFFSET UNITYSDK_OFFSET(0x12593A50)
#define CLASS_1_6F17B02C88D3CA55__CTOR_OFFSET UNITYSDK_OFFSET(0x125936F0)

inline static constexpr unsigned int Class_1_6F17B02C88D3CA55_TypeDefinitionIndex = 42137;

class Class_1_6F17B02C88D3CA55 : public ::System::Object
{
public:
	::System::Int32 Field_1_7; // 0x10
	::System::Int32 Field_1_0; // 0x14
	::System::Int32 Field_1_4; // 0x18
	::Enum_3_6A8E24757EFB99B0 Field_1_5; // 0x1C
	::System::Int32 Field_1_6; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_465CE7764E57D661()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55_METHOD_1_465CE7764E57D661_OFFSET))(this);
	}

	::System::String* Method_1_8040BAF29B6E8032()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55_METHOD_1_8040BAF29B6E8032_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_117* Method_1_FA17B1D576A8D703()
	{
		return ((::Class_2_208CC9941471731A_117*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55_METHOD_1_FA17B1D576A8D703_OFFSET))(this);
	}

	::System::String* Method_1_8040BAF29B6E8032_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55_METHOD_1_8040BAF29B6E8032_1_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F17B02C88D3CA55_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
