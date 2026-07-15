#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

class Class_1_2D2D4A639FB13B87;
class Class_1_9ADD1D872350330F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4F1A2B12647B5272_CLEAR_OFFSET UNITYSDK_OFFSET(0x17D9AA50)
#define CLASS_2_4F1A2B12647B5272_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x17D9A9E0)
#define CLASS_2_4F1A2B12647B5272_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x17D9AAB0)
#define CLASS_2_4F1A2B12647B5272__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9B040)

inline static constexpr unsigned int Class_2_4F1A2B12647B5272_TypeDefinitionIndex = 62941;

class Class_2_4F1A2B12647B5272 : public ::Class_1_3713064DEE761936
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9ADD1D872350330F*>* Field_2_1; // 0x28
	::Class_1_2D2D4A639FB13B87* Field_2_2; // 0x30
	::RPG::Client::LittleGame::Match3::OpponentRole Field_2_3; // 0x38
	::System::Boolean Field_2_4; // 0x3C
	::System::UInt32 Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F1A2B12647B5272__CTOR_OFFSET))(this);
	}

	static ::Class_2_4F1A2B12647B5272* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_4F1A2B12647B5272*(*)())((::PBYTE)hIl2Cpp + CLASS_2_4F1A2B12647B5272_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F1A2B12647B5272_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F1A2B12647B5272_ONEXECUTE_OFFSET))(this);
	}
};
