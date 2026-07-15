#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesSourceSystemType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesEffectSourceRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESBUFFSOURCE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1A960CD0)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A960C40)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A960DB0)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A960D20)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A960E80)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1A961140)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A960F00)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x1A9610D0)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1A961080)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A960F50)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A961020)
#define RPG_CLIENT_PLANETFESBUFFSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A960CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBuffSource_TypeDefinitionIndex = 63592;

	class PlanetFesBuffSource : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesEffectSourceRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::PlanetFesEffectSourceRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEffectSourceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::PlanetFesBuffSource* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlanetFesBuffSource*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesBuffSource* Create_1(::RPG::GameCore::PlanetFesEffectSourceRow* a1)
		{
			return ((::RPG::Client::PlanetFesBuffSource*(*)(::RPG::GameCore::PlanetFesEffectSourceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_CREATE_1_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::PlanetFesBuffSource* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::PlanetFesBuffSource* a1, ::RPG::Client::PlanetFesBuffSource* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::PlanetFesBuffSource*, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::PlanetFesBuffSource* a1, ::RPG::Client::PlanetFesBuffSource* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::PlanetFesBuffSource*, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesSourceSystemType get_SourceType()
		{
			return ((::RPG::GameCore::PlanetFesSourceSystemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_GET_SOURCETYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_GET_ICON_OFFSET))(this);
		}
	};
}
