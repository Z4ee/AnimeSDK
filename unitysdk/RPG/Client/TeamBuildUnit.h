#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMBUILDUNIT_ADDALTERNATIVEAVATARID_OFFSET UNITYSDK_OFFSET(0xC9F3FF0)
#define RPG_CLIENT_TEAMBUILDUNIT_CHECKMATCH_OFFSET UNITYSDK_OFFSET(0xC9F4080)
#define RPG_CLIENT_TEAMBUILDUNIT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC9F42B0)
#define RPG_CLIENT_TEAMBUILDUNIT_EQUALS_OFFSET UNITYSDK_OFFSET(0xC9F41A0)
#define RPG_CLIENT_TEAMBUILDUNIT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC9F4360)
#define RPG_CLIENT_TEAMBUILDUNIT_GET_ALTERNATIVEAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC9F3C80)
#define RPG_CLIENT_TEAMBUILDUNIT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xC9F3C70)
#define RPG_CLIENT_TEAMBUILDUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F3C90)
#define RPG_CLIENT_TEAMBUILDUNIT___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xC9F4460)
#define RPG_CLIENT_TEAMBUILDUNIT___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC9F4470)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildUnit_TypeDefinitionIndex = 63720;

	class TeamBuildUnit : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AlternativeAvatarIDs_k__BackingField; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_GET_AVATARID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AlternativeAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_GET_ALTERNATIVEAVATARIDS_OFFSET))(this);
		}

		::System::Void AddAlternativeAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_ADDALTERNATIVEAVATARID_OFFSET))(this, a1);
		}

		::System::Boolean CheckMatch(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_CHECKMATCH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::TeamBuildUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuildUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDUNIT___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
