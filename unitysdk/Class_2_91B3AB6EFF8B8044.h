#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_24.h"

class Class_0_16E4307DCC419505_865;
class Class_2_208CC9941471731A_1238;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1D2A1E70)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D2A1B30)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1D2A22F0)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1D2A1C50)
#define CLASS_2_91B3AB6EFF8B8044_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1D2A1F60)
#define CLASS_2_91B3AB6EFF8B8044__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A1B70)

inline static constexpr unsigned int Class_2_91B3AB6EFF8B8044_TypeDefinitionIndex = 91942;

class Class_2_91B3AB6EFF8B8044 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_865*>* Field_2_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1238*>* Field_2_0; // 0x20
	::Struct_2_1862835F8661A21F_24 Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1238* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1238*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}
};
