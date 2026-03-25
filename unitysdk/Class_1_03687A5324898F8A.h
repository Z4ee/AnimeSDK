#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03687A5324898F8A_METHOD_1_0D62FC38CC5C1E0E_OFFSET UNITYSDK_OFFSET(0x8DE9040)
#define CLASS_1_03687A5324898F8A_METHOD_1_14C1048746B86946_OFFSET UNITYSDK_OFFSET(0x8DE94A0)
#define CLASS_1_03687A5324898F8A_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x8DE91C0)
#define CLASS_1_03687A5324898F8A_METHOD_1_77580B5CB62735EE_OFFSET UNITYSDK_OFFSET(0x8DE9230)
#define CLASS_1_03687A5324898F8A_METHOD_1_812B27EF664F59CD_OFFSET UNITYSDK_OFFSET(0x8DE90E0)
#define CLASS_1_03687A5324898F8A__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE90D0)

inline static constexpr unsigned int Class_1_03687A5324898F8A_TypeDefinitionIndex = 61184;

class Class_1_03687A5324898F8A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x6; // 0x0
	::RPG::GameCore::AvatarRelicRecommendRow* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03687A5324898F8A__CTOR_OFFSET))(this);
	}

	static ::Class_1_03687A5324898F8A* Method_1_0D62FC38CC5C1E0E(::System::UInt32 a1)
	{
		return ((::Class_1_03687A5324898F8A*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_03687A5324898F8A_METHOD_1_0D62FC38CC5C1E0E_OFFSET))(a1);
	}

	::System::Void Method_1_812B27EF664F59CD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_03687A5324898F8A_METHOD_1_812B27EF664F59CD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_03687A5324898F8A_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::RPG::Client::RelicSmartSuit::RankType Method_1_77580B5CB62735EE(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
	{
		return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + CLASS_1_03687A5324898F8A_METHOD_1_77580B5CB62735EE_OFFSET))(this, a1);
	}

	::System::Single Method_1_14C1048746B86946(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_03687A5324898F8A_METHOD_1_14C1048746B86946_OFFSET))(this, a1);
	}
};
