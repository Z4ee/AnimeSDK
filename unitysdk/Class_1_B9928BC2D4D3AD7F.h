#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_813;
namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9928BC2D4D3AD7F_METHOD_1_2572A53AC88D6E50_OFFSET UNITYSDK_OFFSET(0xA4BB8B0)
#define CLASS_1_B9928BC2D4D3AD7F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA4BBA30)
#define CLASS_1_B9928BC2D4D3AD7F__CTOR_OFFSET UNITYSDK_OFFSET(0xA4BB860)

inline static constexpr unsigned int Class_1_B9928BC2D4D3AD7F_TypeDefinitionIndex = 61862;

class Class_1_B9928BC2D4D3AD7F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_813*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9928BC2D4D3AD7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2572A53AC88D6E50(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_B9928BC2D4D3AD7F_METHOD_1_2572A53AC88D6E50_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9928BC2D4D3AD7F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
