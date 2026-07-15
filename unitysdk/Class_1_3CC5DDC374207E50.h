#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnniversaryCollectionPanelData; }

#define CLASS_1_3CC5DDC374207E50_METHOD_1_026D357DA08A195C_OFFSET UNITYSDK_OFFSET(0x186FD120)
#define CLASS_1_3CC5DDC374207E50_METHOD_1_F78C032061CEA1F7_OFFSET UNITYSDK_OFFSET(0x186FD0A0)
#define CLASS_1_3CC5DDC374207E50__CTOR_OFFSET UNITYSDK_OFFSET(0x186FD090)

inline static constexpr unsigned int Class_1_3CC5DDC374207E50_TypeDefinitionIndex = 59635;

class Class_1_3CC5DDC374207E50 : public ::System::Object
{
public:
	::RPG::Client::AnniversaryCollectionPanelData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::AnniversaryCollectionPanelData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + CLASS_1_3CC5DDC374207E50__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F78C032061CEA1F7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CC5DDC374207E50_METHOD_1_F78C032061CEA1F7_OFFSET))(this);
	}

	::System::Void Method_1_026D357DA08A195C(::RPG::Client::AnniversaryCollectionPanelData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + CLASS_1_3CC5DDC374207E50_METHOD_1_026D357DA08A195C_OFFSET))(this, a1);
	}
};
