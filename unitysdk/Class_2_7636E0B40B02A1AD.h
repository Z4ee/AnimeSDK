#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1092.h"

class Class_2_208CC9941471731A_1199;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7636E0B40B02A1AD_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1D9C31C0)
#define CLASS_2_7636E0B40B02A1AD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1D9C2B00)
#define CLASS_2_7636E0B40B02A1AD_METHOD_2_CCAFA254FE21768F_OFFSET UNITYSDK_OFFSET(0x1D9C2C40)
#define CLASS_2_7636E0B40B02A1AD_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1D9C3270)
#define CLASS_2_7636E0B40B02A1AD_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1D9C3450)
#define CLASS_2_7636E0B40B02A1AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C2B40)

inline static constexpr unsigned int Class_2_7636E0B40B02A1AD_TypeDefinitionIndex = 91608;

class Class_2_7636E0B40B02A1AD : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1199*>*>* Field_2_0; // 0x18
	::Struct_2_1862835F8661A21F_1092 Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1199*>* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CCAFA254FE21768F(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_CCAFA254FE21768F_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1199* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_1199*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7636E0B40B02A1AD_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}
};
