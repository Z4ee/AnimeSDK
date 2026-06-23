#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_672E33A544FDB8BF_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x142FD510)
#define CLASS_2_672E33A544FDB8BF_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x142FD160)
#define CLASS_2_672E33A544FDB8BF__CTOR_OFFSET UNITYSDK_OFFSET(0x142FD4A0)

inline static constexpr unsigned int Class_2_672E33A544FDB8BF_TypeDefinitionIndex = 85347;

class Class_2_672E33A544FDB8BF : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_2; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_4; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_3; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_5; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_672E33A544FDB8BF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_672E33A544FDB8BF_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_672E33A544FDB8BF_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
