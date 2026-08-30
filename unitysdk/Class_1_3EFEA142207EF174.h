#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3EFEA142207EF174_METHOD_1_0017038B7899A279_OFFSET UNITYSDK_OFFSET(0x179AD950)
#define CLASS_1_3EFEA142207EF174_METHOD_1_0D62FC38CC5C1E0E_OFFSET UNITYSDK_OFFSET(0x179AD760)
#define CLASS_1_3EFEA142207EF174_METHOD_1_14C1048746B86946_OFFSET UNITYSDK_OFFSET(0x179ADB80)
#define CLASS_1_3EFEA142207EF174_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x179AD8E0)
#define CLASS_1_3EFEA142207EF174_METHOD_1_812B27EF664F59CD_OFFSET UNITYSDK_OFFSET(0x179AD800)
#define CLASS_1_3EFEA142207EF174__CTOR_OFFSET UNITYSDK_OFFSET(0x179AD7F0)

inline static constexpr unsigned int Class_1_3EFEA142207EF174_TypeDefinitionIndex = 74329;

class Class_1_3EFEA142207EF174 : public ::System::Object
{
public:
	// static const ::System::Int32 CANCFJBPFLI = 0x6; // 0x0
	::RPG::GameCore::AvatarRelicRecommendRow* AAGOPEHGBIN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EFEA142207EF174__CTOR_OFFSET))(this);
	}

	static ::Class_1_3EFEA142207EF174* Method_1_0D62FC38CC5C1E0E(::System::UInt32 a1)
	{
		return ((::Class_1_3EFEA142207EF174*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3EFEA142207EF174_METHOD_1_0D62FC38CC5C1E0E_OFFSET))(a1);
	}

	::System::Void Method_1_812B27EF664F59CD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3EFEA142207EF174_METHOD_1_812B27EF664F59CD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3EFEA142207EF174_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::RPG::Client::RelicSmartSuit::RankType Method_1_0017038B7899A279(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
	{
		return ((::RPG::Client::RelicSmartSuit::RankType(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + CLASS_1_3EFEA142207EF174_METHOD_1_0017038B7899A279_OFFSET))(this, a1);
	}

	::System::Single Method_1_14C1048746B86946(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3EFEA142207EF174_METHOD_1_14C1048746B86946_OFFSET))(this, a1);
	}
};
