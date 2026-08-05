#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4B3401D95328DA92_Struct_2_6CB98E3CD32CB04C.h"
#include "unitysdk/System/Object.h"

class Class_2_4B3401D95328DA92_Class_1_8F7D53CB3B2DFC63;
class Class_3_472679C84451629A_31;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4B3401D95328DA92_CLASS_1_71832F53CCED48DC_METHOD_1_06EBB4DB5C4E1E4C_OFFSET UNITYSDK_OFFSET(0x140C0800)
#define CLASS_2_4B3401D95328DA92_CLASS_1_71832F53CCED48DC_METHOD_1_37DAC3C8AEFFBA9D_OFFSET UNITYSDK_OFFSET(0x140C1060)
#define CLASS_2_4B3401D95328DA92_CLASS_1_71832F53CCED48DC_METHOD_1_563CDA762AC6FCD8_OFFSET UNITYSDK_OFFSET(0x140C0890)
#define CLASS_2_4B3401D95328DA92_CLASS_1_71832F53CCED48DC__CTOR_OFFSET UNITYSDK_OFFSET(0x140C07F0)

inline static constexpr unsigned int Class_2_4B3401D95328DA92_Class_1_71832F53CCED48DC_TypeDefinitionIndex = 68318;

class Class_2_4B3401D95328DA92_Class_1_71832F53CCED48DC : public ::System::Object
{
public:
	::Class_2_4B3401D95328DA92_Class_1_8F7D53CB3B2DFC63* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_4B3401D95328DA92_Struct_2_6CB98E3CD32CB04C>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_71832F53CCED48DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_06EBB4DB5C4E1E4C(::Class_3_472679C84451629A_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_31*))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_71832F53CCED48DC_METHOD_1_06EBB4DB5C4E1E4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_37DAC3C8AEFFBA9D(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_71832F53CCED48DC_METHOD_1_37DAC3C8AEFFBA9D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_563CDA762AC6FCD8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_71832F53CCED48DC_METHOD_1_563CDA762AC6FCD8_OFFSET))(this);
	}
};
