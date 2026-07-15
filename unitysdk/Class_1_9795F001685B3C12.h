#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A0E178FC9445316D;
namespace RPG::GameCore { class AIPathwayInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9795F001685B3C12_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x164F81F0)
#define CLASS_1_9795F001685B3C12__CTOR_OFFSET UNITYSDK_OFFSET(0x164F82A0)

inline static constexpr unsigned int Class_1_9795F001685B3C12_TypeDefinitionIndex = 54989;

class Class_1_9795F001685B3C12 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A0E178FC9445316D*>* Field_1_0; // 0x10
	::RPG::GameCore::AIPathwayInfo* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9795F001685B3C12__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9795F001685B3C12_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}
};
