#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraArrangementPresetRow; }

#define RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A4FCD00)
#define RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA_GET_ARRANGEDCOMMONS_OFFSET UNITYSDK_OFFSET(0x1A4FCC50)
#define RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A4FCB90)
#define RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A4FCB20)
#define RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1A4FCB30)
#define RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FCCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraArrangementPresetData_TypeDefinitionIndex = 60614;

	class ChimeraArrangementPresetData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraArrangementPresetRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraArrangementPresetRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ArrangedCommons()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA_GET_ARRANGEDCOMMONS_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraArrangementPresetData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraArrangementPresetData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAARRANGEMENTPRESETDATA_CREATE_OFFSET))(a1);
		}
	};
}
