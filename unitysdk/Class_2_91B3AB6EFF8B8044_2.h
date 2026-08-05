#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1392.h"

class Class_0_16E4307DCC419505_877;
class Class_2_208CC9941471731A_1281;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_91B3AB6EFF8B8044_2_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1DD69540)
#define CLASS_2_91B3AB6EFF8B8044_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1DD69080)
#define CLASS_2_91B3AB6EFF8B8044_2_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1DD69640)
#define CLASS_2_91B3AB6EFF8B8044_2_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1DD69820)
#define CLASS_2_91B3AB6EFF8B8044_2_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1DD691A0)
#define CLASS_2_91B3AB6EFF8B8044_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD690C0)

inline static constexpr unsigned int Class_2_91B3AB6EFF8B8044_2_TypeDefinitionIndex = 92932;

class Class_2_91B3AB6EFF8B8044_2 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_877*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1281*>* Field_2_1; // 0x20
	::Struct_2_1862835F8661A21F_1392 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_2_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1281* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1281*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_2_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_2_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B3AB6EFF8B8044_2_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
