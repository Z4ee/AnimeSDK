#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F23B38E9DDCD5F0A.h"

class Class_1_B45EDAC680D99A10;
class Class_1_F1AAAF1AFF640C0F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9CE3D9AFC0601365_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x1B539840)
#define CLASS_2_9CE3D9AFC0601365_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1B539A40)
#define CLASS_2_9CE3D9AFC0601365_METHOD_2_A2BF7CEF3406D743_OFFSET UNITYSDK_OFFSET(0x1B5396B0)
#define CLASS_2_9CE3D9AFC0601365__CTOR_OFFSET UNITYSDK_OFFSET(0x1B539970)

inline static constexpr unsigned int Class_2_9CE3D9AFC0601365_TypeDefinitionIndex = 35815;

class Class_2_9CE3D9AFC0601365 : public ::Class_1_F23B38E9DDCD5F0A
{
public:
	::Class_1_F1AAAF1AFF640C0F* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CE3D9AFC0601365__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_B45EDAC680D99A10*>* Method_2_A2BF7CEF3406D743()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B45EDAC680D99A10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CE3D9AFC0601365_METHOD_2_A2BF7CEF3406D743_OFFSET))(this);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CE3D9AFC0601365_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CE3D9AFC0601365_METHOD_2_937F8473216A3162_OFFSET))(this);
	}
};
