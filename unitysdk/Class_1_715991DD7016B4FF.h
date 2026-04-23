#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_715991DD7016B4FF_METHOD_1_136407AC983CD15C_OFFSET UNITYSDK_OFFSET(0x9E36300)
#define CLASS_1_715991DD7016B4FF_METHOD_1_3FE10B5B55353F16_OFFSET UNITYSDK_OFFSET(0x9E359F0)
#define CLASS_1_715991DD7016B4FF_METHOD_1_9036CFAD14566A8D_OFFSET UNITYSDK_OFFSET(0x9E35BD0)
#define CLASS_1_715991DD7016B4FF_METHOD_1_9D58AD59257CEBC8_OFFSET UNITYSDK_OFFSET(0x9E35F70)
#define CLASS_1_715991DD7016B4FF_METHOD_1_B31E21BDBBA9FF85_OFFSET UNITYSDK_OFFSET(0x9E354B0)
#define CLASS_1_715991DD7016B4FF__CTOR_OFFSET UNITYSDK_OFFSET(0x9E36670)

inline static constexpr unsigned int Class_1_715991DD7016B4FF_TypeDefinitionIndex = 51884;

class Class_1_715991DD7016B4FF : public ::System::Object
{
public:
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Method_1_B31E21BDBBA9FF85()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF_METHOD_1_B31E21BDBBA9FF85_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_3FE10B5B55353F16(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::FixPoint>* a2)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF_METHOD_1_3FE10B5B55353F16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9036CFAD14566A8D(::Class_1_715991DD7016B4FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_715991DD7016B4FF*))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF_METHOD_1_9036CFAD14566A8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D58AD59257CEBC8(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF_METHOD_1_9D58AD59257CEBC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_136407AC983CD15C(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*))((::PBYTE)hIl2Cpp + CLASS_1_715991DD7016B4FF_METHOD_1_136407AC983CD15C_OFFSET))(this, a1);
	}
};
