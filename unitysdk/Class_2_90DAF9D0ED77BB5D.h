#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_13AECAB1AEC5B524.h"

class Class_2_B62C942A2774BBB8;
class Class_3_1699D6295DC3F818;
class Class_3_28A3A399628C6698;
class Class_3_A9E2939AF1A43E78;
class Class_3_C06E38DCB063E975;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_90DAF9D0ED77BB5D_METHOD_2_143284F0F316140B_OFFSET UNITYSDK_OFFSET(0x160A26D0)
#define CLASS_2_90DAF9D0ED77BB5D_METHOD_2_3D3C59526D064E7E_OFFSET UNITYSDK_OFFSET(0x160A2870)
#define CLASS_2_90DAF9D0ED77BB5D_METHOD_2_6597D4884E1FE329_OFFSET UNITYSDK_OFFSET(0x160A24C0)
#define CLASS_2_90DAF9D0ED77BB5D_METHOD_2_6DDF2816F068F609_OFFSET UNITYSDK_OFFSET(0x160A2A30)
#define CLASS_2_90DAF9D0ED77BB5D_METHOD_2_A3CFCBA66600198E_OFFSET UNITYSDK_OFFSET(0x160A22C0)
#define CLASS_2_90DAF9D0ED77BB5D__CTOR_OFFSET UNITYSDK_OFFSET(0x160A25F0)

inline static constexpr unsigned int Class_2_90DAF9D0ED77BB5D_TypeDefinitionIndex = 84815;

class Class_2_90DAF9D0ED77BB5D : public ::Class_1_13AECAB1AEC5B524
{
public:
	::Class_3_A9E2939AF1A43E78* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90DAF9D0ED77BB5D__CTOR_OFFSET))(this);
	}

	::System::Object* Method_2_A3CFCBA66600198E(::System::String* a1, ::System::Int32 a2, ::Class_2_B62C942A2774BBB8* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_2_B62C942A2774BBB8*))((::PBYTE)hIl2Cpp + CLASS_2_90DAF9D0ED77BB5D_METHOD_2_A3CFCBA66600198E_OFFSET))(this, a1, a2, a3);
	}

	::Class_3_C06E38DCB063E975* Method_2_6597D4884E1FE329(::System::Int32 a1)
	{
		return ((::Class_3_C06E38DCB063E975*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_90DAF9D0ED77BB5D_METHOD_2_6597D4884E1FE329_OFFSET))(this, a1);
	}

	::Class_3_28A3A399628C6698* Method_2_143284F0F316140B(::System::String* a1)
	{
		return ((::Class_3_28A3A399628C6698*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90DAF9D0ED77BB5D_METHOD_2_143284F0F316140B_OFFSET))(this, a1);
	}

	::Class_3_1699D6295DC3F818* Method_2_3D3C59526D064E7E(::System::Int32 a1)
	{
		return ((::Class_3_1699D6295DC3F818*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_90DAF9D0ED77BB5D_METHOD_2_3D3C59526D064E7E_OFFSET))(this, a1);
	}

	::Class_3_C06E38DCB063E975* Method_2_6DDF2816F068F609(::System::String* a1, ::System::Int32 a2, ::Class_2_B62C942A2774BBB8* a3)
	{
		return ((::Class_3_C06E38DCB063E975*(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_2_B62C942A2774BBB8*))((::PBYTE)hIl2Cpp + CLASS_2_90DAF9D0ED77BB5D_METHOD_2_6DDF2816F068F609_OFFSET))(this, a1, a2, a3);
	}
};
