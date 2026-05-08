#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0464892ADF5EB45D_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x133F3BF0)
#define CLASS_2_0464892ADF5EB45D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x133F3C80)
#define CLASS_2_0464892ADF5EB45D__CCTOR_OFFSET UNITYSDK_OFFSET(0x133F3B70)
#define CLASS_2_0464892ADF5EB45D__CTOR_OFFSET UNITYSDK_OFFSET(0x133F3BE0)

inline static constexpr unsigned int Class_2_0464892ADF5EB45D_TypeDefinitionIndex = 78768;

class Class_2_0464892ADF5EB45D : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x73; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0464892ADF5EB45D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0464892ADF5EB45D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0464892ADF5EB45D_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0464892ADF5EB45D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
