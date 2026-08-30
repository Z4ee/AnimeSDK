#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AEC3A955120B8107_ProcessorType.h"
#include "unitysdk/System/Object.h"

class Class_1_AEC3A955120B8107_Class_3_B8B36145F8ED68E8;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_KeyCollection; }

#define CLASS_1_AEC3A955120B8107_METHOD_1_0FFBDE5FB46DBA21_OFFSET UNITYSDK_OFFSET(0x156062F0)
#define CLASS_1_AEC3A955120B8107_METHOD_1_7863ECEDEDC5519D_OFFSET UNITYSDK_OFFSET(0x15606290)
#define CLASS_1_AEC3A955120B8107_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x15605C40)
#define CLASS_1_AEC3A955120B8107_METHOD_1_BABB8B3FA01314A1_OFFSET UNITYSDK_OFFSET(0x15605B60)
#define CLASS_1_AEC3A955120B8107__CTOR_OFFSET UNITYSDK_OFFSET(0x156061B0)

inline static constexpr unsigned int Class_1_AEC3A955120B8107_TypeDefinitionIndex = 49508;

class Class_1_AEC3A955120B8107 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_AEC3A955120B8107_ProcessorType>* AIIKOFMNHII; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_AEC3A955120B8107_ProcessorType, ::Class_1_AEC3A955120B8107_Class_3_B8B36145F8ED68E8*>* JFEMAJLJHNG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEC3A955120B8107__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2_KeyCollection<::System::Type*, ::Class_1_AEC3A955120B8107_ProcessorType>* Method_1_BABB8B3FA01314A1()
	{
		return ((::System::Collections::Generic::Dictionary_2_KeyCollection<::System::Type*, ::Class_1_AEC3A955120B8107_ProcessorType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEC3A955120B8107_METHOD_1_BABB8B3FA01314A1_OFFSET))(this);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEC3A955120B8107_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}

	::Class_1_AEC3A955120B8107_Class_3_B8B36145F8ED68E8* Method_1_7863ECEDEDC5519D(::Class_1_AEC3A955120B8107_ProcessorType a1)
	{
		return ((::Class_1_AEC3A955120B8107_Class_3_B8B36145F8ED68E8*(*)(::PVOID, ::Class_1_AEC3A955120B8107_ProcessorType))((::PBYTE)hIl2Cpp + CLASS_1_AEC3A955120B8107_METHOD_1_7863ECEDEDC5519D_OFFSET))(this, a1);
	}

	::Class_1_AEC3A955120B8107_Class_3_B8B36145F8ED68E8* Method_1_0FFBDE5FB46DBA21(::System::Type* a1)
	{
		return ((::Class_1_AEC3A955120B8107_Class_3_B8B36145F8ED68E8*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_AEC3A955120B8107_METHOD_1_0FFBDE5FB46DBA21_OFFSET))(this, a1);
	}
};
