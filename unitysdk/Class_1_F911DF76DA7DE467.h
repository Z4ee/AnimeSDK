#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F911DF76DA7DE467_METHOD_1_236A4B6326ED587A_OFFSET UNITYSDK_OFFSET(0x9ED65B0)
#define CLASS_1_F911DF76DA7DE467_METHOD_1_24BDA33538434DCF_OFFSET UNITYSDK_OFFSET(0x9ED6400)
#define CLASS_1_F911DF76DA7DE467_METHOD_1_40F794ADA44A6657_OFFSET UNITYSDK_OFFSET(0x9ED66A0)
#define CLASS_1_F911DF76DA7DE467_METHOD_1_668B61169B7D7C80_OFFSET UNITYSDK_OFFSET(0x9ED6740)
#define CLASS_1_F911DF76DA7DE467_METHOD_1_7D7D87989A4C8F82_OFFSET UNITYSDK_OFFSET(0x9ED67A0)
#define CLASS_1_F911DF76DA7DE467_METHOD_1_945CD8129EEF238B_OFFSET UNITYSDK_OFFSET(0x9ED6860)
#define CLASS_1_F911DF76DA7DE467_METHOD_1_F14607AA7F4C6B80_OFFSET UNITYSDK_OFFSET(0x9ED6490)

inline static constexpr unsigned int Class_1_F911DF76DA7DE467_TypeDefinitionIndex = 38072;

class Class_1_F911DF76DA7DE467 : public ::System::Object
{
public:
	static ::System::UInt32 Method_1_24BDA33538434DCF()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_F911DF76DA7DE467_METHOD_1_24BDA33538434DCF_OFFSET))();
	}

	static ::System::Boolean Method_1_F14607AA7F4C6B80(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_F911DF76DA7DE467_METHOD_1_F14607AA7F4C6B80_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_236A4B6326ED587A(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_F911DF76DA7DE467_METHOD_1_236A4B6326ED587A_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::SubMissionState Method_1_40F794ADA44A6657(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::RPG::GameCore::SubMissionState(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_F911DF76DA7DE467_METHOD_1_40F794ADA44A6657_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* Method_1_668B61169B7D7C80(::RPG::Client::MapDef* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_F911DF76DA7DE467_METHOD_1_668B61169B7D7C80_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* Method_1_7D7D87989A4C8F82()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F911DF76DA7DE467_METHOD_1_7D7D87989A4C8F82_OFFSET))();
	}

	static ::RPG::GameCore::SubMissionInfoConfig* Method_1_945CD8129EEF238B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SubMissionInfoConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F911DF76DA7DE467_METHOD_1_945CD8129EEF238B_OFFSET))(a1);
	}
};
