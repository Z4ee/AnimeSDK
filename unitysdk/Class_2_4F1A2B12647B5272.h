#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

class Class_1_2D2D4A639FB13B87;
class Class_1_9ADD1D872350330F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4F1A2B12647B5272_CLEAR_OFFSET UNITYSDK_OFFSET(0xD81B9F0)
#define CLASS_2_4F1A2B12647B5272_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0xD81B980)
#define CLASS_2_4F1A2B12647B5272_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xD81BA50)
#define CLASS_2_4F1A2B12647B5272__CTOR_OFFSET UNITYSDK_OFFSET(0xD81BFE0)

inline static constexpr unsigned int Class_2_4F1A2B12647B5272_TypeDefinitionIndex = 65926;

class Class_2_4F1A2B12647B5272 : public ::Class_1_3713064DEE761936
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9ADD1D872350330F*>* EDELMDIBDPG; // 0x20
	::Class_1_2D2D4A639FB13B87* HNEBOCDHJGF; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* AEMPGINAJLG; // 0x30
	::System::Boolean OAPDFFIBEBJ; // 0x38
	::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x3C
	::System::UInt32 MKHIJCGJOGI; // 0x40

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
