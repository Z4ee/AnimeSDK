#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_839.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_1174;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_F6886563F49244EA_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1CCFA5F0)
#define CLASS_2_F6886563F49244EA_METHOD_2_85E070F3B697BB7A_OFFSET UNITYSDK_OFFSET(0x1CCFA920)
#define CLASS_2_F6886563F49244EA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CCFA0B0)
#define CLASS_2_F6886563F49244EA_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1CCFA410)
#define CLASS_2_F6886563F49244EA_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1CCFA1F0)
#define CLASS_2_F6886563F49244EA_METHOD_2_DC584C16EC16BB44_OFFSET UNITYSDK_OFFSET(0x1CCFA710)
#define CLASS_2_F6886563F49244EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCFA0F0)

inline static constexpr unsigned int Class_2_F6886563F49244EA_TypeDefinitionIndex = 88523;

class Class_2_F6886563F49244EA : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Class_2_208CC9941471731A_1174*>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1174*>* Field_2_1; // 0x20
	::Struct_2_1862835F8661A21F_839 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6886563F49244EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6886563F49244EA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6886563F49244EA_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1174* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1174*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F6886563F49244EA_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6886563F49244EA_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1174* Method_2_DC584C16EC16BB44(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Class_2_208CC9941471731A_1174*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F6886563F49244EA_METHOD_2_DC584C16EC16BB44_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_85E070F3B697BB7A(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_F6886563F49244EA_METHOD_2_85E070F3B697BB7A_OFFSET))(this, a1);
	}
};
