#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesSourceSystemType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesEffectSourceRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESBUFFSOURCE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9F8BAF0)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x9F8BA60)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9F8BC00)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F8BB40)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F8BC80)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_GET_ICON_OFFSET UNITYSDK_OFFSET(0x9F8BE70)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F8BCD0)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x9F8BE40)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9F8BE20)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9F8BCF0)
#define RPG_CLIENT_PLANETFESBUFFSOURCE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9F8BD70)
#define RPG_CLIENT_PLANETFESBUFFSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F8BAE0)
#define RPG_CLIENT_PLANETFESBUFFSOURCE___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F8BE90)
#define RPG_CLIENT_PLANETFESBUFFSOURCE___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F8BEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBuffSource_TypeDefinitionIndex = 54139;

	class PlanetFesBuffSource : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesEffectSourceRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::PlanetFesEffectSourceRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEffectSourceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE__CTOR_OFFSET))(this, row);
		}

		static ::RPG::Client::PlanetFesBuffSource* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::PlanetFesBuffSource*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_CREATE_OFFSET))(id);
		}

		static ::RPG::Client::PlanetFesBuffSource* Create_1(::RPG::GameCore::PlanetFesEffectSourceRow* row)
		{
			return ((::RPG::Client::PlanetFesBuffSource*(*)(::RPG::GameCore::PlanetFesEffectSourceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_CREATE_1_OFFSET))(row);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::PlanetFesBuffSource* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::RPG::Client::PlanetFesBuffSource* lhs, ::RPG::Client::PlanetFesBuffSource* rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::PlanetFesBuffSource*, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::PlanetFesBuffSource* lhs, ::RPG::Client::PlanetFesBuffSource* rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::PlanetFesBuffSource*, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE_OP_INEQUALITY_OFFSET))(lhs, rhs);
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

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUFFSOURCE___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
