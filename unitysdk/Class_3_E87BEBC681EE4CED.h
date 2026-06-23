#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_87411F35FE812764.h"
#include "unitysdk/Struct_2_EADB70559B2B5513.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_E87BEBC681EE4CED_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB7A66E0)
#define CLASS_3_E87BEBC681EE4CED_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB7A6970)
#define CLASS_3_E87BEBC681EE4CED_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xB7A6A00)
#define CLASS_3_E87BEBC681EE4CED_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB7A62B0)
#define CLASS_3_E87BEBC681EE4CED__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7A6730)
#define CLASS_3_E87BEBC681EE4CED__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A67B0)

inline static constexpr unsigned int Class_3_E87BEBC681EE4CED_TypeDefinitionIndex = 42776;

class Class_3_E87BEBC681EE4CED : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0xD1; // 0x0
	::System::Collections::Generic::Dictionary_2<::Struct_2_EADB70559B2B5513, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::Struct_2_EADB70559B2B5513, ::Struct_2_87411F35FE812764>* Field_3_0; // 0x50
	::System::Collections::Generic::Dictionary_2<::Struct_2_EADB70559B2B5513, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_3_2; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E87BEBC681EE4CED__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E87BEBC681EE4CED__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E87BEBC681EE4CED_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E87BEBC681EE4CED_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E87BEBC681EE4CED_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_E87BEBC681EE4CED* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_E87BEBC681EE4CED*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E87BEBC681EE4CED_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
