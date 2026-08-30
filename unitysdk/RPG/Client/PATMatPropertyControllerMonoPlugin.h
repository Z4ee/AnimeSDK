#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PATMatPropertyControllerBehavior_MatBlockType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class PATRenderer;
namespace RPG::Client { class PATMatPropertyControllerBehavior; }
namespace System { class String; }

#define RPG_CLIENT_PATMATPROPERTYCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xDA12570)
#define RPG_CLIENT_PATMATPROPERTYCONTROLLERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xDA125C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PATMatPropertyControllerMonoPlugin_TypeDefinitionIndex = 70657;

	class PATMatPropertyControllerMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::PATMatPropertyControllerBehavior*>
	{
	public:
		::System::String* PropertyName; // 0x30
		::RPG::Client::PATMatPropertyControllerBehavior_MatBlockType DataType; // 0x38
		::System::Single FloatData; // 0x3C
		::UnityEngine::Color ColorData; // 0x40
		::UnityEngine::Vector4 VectorData; // 0x50
		::PATRenderer* TargetPatRenderer; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PATMATPROPERTYCONTROLLERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PATMATPROPERTYCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
