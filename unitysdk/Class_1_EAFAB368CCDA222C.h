#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelRankData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EAFAB368CCDA222C_METHOD_1_002D39232CF0AC21_OFFSET UNITYSDK_OFFSET(0xAFF37B0)
#define CLASS_1_EAFAB368CCDA222C_METHOD_1_438B627D5302EFB2_OFFSET UNITYSDK_OFFSET(0xAFF3720)
#define CLASS_1_EAFAB368CCDA222C_METHOD_1_BFE1B95B4EC14E02_OFFSET UNITYSDK_OFFSET(0xAFF35E0)
#define CLASS_1_EAFAB368CCDA222C__CTOR_OFFSET UNITYSDK_OFFSET(0xAFF31E0)

inline static constexpr unsigned int Class_1_EAFAB368CCDA222C_TypeDefinitionIndex = 59316;

class Class_1_EAFAB368CCDA222C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelRankData*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EAFAB368CCDA222C__CTOR_OFFSET))(this);
	}

	::RPG::Client::ChimeraDuelRankData* Method_1_BFE1B95B4EC14E02(::System::UInt32 a1)
	{
		return ((::RPG::Client::ChimeraDuelRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EAFAB368CCDA222C_METHOD_1_BFE1B95B4EC14E02_OFFSET))(this, a1);
	}

	::RPG::Client::ChimeraDuelRankData* Method_1_438B627D5302EFB2(::System::UInt32 a1)
	{
		return ((::RPG::Client::ChimeraDuelRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EAFAB368CCDA222C_METHOD_1_438B627D5302EFB2_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_002D39232CF0AC21()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_EAFAB368CCDA222C_METHOD_1_002D39232CF0AC21_OFFSET))();
	}
};
