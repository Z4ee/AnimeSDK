#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F77BB6F5FCE2E0B;
namespace RPG::GameCore { class AIPathwayInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A1B5BC940FB8DDEF_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x117FC940)
#define CLASS_1_A1B5BC940FB8DDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x117FC9E0)

inline static constexpr unsigned int Class_1_A1B5BC940FB8DDEF_TypeDefinitionIndex = 46383;

class Class_1_A1B5BC940FB8DDEF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* Field_1_3; // 0x10
	::RPG::GameCore::AIPathwayInfo* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5F77BB6F5FCE2E0B*>* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1B5BC940FB8DDEF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1B5BC940FB8DDEF_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
