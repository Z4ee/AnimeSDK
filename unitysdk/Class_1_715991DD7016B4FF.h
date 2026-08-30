#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_715991DD7016B4FF_METHOD_1_38E4502D52EDFFE7_OFFSET UNITYSDK_OFFSET(0x152BC010)
#define CLASS_1_715991DD7016B4FF_METHOD_1_3FE10B5B55353F16_OFFSET UNITYSDK_OFFSET(0x152BB990)
#define CLASS_1_715991DD7016B4FF_METHOD_1_58D1848ADBA6C08E_OFFSET UNITYSDK_OFFSET(0x152BB360)
#define CLASS_1_715991DD7016B4FF_METHOD_1_941AB84F725F0C37_OFFSET UNITYSDK_OFFSET(0x152BC4D0)
#define CLASS_1_715991DD7016B4FF_METHOD_1_CD64FADAE3A9747A_OFFSET UNITYSDK_OFFSET(0x152BBB30)
#define CLASS_1_715991DD7016B4FF__CTOR_OFFSET UNITYSDK_OFFSET(0x152BC960)

inline static constexpr unsigned int Class_1_715991DD7016B4FF_TypeDefinitionIndex = 56482;

class Class_1_715991DD7016B4FF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* NHCHOBLPJGO; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* OHCJEIDJIKC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Method_1_58D1848ADBA6C08E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF_METHOD_1_58D1848ADBA6C08E_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_3FE10B5B55353F16(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF_METHOD_1_3FE10B5B55353F16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD64FADAE3A9747A(::Class_1_715991DD7016B4FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_715991DD7016B4FF*))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF_METHOD_1_CD64FADAE3A9747A_OFFSET))(this, a1);
	}

	::System::Void Method_1_38E4502D52EDFFE7(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF_METHOD_1_38E4502D52EDFFE7_OFFSET))(this, a1);
	}

	::System::Void Method_1_941AB84F725F0C37(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF_METHOD_1_941AB84F725F0C37_OFFSET))(this, a1);
	}
};
