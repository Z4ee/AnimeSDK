#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_425BBC3CBFD638A0;
class Class_4_866F4597C134539F;
namespace System::Collections { class IList; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_3C8364272DE0C510_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11FB8300)
#define CLASS_3_3C8364272DE0C510_METHOD_3_C10BF158F2861604_OFFSET UNITYSDK_OFFSET(0x11FB8440)
#define CLASS_3_3C8364272DE0C510_METHOD_3_C474A82F0E10345D_OFFSET UNITYSDK_OFFSET(0x11FB85D0)
#define CLASS_3_3C8364272DE0C510_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11FB8B80)
#define CLASS_3_3C8364272DE0C510_METHOD_3_F4B3618561FD2492_OFFSET UNITYSDK_OFFSET(0x11FB8C10)
#define CLASS_3_3C8364272DE0C510__CTOR_OFFSET UNITYSDK_OFFSET(0x11FB8AD0)

inline static constexpr unsigned int Class_3_3C8364272DE0C510_TypeDefinitionIndex = 80794;

class Class_3_3C8364272DE0C510 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_866F4597C134539F* Field_3_2; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_1; // 0x20
	::Class_4_425BBC3CBFD638A0* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_C10BF158F2861604(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510_METHOD_3_C10BF158F2861604_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_F4B3618561FD2492(::System::Collections::IList* a1, ::System::Collections::IList* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::IList*, ::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510_METHOD_3_F4B3618561FD2492_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::IList* Method_3_C474A82F0E10345D(::System::Collections::IList* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::IList*(*)(::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3C8364272DE0C510_METHOD_3_C474A82F0E10345D_OFFSET))(a1, a2);
	}
};
