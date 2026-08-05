#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define CLASS_3_76FE4A15F392AA4A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x185C5360)
#define CLASS_3_76FE4A15F392AA4A_METHOD_3_6B015C3E5E148E39_OFFSET UNITYSDK_OFFSET(0x185C5540)
#define CLASS_3_76FE4A15F392AA4A_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x185C56D0)
#define CLASS_3_76FE4A15F392AA4A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x185C5250)
#define CLASS_3_76FE4A15F392AA4A__CCTOR_OFFSET UNITYSDK_OFFSET(0x185C53B0)
#define CLASS_3_76FE4A15F392AA4A__CTOR_OFFSET UNITYSDK_OFFSET(0x185C5430)

inline static constexpr unsigned int Class_3_76FE4A15F392AA4A_TypeDefinitionIndex = 51477;

class Class_3_76FE4A15F392AA4A : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0x73; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::System::UInt32>*>* Field_3_2; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_76FE4A15F392AA4A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76FE4A15F392AA4A__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76FE4A15F392AA4A_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76FE4A15F392AA4A_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_76FE4A15F392AA4A* Method_3_6B015C3E5E148E39()
	{
		return ((::Class_3_76FE4A15F392AA4A*(*)())((::PBYTE)hIl2Cpp + CLASS_3_76FE4A15F392AA4A_METHOD_3_6B015C3E5E148E39_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76FE4A15F392AA4A_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
